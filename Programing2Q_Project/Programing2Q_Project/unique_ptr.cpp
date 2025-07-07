//// 배타적 소유권
////  - 하나의 스마트 포인터만이 특정 객체를 소유할 수 있도록, 
////  - 객체에 소유권 개념을 도입한 스마트 포인터
////  - 일반 포인터와는 달리, 사용 후에 delete 키워드를 사용하여 메모리를 해제할 필요가 없다.
//// 
//// 소유권 이전
////  - unique_ptr 인스턴스는 복사할 수는 없습니다.
////  - move() 멤버 함수를 통해 소유권을 이전할 수는 있다. 
////  - 소유권이 이전되면, 이전 unique_ptr 인스턴스는 더는 해당 객체를 소유하지 않게 재설정됩니다.
//// 
//// 언제 unique_ptr을 사용하는게 좋을까요? 
////  - 동시에 참조하지 않을 때
////  - 클래스 멤버 변수로 활용할 때. 소멸자가 호출되면 알아서 해제되기 때문에 편리하다.
////  - 두번째, 지역 변수로 활용할 때. 개발자의 실수를 줄여줄 수 있습니다.
////  - 세번째, STL 벡터에 포인터를 저장할 때. 벡터를 clear 하면, unique_ptr은 자동적으로 포인터를 지워줍니다.
//
//
//#include <iostream>
//#include <memory>
//using namespace std;
//
//// unique_ptr은 복사가 안되기 때문에 참조
//void func(unique_ptr<int>& sp)
//{
//
//}
//
//// unique_ptr 내부의 자원을 받기 (get)
//void func2(int num) {
//
//}
//
//int main() {
//	// unique_ptr
//	{
//		unique_ptr<int> sp1 = make_unique<int>();
//		//unique_ptr<int> sp2 = sp1;		// 복사 x
//		unique_ptr<int> sp2 = move(sp1);	// 이동 ㅇ, sp1 = nullptr
//		func(sp2);
//	} // sp2 인스턴스 소멸, sp2 = nullptr
//	
//	// move() : 소유권 이전
//	{
//		unique_ptr<int> sp1 = make_unique<int>();
//		unique_ptr<int> sp2 = move(sp1);
//		sp2.reset();
//	}
//
//	// reset() : 현재 소유한 객체를 파괴(delete)하고, 새로운 객체로 대체하거나 nullptr로 만든다
//	{
//		unique_ptr<int> sp1 = make_unique<int>();
//		sp1.reset(new int(3));	// 재할당
//		sp1.reset();			// sp1 인스턴스 소멸, sp1 = nullptr	
//	}
//
//	// get() : unique_ptr가 내부적으로 소유하고 있는 raw pointer를 반환
//	//		   소유권은 넘기지 않음
//	{
//		unique_ptr<int> sp1 = make_unique<int>();
//		int* ptr = sp1.get();		// ptr을 delete 하면 안됨
//		func2(*sp1.get());			// 내부 객체는 이동 가능
//	}
//
//	// release() : 소유권을 포기하고, raw pointer를 반환한다.
//	{
//		unique_ptr<int> sp1 = make_unique<int>(5);
//		int* ptr = sp1.release();  // sp1은 nullptr가 됨
//		delete ptr;				   // 반드시 delete
//	}
//}

////const 유니크 포인터는 어떨까 ? ------------------------------------------------
//
//const std::unique_ptr<Player> p1 = std::make_unique<Player>();
////const 유니크 포인터의 경우에는 소유권 이전이 되지 않고 컴파일 에러 ***
//
//
//
////std::unique_ptr의 또다른 장점은 이게 std::shared_ptr과 호환이 된다는 점이다. ***
//
//    //std::unique_ptr이 std::shared_ptr로 변환된다.
//std::shared_ptr<Player> sp = makePlayer(arguments);