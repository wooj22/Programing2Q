//// ���ø� ���� �߷�
//
//#include <iostream>
//#include <typeinfo>
//
//template<typename T1 = int, typename T2>
//void foo(T1 a, T2 b) {
//	std::cout << a << " " << b << std::endl;
//}
//
//int main()
//{
//	foo<int, int>(1.5, 2.3);		//�Ķ���� ����� ����
//
//	foo<int>(1.5, 2.3);			//ù��° �Ķ���� ����� ����
//
//	foo(1.5, 2.3);			//�����?
//
//	foo<>(1.5, 2.3);		//�����? //�����߷п� ���� �⺻ ���� ��� ���� //�Լ� ���ø�
//}

////---------------------------------------------------------------
//
////template<typename T1 = int, typename T2>		//error
////class CTest1 { };
//
//template<typename T1 = int, typename T2 = int>
//struct CTest
//{
//	T1 a;
//	T2 b;
//	T1 n = T1();
//	CTest(T1 a, T2 b) :a(a), b(b) {}
//	void print() { std::cout << a << " " << b << " " << n << std::endl; }
//};
//
//int main()
//{
//
//	CTest<> c(1.5, 2.3); c.print();		//�Ķ���� �⺻�� ��� //�����ڷ� �μ��߷� ����
//
//}