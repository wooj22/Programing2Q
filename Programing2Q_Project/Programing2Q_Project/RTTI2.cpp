//// 부모클래스 포인터 일 때, 어떤 자식클래스타입 인지 알아내기

//#include<iostream>
//#include<typeinfo>
//using namespace std;
//
//class Parent {
//public:
//    Parent() {}
//    virtual ~Parent() {}
//};
//
//class Child : public Parent {
//public:
//    Child() {}
//};
//
//int main()
//{
//    // 부모 클래스 선언
//    Parent* pParent = new Parent();
//    cout << typeid(pParent).name() << endl;
//
//    // 다운 캐스팅
//    Child* pChild = dynamic_cast<Child*>(pParent);
//    cout << typeid(pChild).name() << endl;
//
//    return 0;
//}