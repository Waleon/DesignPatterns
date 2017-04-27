#ifndef SUB_SYSTEM_H
#define SUB_SYSTEM_H

#include <iostream>
#include <string>
#include <windows.h>

const std::string c_stateToStrCourier[] = { "收到", "验证可达性", "分配人员", "派送包裹", "获取交货确认", "完成" };
const std::string c_stateToStrVendor[] = { "收到", "确认库存", "从仓库得到物品", "包装", "联系快递员", "完成" };
const std::string c_stateToStrOrderTeam[] = { "收到", "确认付款", "联系供应商", "完成" };
const int c_nMsec = 300;  // 休眠时间（毫秒） - Sleep(c_nMsec) 处可以替换为一些有用的代码

// 订单团队
class OrderTeam
{
public:
	void submitRequest() {
		m_nState = 0;
	}

	// 检测状态
	bool checkStatus() {
		std::cout << "订单团队 - 当前状态：" << c_stateToStrOrderTeam[m_nState] << std::endl;

		Sleep(c_nMsec);
		m_nState++;

		return (m_nState == Complete);
	}

private:
	enum States {
		Received,  // 收到
		VerifyPayment,  // 确认付款
		ContactVendor,  // 联系供应商
		Complete  // 完成
	};
	int m_nState;
};

// 供应商
class Vendor
{
public:
	void submitRequest() {
		m_nState = 0;
	}

	// 检测状态
	bool checkStatus() {
		std::cout << "供应商 - 当前状态：" << c_stateToStrVendor[m_nState] << std::endl;

		Sleep(c_nMsec);
		m_nState++;

		return (m_nState == Complete);
	}

private:
	enum States {
		Received,  // 收到
		VerifyInventory,  // 确认库存
		GetItemFromWareHouse,  // 从仓库得到物品
		PackItem,  // 包装
		ContactCourier,  // 联系快递员
		Complete  // 完成
	};
	int m_nState;
};

// 快递员
class Courier
{
public:
	// 将请求转发给快递员
	void submitRequest() {
		m_nState = 0;
	}

	// 检测状态
	bool checkStatus() {
		std::cout << "快递员 - 当前状态：" << c_stateToStrCourier[m_nState] << std::endl;

		Sleep(c_nMsec);
		m_nState++;

		return (m_nState == Complete);
	}

private:
	enum States {
		Received,  // 收到
		VerifyReachbility,  // 验证可达性
		AssignPerson,  // 分配人员
		DispatchPackage,  // 派送包裹
		GetDeliveryConfirmation,  // 获取交货确认
		Complete  // 完成
	};
	int m_nState;
};

#endif // SUB_SYSTEM_H