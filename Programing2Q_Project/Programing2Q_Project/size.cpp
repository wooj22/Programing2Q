// ��ü�� ũ�⸦ ����սô�.

//#include <iostream>
//using namespace std;
//
//class CTest
//{
//	int num;
//public:
//	CTest() : num(0) {}
//	CTest(int n) : num(n) {}
//	void ShowData() { cout << num << endl; }
//};
//
//int main(void)
//{
//	CTest x;
//	cout << sizeof(x) << endl;		// ??
//}


//Ŭ������ ũ��� �ɹ� ������ ������ �̴�. ***

//�Լ��� ũ��� ��ü�� ũ��� �����ϴ�. ***


//����ü �ɹ� ����(struct member alignment)�� ���� ũ�Ⱑ �ɹ��� ũ�� �հ� �ٸ� ���� �ִ�.
// 
//	����ü�� ���� �ڷ��� �� ���� ū �ڷ����� ������ �Ǿ� �޸𸮿� ������ ������.
//	����ü�� ����� ������ ������� �޸𸮿� �����Ѵ�
//	#pragma pack(push, 1)�� #pragma pack(pop)�� ����Ѵ�.
//	#pragma pack(push, 1)�� ����ϰ� �Ǹ� ����ü�� �⺻ ������ 1byte�� �ȴ�

//struct Test1
//{
//	char a;
//	short c;
//	int b;
//};
//
//struct Test2
//{
//	char a;
//	int b;
//	short c;
//};
//
//int main()
//{
//	cout << sizeof(Test1) << endl;
//	cout << sizeof(Test2) << endl;
//
//	return 0;
//}

// virtual �����ϸ� ����� �����Ѵ�. (�������̺��� ������ ������)


/*

//----------------------------------------------------------------------
//��ü�� �����ϴ� �޸𸮰� ������ ����� �⺻ ����� �հ���

template <typename T>
class CPoint {
public:
	T m_x;
	T m_y;
};

int main() {
	CPoint<int> objPoint;
	cout << "Size of object is = " << sizeof(objPoint) << endl;
	cout << "Address of object is = " << &objPoint << endl;
	return 0;
}

//----------------------------------------------------------------------
//Ŭ���� �Ǵ� ����ü�� ������ 0�� �� ���,
//���� �ٸ� 2���� �ν��Ͻ��� ���� �ּҸ� ���� �� �ְ� �ǹǷ�,
//�� �� Ŭ���� �Ǵ� ����ü�� �ּ� 1����Ʈ �̻��� ũ�⸦ ������. (C++)

#include <iostream>
using namespace std;

class Class {
};

int main() {
	Class objClass;
	cout << "Size of object is = " << sizeof(objClass) << endl;
	cout << "Address of object is = " << &objClass << endl;
	return 0;
}

//----------------------------------------------------------------------
#include <iostream>
using namespace std;

class CPoint {
public:
	int m_ix;
	int m_iy;
	virtual ~CPoint() { };		//���� �Լ� �߰�
};

int main() {
	CPoint objPoint;
	cout << "Size of Class = " << sizeof(objPoint) << endl;
	cout << "Address of Class = " << &objPoint << endl;
	return 0;
}

//----------------------------------------------------------------------
//���� �Լ��� Ŭ������ �߰��� ������ ���� �����Ͱ� �޸� ������ ù ��° ��ġ�� �߰��ȴ�.
//���� �����ʹ� ���� ���̺��̶�� �ϴ� ���̺��� �ּҸ� ����

#include <iostream>
using namespace std;

class CPoint {
public:
	int m_ix;
	int m_iy;
	CPoint(const int p_ix = 0, const int p_iy = 0) :
		m_ix(p_ix), m_iy(p_iy) {
	}
	int getX() const {	return m_ix; }
	int getY() const {	return m_iy; }
	virtual ~CPoint() { };
};

int main() {
	CPoint objPoint(5, 10);

	int* pInt = (int*)&objPoint;
	*(pInt+1) = 100;	// want to change the value of x
	*(pInt+2) = 200;	// want to change the value of y

	cout << "X = " << objPoint.getX() << endl;
	cout << "Y = " << objPoint.getY() << endl;

	return 0;
}
//----------------------------------------------------------------------


*/
