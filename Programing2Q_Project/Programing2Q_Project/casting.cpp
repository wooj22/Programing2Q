//#include <iostream>
//using namespace std;
//
//// Upcasting과 DownCating
//// UpCast : 부모의 포인터에 자식 객체의 주소를 담는 것
//// DownCast : 자식의 포인터에 부모 객체의 주소를 담는 것
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
//	Parent* ptr_parent = &child;		    // UpCast - 자동 형변환이 이루어진다.
//	Child* ptr_child = (Child*)ptr_parent;	// DownCast- 명시적 형변환이 필요하다
//
//	Child* ptr_child2 = (Child*)&parent;	// DownCast - 위험! 잘못된 다운캐스팅
//
//	return 0;
//}