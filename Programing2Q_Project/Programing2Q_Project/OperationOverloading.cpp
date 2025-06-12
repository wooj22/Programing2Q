#include <iostream>
using namespace std;

/* ������ �����ε� */

class A {
private:
	int num;
public:
	A(int a = 0): num(a) {};
	void Show() { cout << num << endl; }

	// 1. ��� �Լ��� ����
	void operator+= (A& a2) {
		this->num += a2.num;
	}
	
	A operator+ (A& a2) {
		A newA(this->num + a2.num);
		return newA;
	}

	// �Ϲ��Լ��� ��� friend ���
	//friend void operator+= (A& a1, A& a2);
	//friend A operator+ (A& a1, A& a2);

	// cout�� ���������� ����Լ��� ��������
	friend ostream& operator<< (ostream& os, A& a) {
		os << a.num;
		return os;
	}
};

// 2. �Ϲ� �Լ��� ����
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

	// ��� �Լ� ���
	A newA = a1 + a2;
	newA.Show()	;

	newA += a2;
	newA.Show();

	// �Ϲ� �Լ� ���
	/*A newA = a1 + a2;
	newA.Show()	;

	newA += a2;
	newA.Show();*/
	cout << newA << endl;
}