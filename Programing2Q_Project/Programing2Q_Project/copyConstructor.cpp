//#include <iostream>
//using namespace std;
//
//class CTest {
//public:
//	// 생성자
//	CTest() { cout << "CTest()" << endl; }
//
//	// 복사 생성자, 복사 대입 연산자
//	CTest(const CTest& obj) { cout << "CTest(const CTest& obj)" << endl; }
//	CTest& operator=(const CTest& obj) { cout << "CTest& operator=(const CTest& obj)" << endl; return *this; }
//
//	// 이동 생성자, 이동 대입 연산자
//	CTest(CTest&& obj) noexcept { cout << "CTest(CTest&& obj)" << endl; }
//	CTest& operator=(CTest&& obj) noexcept { cout << "CTest& operator=(CTest&& obj)" << endl; return *this; }
//};
//
//int main()
//{
//	CTest c1;
//
//	CTest c2 = c1;
//	c1 = c2;
//
//	CTest c3 = move(c1);
//	c1 = move(c3);
//
//	return 0;
//}