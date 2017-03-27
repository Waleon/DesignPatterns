#include "concrete_subject.h"
#include "concrete_observer.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    // 创建主题、观察者
    ConcreteSubject *subject = new ConcreteSubject();
    IObserver *observer1 = new ConcreteObserver("Jack Ma");
    IObserver *observer2 = new ConcreteObserver("Pony");

    // 注册观察者
    subject->Attach(observer1);
    subject->Attach(observer2);

    // 更改价格，并通知观察者
    subject->SetPrice(12.5);
    subject->Notify();

    // 注销观察者
    subject->Detach(observer2);
    // 再次更改状态，并通知观察者
    subject->SetPrice(15.0);
    subject->Notify();

    SAFE_DELETE(observer1);
    SAFE_DELETE(observer2);
    SAFE_DELETE(subject);

    getchar();

    return 0;
}
