//// const 객체 포인터
//
//#include <iostream>
//using namespace std;
//
//class Coffee
//{
//public:
//	Coffee() { SugarCount = 0;	bTakeout = false; }
//
//	const int& GetSugarCount() { return SugarCount; }
//	void AddSugar() { SugarCount++; }
//	bool IsTakeout() const { return bTakeout; }
//
//private:
//	int SugarCount;
//	bool bTakeout;
//};
//
//int main(void)
//{
//	// 1. 포인터에 const가 붙는 경우 : 상수 객체 -> 멤버값 변경 x
//	const Coffee* A = new Coffee();		// const * 로 동적할당
//	Coffee const* A2 = new Coffee();	// same expression
//
//	// 2. 객체 대상에 const가 붙는 경우 : 대상 변경 x
//	Coffee* const B = new Coffee();
//
//	//아래코드 중 에러가 발생하는 곳은?
//
//	A->AddSugar();						// error
//	B->AddSugar();						// success
//
//	A->IsTakeout();						// success
//	B->IsTakeout();						// success
//	B = new Coffee();					// error
//
//	A->GetSugarCount();					// error  // const function 아님
//	B->GetSugarCount();
//
//	return 0;
//}