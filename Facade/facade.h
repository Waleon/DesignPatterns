#ifndef FACADE_H
#define FACADE_H

#include "sub_system.h"

// 网购外观
class OnlineShoppingFacade
{
public:
    OnlineShoppingFacade() {
        m_nCount = 0;
    }

    // 返回跟踪次数
    int followupNum() {
        return m_nCount;
    }

    // 提交订单
    void submitRequest() {
        m_nState = 0;
    }

    // 跟踪订单
    bool checkStatus(){
        // 收到订单请求
        switch (m_nState) {
        case Received:
            m_nState++;
            // 将请求转发给订单团队
            m_order.submitRequest();
            std::cout << "********** 提交给订单团队，跟踪次数：" << m_nCount << " **********" << std::endl;
            break;
        case SubmittedToOrderTeam:
            // 如果订单团队完成验证，则向供应商发出请求
            if (m_order.checkStatus()) {
                m_nState++;
                m_vendor.submitRequest();
                std::cout << "********** 提交给供应商，跟踪次数：" << m_nCount << " **********" << std::endl;
            }
            break;
        case SubmittedToVendor:
            // 如果供应商已将包裹打包，将其转发给快递员
            if (m_vendor.checkStatus()) {
                m_nState++;
                m_courier.submitRequest();
                std::cout << "********** 提交给快递员，跟踪次数：" << m_nCount << " **********" << std::endl;
            }
            break;
        case SubmittedToCourier:
            // 如果包裹交付，订单完成
            if (m_courier.checkStatus())
                return true;
        default:
            break;
        }

        m_nCount++;

        // 订单未完成
        return false;
    }

private:
    enum States {
        Received,  // 收到
        SubmittedToOrderTeam,  // 提交给订单团队
        SubmittedToVendor,  // 提交给供应商
        SubmittedToCourier  // 提交给快递员
    };

    int m_nState;  // 订单状态
    int m_nCount;  // 跟踪次数

    OrderTeam m_order;
    Vendor m_vendor;
    Courier m_courier;
};

#endif // FACADE_H
