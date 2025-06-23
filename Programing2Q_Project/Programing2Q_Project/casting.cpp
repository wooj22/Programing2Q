//#include <iostream>
//using namespace std;
//
//// Upcasting�� DownCating
//// UpCast : �θ��� �����Ϳ� �ڽ� ��ü�� �ּҸ� ��� ��
//// DownCast : �ڽ��� �����Ϳ� �θ� ��ü�� �ּҸ� ��� ��
//
//class Parent {
//private:
//	int num = 0;
//
//public:
//	Parent() { cout << "Parent()" << endl; }
//	Parent(int n) : num(n) {};
//	~Parent() { cout << "~Parent()" << endl; }
//	void Show() { cout << "Parent::Show()" << endl; }
//};
//
//class Child : public Parent {
//public:
//	Child() { cout << "Child()" << endl; }
//	Child(int n) : Parent(n) {};
//	~Child() { cout << "~Child()" << endl; }
//	void Show() { __super::Show(); cout << "Child::Show()" << endl; }
//};
//
//int main() {
//	Parent parent;
//	Child child;
//
//	Parent* ptr_parent = &child;		    // UpCast - �ڵ� ����ȯ�� �̷������.
//	Child* ptr_child = (Child*)ptr_parent;	// DownCast- ����� ����ȯ�� �ʿ��ϴ�
//
//	Child* ptr_child2 = (Child*)&parent;	// DownCast - ����! �߸��� �ٿ�ĳ����
//
//	return 0;
//}