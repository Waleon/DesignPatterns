#include "singleton.h"

//// 单例 - 懒汉式
//Singleton *Singleton::m_pSingleton = NULL;

//Singleton *Singleton::GetInstance()
//{
//    if (m_pSingleton == NULL)
//        m_pSingleton = new Singleton();

//    return m_pSingleton;
//}

//// 单例 - 饿汉式
//Singleton *Singleton::m_pSingleton = new Singleton();

//Singleton *Singleton::GetInstance()
//{
//    return m_pSingleton;
//}


//// 单例 - 懒汉式（双检锁 DCL 机制）
//Singleton *Singleton::m_pSingleton = NULL;
//mutex Singleton::m_mutex;
//
//Singleton *Singleton::GetInstance()
//{
//    if (m_pSingleton == NULL) {
//        std::lock_guard<std::mutex> lock(m_mutex);  // 加锁
//        if (m_pSingleton == NULL) {
//            m_pSingleton = new Singleton();
//        }
//    }
//    return m_pSingleton;
//}


// 单例 - 懒汉式（双检锁 DCL 机制）
Singleton *Singleton::m_pSingleton = NULL;

Singleton *Singleton::GetInstance()
{
    if (m_pSingleton == NULL)
		m_pSingleton = new Singleton();

    return m_pSingleton;
}
