//#include <iostream>
//using namespace std;
//
//class CTest {
//public:
//	// ������
//	CTest() { cout << "CTest()" << endl; }
//
//	// ���� ������, ���� ���� ������
//	CTest(const CTest& obj) { cout << "CTest(const CTest& obj)" << endl; }
//	CTest& operator=(const CTest& obj) { cout << "CTest& operator=(const CTest& obj)" << endl; return *this; }
//
//	// �̵� ������, �̵� ���� ������
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