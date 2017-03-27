#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

using namespace std;

//// 非真正意义上的单例
//class Singleton
//{
//public:
//    static Singleton& GetInstance()
//    {
//        static Singleton instance;
//        return instance;
//    }

//private:
//    Singleton() {}
//};


//// 单例
//class Singleton
//{
//public:
//    // 修改返回类型为指针类型
//    static Singleton* GetInstance()
//    {
//        static Singleton instance;
//        return &instance;
//    }

//private:
//    Singleton() {}
//};

//// 单例
//class Singleton
//{
//public:
//    static Singleton& GetInstance()
//    {
//        static Singleton instance;
//        return instance;
//    }

//    void doSomething() {
//        cout << "Do something" << "\n";
//    }

//private:
//    Singleton() {}  // 构造函数（被保护）
//    Singleton(Singleton const &);  // 无需实现
//    Singleton& operator = (const Singleton &);  // 无需实现
//};

//// 单例 - 懒汉式/饿汉式公用
//class Singleton
//{
//public:
//    static Singleton* GetInstance();

//private:
//    Singleton() {}  // 构造函数（被保护）

//private:
//    static Singleton *m_pSingleton;  // 指向单例对象的指针
//};

//#include <iostream>
//#include <mutex>
//using namespace std;
//
//// 单例 - 懒汉式/饿汉式公用
//class Singleton
//{
//public:
//    static Singleton* GetInstance();
//private:
//    Singleton() {}  // 构造函数（被保护）
//
//private:
//    static Singleton *m_pSingleton;  // 指向单例对象的指针
//    static mutex m_mutex;  // 锁
//};


// 单例 - 懒汉式/饿汉式公用
class Singleton
{
public:
    static Singleton* GetInstance();
    //    static void DestoryInstance()
    //    {
    //        if (m_pSingleton != NULL) {
    //            delete m_pSingleton;
    //            m_pSingleton = NULL;
    //        }
    //    }

private:
    Singleton() {}  // 构造函数（被保护）

private:
    static Singleton *m_pSingleton;  // 指向单例对象的指针

    // GC 机制
    class GC
    {
    public:
        ~GC()
        {
            // 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
            if (m_pSingleton != NULL) {
                cout << "Here destroy the m_pSingleton..." << endl;
                delete m_pSingleton;
                m_pSingleton = NULL;
            }
        }
        static GC gc;  // 用于释放单例
    };
};

#endif // SINGLETON_H
