//#include <iostream>
//using namespace std;
//
//// 멤버에 포인터가 있는 경우 얕은 복사를 하면 큰일남
//
//class Myclass {
//public :
//	int* p = nullptr;
//	int size;
//
//	Myclass() { p = new int[size]; }
//	~Myclass() { delete[] p; }
//
//	// 복사 생성자
//	Myclass(const Myclass& obj) {
//
//	}
//
//	// 대입 연산 생성
//	Myclass& operator= (const Myclass& obj) {
//
//	}
//};
//
//int main() {
//	Myclass a;
//	Myclass b = a;
//
//	return 0;
//}