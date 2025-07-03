//// 함수 템플릿의 static 변수는 템플릿 함수 별로 독립적이다
//// 클래스 템플릿의 static 변수는 템플릿 클래스 별로 독립적이다
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class CStaticMember
//{
//private:
//	static T mem;		// CStaticMember<T>::mem
//
//public:
//	void Add(int num) { mem += num; }
//	void Show() { cout << mem << endl; }
//};
//
//// static member init
//template <typename T>
//T CStaticMember<T>::mem = 0;		
//
//// static 멤버 특수화
//template<>						
//long CStaticMember<long>::mem = 5;	
//
//int main(void)
//{
//	// 1) CStaticMember<int>::mem
//	CStaticMember<int> obj1;
//	CStaticMember<int> obj2;
//	obj1.Add(2);
//	obj2.Add(3);
//	obj1.Show();
//
//	// 2) CStaticMember<long>::mem
//	// <Long> 타입은 특수화 되어 있으므로 mem은 5로 초기화됨
//	CStaticMember<long> obj3;
//	CStaticMember<long> obj4;
//	obj3.Add(100);
//	obj4.Show();
//
//	return 0;
//}
