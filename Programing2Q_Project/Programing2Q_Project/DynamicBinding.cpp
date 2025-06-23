//#include <iostream>
//using namespace std;
//
//class Parent {
//private:
//	int num = 0;
//
//public:
//	Parent() { cout << "Parent()" << endl; }
//	Parent(int n) : num(n) {};
//	~Parent() { cout << "~Parent()" << endl; }
//	virtual void Show() { cout << "Parent::Show()" << endl; }	// virtual 가상함수, VTables
//};
//
//class Child : public Parent {
//public:
//	Child() { cout << "Child()" << endl; }
//	Child(int n) : Parent(n) {};
//	~Child() { cout << "~Child()" << endl; }
//	void Show() { cout << "Child::Show()" << endl; }
//};
//
//int main() {
//	Parent* parent = new Child();
//	parent->Show();		// 가상함수와 가상함수 테이블을 통한 동적 바인딩
//
//	return 0;
//}