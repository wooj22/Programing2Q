//#include <iostream>
//using namespace std;
//
//class Cbase {
//public:
//    void MyFunc() { cout << "CBase Func" << endl; }
//};
//
//class COne : virtual public Cbase {};		// 가상 상속 -> 다이이몬드 문제 방지
//
//class CTwo : virtual public Cbase {};		// 가상 상속 -> 다이이몬드 문제 방지
//
//class CThree : public COne, public CTwo
//{
//public:
//    void Func() { MyFunc(); } // COne? CTwo?
//};
//
//
//int main()
//{
//    CThree obj;             // Cbase + COne +  CTwo + CThree
//    obj.Cbase::MyFunc();    // Cbase가 겹치지 않음
//
//    return 0;
//}