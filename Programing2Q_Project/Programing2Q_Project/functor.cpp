//// 객체를 함수처럼 사용할 수 있을끼?
//// 연산자 오버로딩  활용
//// 함수 호출 연산자인 () 오버로딩 
//
//// 함수 객체 -> 객체를 함수처럼 사용함
//// function object (functor)
//
//// 펑터 ( functor = function + object ) ( 함수 객체 )
//// 
////		함수 호출 연산자인()를 오버로딩한 객체를 의미한다.
////		마치 함수를 호출하듯 객체를 호출할 수 있다.
//
////객체를 함수처럼 사용하는 이유? 
////		- 함수를 객체처럼 다루면 값의 전달이나 관리하기에 편리하다. ( 데이타 - 상태와 행동 )
////		- 변수와 함수를 구분하지 않고 객체로 일관성 있게 처리가능하다. ( 변수객체, 함수객체 )
////		- 변수객체는 값으로 사용, 함수객체는 호출해서 사용
//
////#include <iostream>
////using namespace std;
////
////struct Adder {
////public:
////	int operator() (int n1, int n2) { return n1 + n2; }
////};
////
////void Calc(int n1, int n2, Adder adder) {
////	cout << adder(n1, n2);
////}
////
////int main(void)
////{
////	Calc(1, 2, Adder());
////	return 0;
////}
//
//
///// 다양한 자료형에 대응하기
//#include <iostream>
//using namespace std;
//
//class Pos
//{
//private:
//	int xpos, ypos;
//
//public:
//	Pos(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//
//	Pos operator+(const Pos& pos) const	{ return Pos(xpos + pos.xpos, ypos + pos.ypos); }
//
//	friend ostream& operator<<(ostream& os, const Pos& pos);
//};
//
//ostream& operator<<(ostream& os, const Pos& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class Adder
//{
//public:
//	// () 연산자 정의
//	int operator()(const int& n1, const int& n2)		
//	{
//		return n1 + n2;
//	}
//
//	double operator()(const double& e1, const double& e2)
//	{
//		return e1 + e2;
//	}
//
//	Pos operator()(const Pos& pos1, const Pos& pos2)
//	{
//		return pos1 + pos2;
//	}
//};
//
//int main(void)
//{
//	Adder adder;
//
//	cout << adder(1, 3) << endl;			// 객체를 함수처럼 사용하기
//	cout << adder(1.5, 3.7) << endl;		// 다양한 자료형 사용하기 
//	cout << adder(Pos(3, 4), Pos(7, 9));	// 클래스에 적용해보자.
//
//	return 0;
//}
//
//
