//// operator 연산자도 상속이 가능한가요? -------------------------------------------------------------------
//
//// 일반 operator 연산자는 상속됩니다.
//// 부모 클래스의 대입연산자가 public이라면 사용은 할 수 있지만 상속은 안됩니다.
//
//// 일반적인 public 멤버라면 상속이 됩니다만, 
//// 개체의 생성, 소멸, 복사에 관한 멤버는
//// 특별한 의미를 갖기 때문에 각 클래스에서 책임지고 정의하게 되어 있습니다.
//
//// [상속되지 않는 멤버]
//// 생성자, 소멸자, 대입연산자, 프렌드는 상속 x
//
//#include <iostream>
//using namespace std;
//
//class B
//{
//public:
//	void f() {}
//	B& operator=(const B&) {
//		cout << "bbb" << endl;
//		return *this;
//	}
//};
//
//class D : public B {
//public:
//	D& operator=(const D&) {
//		//B::operator=();
//		cout << "ddd" << endl;
//		return *this;
//	}
//};
//
//int main()
//{
//	D d1, d2;
//	d1.f();     // B::f()
//
//	d1 = d2;    // D::operator=()  //B::operator=()와는 다른 함수
//
//	return 0;
//}