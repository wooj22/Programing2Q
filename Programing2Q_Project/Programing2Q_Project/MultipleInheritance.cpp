//#include <iostream>
//using namespace std;
//
//class Cbase {
//public:
//    void MyFunc() { cout << "CBase Func" << endl; }
//};
//
//class COne : virtual public Cbase {};		// ���� ��� -> �����̸�� ���� ����
//
//class CTwo : virtual public Cbase {};		// ���� ��� -> �����̸�� ���� ����
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
//    obj.Cbase::MyFunc();    // Cbase�� ��ġ�� ����
//
//    return 0;
//}