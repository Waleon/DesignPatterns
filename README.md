# C++ 设计模式

[设计模式（Design Pattern）](https://waleon.blog.csdn.net/article/details/66974516 "C++ 设计模式")代表了最佳的实践，在面向对象的编程中被很多老鸟们反复使用。使用设计模式有很多好处：

- 可重用代码
- 保证代码可靠性
- 使代码更易被他人理解
- ......

毫无疑问，设计模式于己、于人、于系统都是多赢的。《设计模式》之于程序员，就好比《圣经》之于耶稣信徒一样，意义可想而知！

# 什么是 GoF

谈及设计模式，必然离不开 GoF：

> GoF：Gang of Four，也称为“四人组”，即：EErich Gamma、Richard Helm、Ralph Johnson 和 John Vlissides 四人。

1994 年，这几位大牛合著出版了一本名为《Design Patterns: Elements of Reusable Object-Oriented Software》（即：《设计模式》）的书。该书首次提到了软件开发中设计模式的概念，将设计模式提升到理论高度，并将之规范化。书中提及了 23 种基本设计模式，时至今日，在可复用面向对象软件的发展过程中，新的设计模式仍然不断出现。

![这里写图片描述](https://imgconvert.csdnimg.cn/aHR0cDovL2ltZy5ibG9nLmNzZG4ubmV0LzIwMTcwMzI3MTgwMTI0MDI5?x-oss-process=image/format,png)

这就是传说中的“风尘四侠”，比起国外的其他技术大咖（不修边幅），看起来要好很多~O(∩_∩)O~。

# 设计模式的类型

根据《设计模式》参考书，共有 23 种设计模式，这些模式可以分为三类：

类型 | 描述
:--- | :---
创建型模式（Creational Patterns） | 用于构建对象，以便它们可以从实现系统中分离出来。
结构型模式（Structural Patterns） | 用于在许多不同的对象之间形成大型对象结构。
行为型模式（Behavioral Patterns） | 用于管理对象之间的算法、关系和职责。

## 创建型模式

- [单例模式](http://waleon.blog.csdn.net/article/details/61615495 "单例模式")（Singleton Pattern）
保证一个类仅有一个实例，并提供一个访问它的全局访问点。 

- [抽象工厂模式](http://waleon.blog.csdn.net/article/details/70653800 "抽象工厂模式") （Abstract Factory Pattern）
提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类。

- [建造者模式](http://waleon.blog.csdn.net/article/details/66968761 "建造者模式")（Builder Pattern）
将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

-   [工厂方法模式](http://waleon.blog.csdn.net/article/details/70652858 "工厂方法模式") （Factory Method Pattern）
定义一个用于创建对象的接口，让子类决定将哪一个类实例化。Factory Method 使一个类的实例化延迟到其子类。

- [原型模式](http://waleon.blog.csdn.net/article/details/66969965 "原型模式")（Prototype Pattern）
用原型实例指定创建对象的种类，并且通过拷贝这个原型来创建新的对象。

## 结构型模式

- [适配器模式](http://waleon.blog.csdn.net/article/details/66973296 "适配器模式")（Adapter Pattern）
将一个类的接口转换成客户希望的另外一个接口。Adapter 模式使得原本由于接口不兼容而不能一起工作的那些类可以一起工作。

-  [桥接模式](http://waleon.blog.csdn.net/article/details/79501177 "桥接模式")（Bridge Pattern）
将抽象部分与它的实现部分分离，使它们都可以独立地变化。

- [装饰者模式](http://waleon.blog.csdn.net/article/details/66973836 "装饰者模式")（Decorator Pattern）
动态地给一个对象添加一些额外的职责。就扩展功能而言，它比生成子类方式更为灵活。

- [组合模式](http://waleon.blog.csdn.net/article/details/71240662 "组合模式")（Composite Pattern）
将对象组合成树形结构以表示“部分-整体”的层次结构。它使得客户对单个对象和复合对象的使用具有一致性。

- [外观模式](http://waleon.blog.csdn.net/article/details/70850367 "外观模式")（Facade Pattern）
为子系统中的一组接口提供一个一致的界面，Facade 模式定义了一个高层接口，这个接口使得这一子系统更加容易使用。

-  [享元模式](http://waleon.blog.csdn.net/article/details/79629690 "享元模式")（Flyweight Pattern）
运用共享技术有效地支持大量细粒度的对象。

- [代理模式](https://waleon.blog.csdn.net/article/details/78533179 "代理模式")（Proxy Pattern）
为其他对象提供一个代理以控制对这个对象的访问。

## 行为型模式

-  [模版方法模式](http://waleon.blog.csdn.net/article/details/79403900 "模版方法模式") （Template Method Pattern）
定义一个操作中的算法的骨架，而将一些步骤延迟到子类中。Template Method 使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。

- [命令模式](http://waleon.blog.csdn.net/article/details/62060457 "命令模式")（Command Pattern）
将一个请求封装为一个对象，从而使你可用不同的请求对客户进行参数化；对请求排队或记录请求日志，以及支持可取消的操作。

- 迭代器模式（Iterator Pattern）
提供一种方法顺序访问一个聚合对象中各个元素，而又不需暴露该对象的内部表示。

- [观察者模式](http://waleon.blog.csdn.net/article/details/61925314 "观察者模式")（Observer Pattern）
定义对象间的一种一对多的依赖关系，以便当一个对象的状态发生改变时，所有依赖于它的对象都得到通知并自动刷新。

-  [中介者模式](http://waleon.blog.csdn.net/article/details/79242388 "中介者模式")（Mediator Pattern）
用一个中介对象来封装一系列的对象交互。中介者使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。

-  [备忘录模式](http://waleon.blog.csdn.net/article/details/79292435 "备忘录模式") （Memento Pattern）
在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。这样以后就可将该对象恢复到保存的状态。

- 解释器模式（Interpreter Pattern）
给定一个语言，定义它的文法的一种表示，并定义一个解释器，该解释器使用该表示来解释语言中的句子。

- [状态模式](http://waleon.blog.csdn.net/article/details/78647519 "状态模式")（State Pattern）
允许一个对象在其内部状态改变时改变它的行为。对象看起来似乎修改了它所属的类。

-  [策略模式](http://waleon.blog.csdn.net/article/details/79242297 "策略模式")（Strategy Pattern）
定义一系列的算法，把它们一个个封装起来，并且使它们可相互替换。本模式使得算法的变化可独立于使用它的客户端。

-  [职责链模式](http://waleon.blog.csdn.net/article/details/79077715 "职责链模式") （Chain of Responsibility Pattern）
为解除请求的发送者和接收者之间耦合，而使多个对象都有机会处理这个请求。将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它。

-  [访问者模式](http://waleon.blog.csdn.net/article/details/79364406 "访问者模式") （Visitor Pattern）
表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作。

# N 问设计模式

- **GoF 中提出的设计模式，至今仍被人津津乐道，你了解多少呢？**
  - 没听过
  - 听说过，不知道具体能干嘛
  - 了解，会用其中的两三种
  - 熟悉，能根据实际情况快速设计
  - 精通，游刃有余
 
 第一种：“虽然不懂你们在说什么，貌似很厉害的样子”。大牛才会用到的东西，高端而又神秘！ 
 最后一种：“已上天，正和太阳肩并肩”。心中未曾想用设计模式，写出的代码却处处都是。 
 倘若你和我一样，属于其他情况。。。那么，就认真学习吧！

- **设计模式能带给你什么？**

 ![Design pattern](https://imgconvert.csdnimg.cn/aHR0cDovL2ltZy5ibG9nLmNzZG4ubmV0LzIwMTgwMjAyMTkzNTU3MDg1?x-oss-process=image/format,png)

 从“猿猴 -> 程序猿 ”的巨变，怎么样，是不是很炫酷？

- **有些人说设计模式没用，真是这样吗？**

 引用一句哲学名言：存在即合理。当然，若要扯非 OO 语言，也许真没什么用！但可以肯定的是，非 OO 语言完全可以借鉴 OO 的思想，设计模式也不例外！

- **设计模式有多重要？**

 要做一位大神或所谓的高手，基本之一就是要懂得若干设计模式。设计模式是软件工程的基石脉络，如同大厦的结构一样，你说有多重要？

- **怎么学习设计模式？**

 设计模式不是基于理论发明的，而是先有问题场景，再基于需求和情景不断演化设计方案，最后把一些方案标准化成“模式”。

 所以，通过实际案例学习是最好的！在讨论每一个设计模式时，要尽量用生活中的真实问题来理解和分析。然后尝试一步步地阐述设计，并以一个能匹配某些模式的设计收尾。

 通过先分析问题，然后阐述解决方案，最后得到一个设计模式，这样就不用死记那些图形和定义了！

- **如何选择设计模式？**

 设计模式是针对某种情景下某种问题的某种解决方案，也就是说，每个模式都有自己的使用场景、使用方法和使用后果。正所谓物有两极，各模式也存在相应的优缺点，得其优，而避其劣，终得之！

- **为什么要写设计模式？**

 虽然设计模式被很多人念叨并不断书写，但笔者还是决定追随前人的脚步。我很喜欢一句话：“你会了不代表你真的会，要是你能让别人也会，你才是正的会了”！

# 最后的话

要真正领悟设计模式的精髓，需要有大量实践经验的积累，这往往是一个漫长的过程。

博客中涉及的所有设计模式都基于实际案例，经过反复打磨。为了使其更加生动、形象，每个模式都有相应的故事化讲解。


# 关于作者

作者：[一去、二三里](https://waleon.blog.csdn.net/)，爱编程、爱学习、爱生活！

- [个人博客](https://waleon.blog.csdn.net/)
- 个人微信：iwaleon（加我微信，邀请入 500 人微信群）
- 个人 QQ：550755606
- QQ 技术交流群：242790253

更多干货，请扫码关注我的微信公众号，不要太惊喜哦~

![微信公众号](https://raw.githubusercontent.com/Waleon/DesignPatterns/master/assets/qrcode.jpg)
