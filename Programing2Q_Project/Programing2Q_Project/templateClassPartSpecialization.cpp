//// Ŭ���� ���ø��� �κ� Ư��ȭ�� �����ϴ�.
//// �Լ� ���ø��� �κ� Ư��ȭ ���� -> �����ε带 ���ؼ� �ذ�
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
//// Ŭ���� ���ø��� <int, double>�� ���� Ư��ȭ
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
//// Ŭ���� ���ø��� �κ� Ư��ȭ
//// Ÿ�� �Ű������� �Ϻθ� Ư��ȭ �ϴ� ��
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