//// 클래스 템플릿은 부분 특수화가 가능하다.
//// 함수 템플릿은 부분 특수화 없음 -> 오버로드를 통해서 해결
//
//#include <iostream>
//using namespace std;
//
//template <typename T1, typename T2>
//class MySimple
//{
//public:
//	void WhoAreYou()
//	{
//		//cout << "size of T1: " << sizeof(T1) << endl;
//		//cout << "size of T2: " << sizeof(T2) << endl;
//		cout << "<typename T1, typename T2>" << endl;
//	}
//};
//
//// 클래스 템플릿의 <int, double>에 대한 특수화
//template<>
//class MySimple<int, double>		
//{
//public:
//	void WhoAreYou()
//	{
//		//cout << "size of int: " << sizeof(int) << endl;
//		//cout << "size of double: " << sizeof(double) << endl;
//		cout << "<int, double>" << endl;
//	}
//};
//
//// 클래스 템플릿의 부분 특수화
//// 타입 매개변수중 일부만 특수화 하는 것
//template<typename T1>
//class MySimple<T1, double>		
//{
//public:
//	void WhoAreYou()
//	{
//		//cout << "size of T1: " << sizeof(T1) << endl;
//		//cout << "size of double: " << sizeof(double) << endl;
//		cout << "<T1, double>" << endl;
//	}
//};
//
//int main(void)
//{
//	MySimple<char, double> obj1;	// MySimple<T1, double>		
//	obj1.WhoAreYou();
//
//	MySimple<int, long> obj2;	    // MySimple<typename T1, typename T2>
//	obj2.WhoAreYou();
//
//	MySimple<int, double> obj3;	    // MySimple<int, double>		
//	obj3.WhoAreYou();
//
//	return 0;
//}