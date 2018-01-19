#include "singleton.h"
#include <iostream>

using namespace std;

Singleton::GC Singleton::GC::gc; // 重要

int main()
{
    //Singleton single = Singleton::GetInstance();

	//Singleton *pSingleton1 = Singleton::GetInstance();
	//Singleton *pSingleton2 = Singleton::GetInstance();

	//cout << (pSingleton1 == pSingleton2) << endl;

	//Singleton::GetInstance().doSomething();  // OK
	//Singleton single = Singleton::GetInstance();  // Error 不能编译通过

    Singleton::GetInstance();
    //Singleton::GetInstance()->DestoryInstance();  // 手动释放

    return 0;
}
