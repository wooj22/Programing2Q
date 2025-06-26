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
//// �������� �̿��� �Լ� -> �ٵ� ����ð��� � �ڷ����� ���� ��� ����?
//// pB �� � ��ü�� ����Ű�� ������?  
//void F(Base* pB)
//{
//    // 1. typeid �� �̿��� RTTI (Run Time Type Info)
//    if (typeid(*pB) == typeid(Derived2))
//        std::cout << typeid(*pB).name() << std::endl;
//    else
//        std::cout << "No!" << std::endl;
//
//    // 2. dynamic_cast �� �̿��� RTTI (�����ϸ� cast�� pointer, �����ϸ� null(0)�� retrurn)   
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