////���� ���� �Լ��� ���� �ε巯�� Ư¡�̶��
////	1. � ���� ���� �Լ��� �������� ��ü Ŭ������ �ش� ���� ���� �Լ��� �ٽ� �����ؾ� �Ѵ�.
////	2. ���� ���� �Լ��� ���������� �߻� Ŭ���� �ȿ��� ���Ǹ� ���� �ʴ´�.
//
//// ���� ���� ���� �Լ��� �����ϴ� ������ �Ļ� Ŭ�������� �Լ��� �������̽����� �����ִ� ���̴�.
//// ������, ���� ���� �Լ����� ���Ǹ� ������ �� �ִ�.
//
//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//	// virtual void draw() const = 0;						     // ���� ���� �Լ�
//	virtual void draw() const = 0 { cout << "Shape" << endl; }  // ���ǰ� �ִ� ���� ���� �Լ�
//	virtual void error(const string& msg) {}			         // ���� �Լ�
//	int objectId() const { return 0; }
//};
//
//class Rect : public Shape {
//public:
//	void draw() const { __super::draw(); cout << "Rect" << endl; }		// ���� ���� �Լ� ������ (���ϸ� error)
//	void error(const string& msg) {}
//};
//
//int main(void)
//{
//	Shape* ps = new Rect;
//	ps->draw();
//	ps->Shape::draw();
//
//	return 0;
//}