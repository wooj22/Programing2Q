#include <iostream>
using namespace std;

/* 연산자 오버로딩 */

class A {
private:
	int num;
public:
	A(int a = 0): num(a) {};
	void Show() { cout << num << endl; }

	// 1. 멤버 함수로 구현
	void operator+= (A& a2) {
		this->num += a2.num;
	}
	
	A operator+ (A& a2) {
		A newA(this->num + a2.num);
		return newA;
	}

	// 일반함수일 경우 friend 등록
	//friend void operator+= (A& a1, A& a2);
	//friend A operator+ (A& a1, A& a2);

	// cout은 순서때문에 멤버함수로 구현못함
	friend ostream& operator<< (ostream& os, A& a) {
		os << a.num;
		return os;
	}
};

// 2. 일반 함수로 구현
//void operator+= (A& a1, A& a2) {
//	a1.num += a2.num;
//}
//
//A operator+ (A& a1, A& a2) {
//	A newA(a1.num + a2.num);
//	return newA;
//}


int main() {
	A a1(1);
	A a2(10);

	// 멤버 함수 사용
	A newA = a1 + a2;
	newA.Show()	;

	newA += a2;
	newA.Show();

	// 일반 함수 사용
	/*A newA = a1 + a2;
	newA.Show()	;

	newA += a2;
	newA.Show();*/
	cout << newA << endl;
}