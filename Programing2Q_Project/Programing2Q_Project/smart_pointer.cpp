///*
//포인터의 문제점
//
//	포인터가 가리키는 주소의 값이 배열인지 하나의 객체인지 판별이 불가능  -> 포인터 선언의 타입
//	파괴하기 위해 어떤 방법을 써야할 지 알아낼 방법이 없다. delete를 써야할지, delete []를 써야할지
//	포인터가 가리키는 대상을 내가 소유하고 있는지 아닌지 알 수 있는 방법이 없다.  -> 배타적 소유권
//	댕글링 포인터(dangling pointer), 자원이 이미 해제된 자원인지 아닌지 판별할 수가 없다  - nullptr
//	자원 해제는 정확히 한 번만 해야한다  -> 중복 해제 방지 방법
//
//해결책으로
//
//	++ 11에서는 스마트 포인터라는 것이 도입
//*/
//
////스마트 포인터(smart pointer)
////		std 네임스페이스에 속해있고 <memory> 헤더파일에 속한 표준 포인터
////  
////		C++에서는 메모리 누수(memory leak)로부터 프로그램의 안전성을 보장하기 위해 
////		스마트 포인터를 제공
//// 
////		스마트 포인터(smart pointer)란 포인터처럼 동작하는 클래스 템플릿으로, 
////		사용이 끝난 메모리를 '자동으로' 해제해 줍니다 ***
//
////C++11부터는 다음과 같은 새로운 스마트 포인터를 제공한다.
////		unique_ptr - 배타적 소유권
////		shared_ptr - 공유 자원 관리
////		weak_ptr - shared_ptr 보완
//
//#include <iostream>
//#include <memory>		//헤더파일
//using namespace std;
//
//class Foo {
//public:
//	Foo() { cout << "생성" << endl; }
//	~Foo() { cout << "소멸" << endl; }
//};
//
//int main(void)
//{
//	// 일반 포인터
//	int* p = new int;
//	*p = 1;
//	delete p;
//
//	// 스마트 포인터
//	{
//		unique_ptr<int> sp(new int);
//		*sp = 1;
//		cout << *sp << endl;
//	} // 해제하지 않아도 자동으로 소멸
//
//	{
//		unique_ptr<int> uni_ptr = make_unique<int>();
//		*uni_ptr = 5;
//		cout << *uni_ptr << endl;
//	} // 해제하지 않아도 자동으로 소멸
//
//	return 0;
//}