//#include <iostream>   

//class Base
//{
//public:
//    virtual ~Base() {}
//};
//
//class Derived1 : public Base {};
//class Derived2 : public Base {};
//
//// 다형성을 이용한 함수 -> 근데 실행시간에 어떤 자료형이 올지 어떻게 알지?
//// pB 가 어떤 객체를 가르키고 있을까?  
//void F(Base* pB)
//{
//    // 1. typeid 를 이용한 RTTI (Run Time Type Info)
//    if (typeid(*pB) == typeid(Derived2))
//        std::cout << typeid(*pB).name() << std::endl;
//    else
//        std::cout << "No!" << std::endl;
//
//    // 2. dynamic_cast 를 이용한 RTTI (성공하면 cast된 pointer, 실패하면 null(0)을 retrurn)   
//    if (dynamic_cast<Derived2*>(pB))
//        std::cout << typeid(*pB).name() << std::endl;
//    else
//        std::cout << "No!" << std::endl;
//}
//
//int main()
//{
//    Base* p1 = new Derived1;
//    Base* p2 = new Derived2;
//    Derived1* pD = new Derived1;
//
//    F(p1);
//    F(p2);
//    F(pD);
//
//    return 0;
//}