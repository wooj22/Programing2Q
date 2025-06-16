//// 연산자 오버로딩 활용 
////	* 포인터 연산자 오버로딩 
//// 객체를 포인터 처럼 다루는 것이 가능.
//
////#include <iostream>
////using namespace std;
////
////class IntPtr
////{
////private:
////	int* ptr;
////public:
////	IntPtr(int* ptr) : ptr(ptr) {}		// new 할당된 ptr 을 받음
////	~IntPtr() { delete ptr; }		    // 알아서 자동으로 소멸 // RAII
////
////	// 포인터 연산자 오버로딩
////	int& operator*() const { return *ptr; }
////	int* operator->() const { return ptr; }
////};
////
////int main()
////{
////	IntPtr sptr(new int(1));
////
////	cout << *sptr << endl;
////	*sptr = 10;
////	cout << *sptr << endl;
////
////	return 0;
////}
//
//
//// 스마트 포인터
//// 알아서 소멸되는 편리한 포인터
//
//#include <iostream>
//using namespace std;
//
//class Pos
//{
//private:
//	int xpos, ypos;
//
//public:
//	Pos(int x = 0, int y = 0) : xpos(x), ypos(y) { cout << "Pos 객체 생성" << endl; }
//	~Pos() { cout << "Pos 객체 소멸" << endl; }
//	void SetPos(int x, int y) { xpos = x; ypos = y; }
//
//	// 외부 함수 friend
//	friend ostream& operator<<(ostream& os, const Pos& pos)
//	{
//		os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//		return os;
//	}
//};
//
//class SmartPtr
//{
//private:
//	Pos* posptr;		// 원본 포인터
//
//public:
//	SmartPtr(Pos* ptr) : posptr(ptr) { }
//	~SmartPtr() { delete posptr; }
//
//	// 포인터 연산자 오버로딩
//	Pos& operator*() const { return *posptr; } // 객체 반환
//	Pos* operator->() const { return posptr; } // raw 포인터 반환
//};
//
//int main()
//{
//	SmartPtr sp(new Pos(1, 2));
//	cout << *sp;
//
//	sp->SetPos(1, 2);
//	cout << *sp;
//}
