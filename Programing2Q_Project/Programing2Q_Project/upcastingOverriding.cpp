//#include <iostream>
//using namespace std;
//
//class CBase
//{
//public:
//	CBase() {}
//	void Func() { cout << "CBase Func()" << endl; }
//};
//
//class CDerived : public CBase
//{
//public:
//	CDerived() {}
//	void Func() { cout << "CDerived Func()" << endl; }
//};
//
//
//int main(void)
//{
//	// 업캐스팅 한 객체는 부모/자식중 누구의 함수를 호출할까?
//	CBase* pBase = new CDerived();
//	pBase->Func();  // 부모의 함수를 호출한다.
//
//	return 0;
//}
