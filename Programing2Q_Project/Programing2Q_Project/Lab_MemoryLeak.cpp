//// 메모리 누수(memory leak)
////  : 동적 할당 된 메모리를 적절히 해제하지 않거나, 해제할 수 없는 상태에 빠지는 것
//
//// 1. 해제 없음
//void func() {
//	int* ptr = new int(5);
//	// delete prt; 누락		  -> 메모리 누수 발생
//}
//
//// 2. new[] 동적 배열 메모리 할당 수 delete[]가 아닌 delete 사용
//void func() {
//	int* arr = new int[10];
//	delete arr;			     // -> 메모리 누수 발생
//	// delete[] arr;		 // 올바른 해제 방법
//}
//
//// 3. 예외 발생시 메모리 해제코드가 실행되지 않음
//void func() {
//	int* ptr = new int(10);
//	// 이 지점에서 예외가 발생했다면? -> 메모리 누수 발생
//	delete ptr;		// 해제 코드가 있지만 이곳에 도달하지 않아 메모리 해제 불가 
//}
//
//// 4. 중복 할당, 주소 상실
//void func() {
//	int* ptr = new int(5);
//	ptr = new int(10);		 // -> 메모리 누수 발생
//	delete ptr;				 // new int(5)만큼의 공간이 해제되지 않음
//}
//
//// 5. 컨테이너에 저장된 포인터 해제 안함
//#include <vector>
//std::vector<int*> vec;
//
//void func() {
//	vec.push_back(new int(1));
//	vec.push_back(new int(2));
//	// -> 이대로 프로그램이 종료된다면 메모리 누수 발생
//}
//
//// 6. 중복 해제
//class MyClass {
//	int* ptr;
//public:
//	MyClass() { ptr = new int(10); }
//	~MyClass() { delete ptr; }
//
//	// 기본 복사생성자는 얕은 복사만 지원 -> 포인터를 공유
//	// 중복해제 or 누수 가능성
//	// MyClass(const MyClass& obj) { obj.prt = this.ptr;}
//};
//
//// 7. 주소 상실
//MyClass* create() {
//	MyClass* obj = new MyClass();
//	//return obj;		// 누락시 메모리 누수 발생. 이 함수를 벗어남으로써 obj를 해제할 수 없기 때문
//}
//
//// 8. 주소 상실, 복잡한 로직에서의 실수 (흔함)
//void complexFun(bool flag) {
//	int* ptr = new int(10);
//	if (flag) return;		// return되면 메모리 해제 안되고 빠져나감
//	delete ptr;
//}
