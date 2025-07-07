//// C++ 에서 자원을 관리하는 방법
//
//// RAII 패턴 
////      Resource Acquisition Is Initialization  
////      자원의 획득은 초기화다 
////      스택에 할당된 메모리는 자동으로 해제되는 것을 이용한 디자인 패턴 - 자원 관리를 안전하게
//
//// 스마트 포인터(smart pointer)
////    포인터 '객체' 로 만들어서 자신이 소멸 될 때 자신이 가리키고 있는 데이터도 같이 delete 하게
////    소멸자들 안에 다 사용한 자원을 해제하는 루틴
//
//
///* unique_ptr 구현 : 특정 객체에 유일한 소유권을 부여하는 포인터 객체 */
//#include <iostream>
//#include <memory>
//
//// RAII 패턴의 자원 class - heep 객체
//class A
//{
//    int* data;
//public:
//    A() {
//        std::cout << "자원 획득함!" << std::endl;
//        data = new int[100];
//    }
//    ~A() {
//        std::cout << "자원 해제함!" << std::endl;
//        delete[] data;
//    }
//    void some() { std::cout << "일반 포인터와 동일하게 사용가능!" << std::endl; }
//};
//
//// A 자료형에 대한 스마트 포인터 class - stack 객체
//class A_SPtr       
//{
//    A* data;
//public:
//    A_SPtr(A* d) : data(d) {}
//    ~A_SPtr() { delete data; }
//
//    A& operator*() const { return *data; }
//    A* operator->() const { return data; }
//};
//
//// T 자료형에 대한 스마트 포인터 class - stack 객체
//template<typename T>
//class SPtr
//{
//    T* data;
//public:
//    SPtr(T* d) : data(d) {}
//    ~SPtr() { delete data; }
//    SPtr(const SPtr& d) = delete;
//
//    T& operator*() const { return *data; }
//    T* operator->() const { return data; }
//};
//
//int main() { 
//    A* a = new A();
//    delete a;
//
//    // 1) A_SPtr
//    A_SPtr sp = new A();
//    sp->some();
//    // delete x
//
//    // 2) SPtr
//    SPtr<A> sptr = new A();
//    sptr->some();
//    // delete x
//
//    // 3) unique_ptr
//    std::unique_ptr<A> pa = std::make_unique<A>();
//    pa->some();
//    // delete x
//
//    // A는 heep객체로 생성되었기 때문에 소멸자 자동 호출 x
//    // A_Stpr, Stpr, unique_ptr은 스택 객체로 생성되었기 때문에 소멸자 자동 호출 ㅇ
//}
