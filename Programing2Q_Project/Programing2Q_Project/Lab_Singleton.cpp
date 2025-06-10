#include <iostream>
using namespace std;

class Singleton {
private:
	// 생성자 private 보호
	Singleton() { cout << "싱글톤 객체 생성" << endl; 	}
	
	// 복사 방지
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	// instance를 지역 변수로 두는 경우 컴파일러가 객체의 소멸을 관리하기 때문에 public으로 두는 것이 일반적
	// instacne는 정적 지역 변수이기 때문에 외부에서 delete를 호출할 수 없고, 프로그램 종료 시 컴파일러가 소멸시킴
	// private으로 두는 경우 일부 컴파일러에서 오류 발생 가능성 존재
	// 외부에서 소멸자 호출시 소멸자는 호출되지만 instacne는 여전히 존재한다. (외부에서 호출하지 않도록 해야함)
	~Singleton() { cout << "싱글톤 객체 소멸"; }

	// instance 반환
	// C++ 11부터 정적 지역 변수는 thread safe가 보장됨
	// 때문에 C++ 11 이후부터는 정적 지역 변수로 두는 것이 일반적
	// 만약 static Singleton instance를 멤버 변수로 두는 경우? -> Race condition
	// 멀티스레드 환경에서 정적 멤버 변수는 thread safe가 보장되지 않아 객체가 여러개 생성될 위험이 있음
	static Singleton& GetInstance() {
		static Singleton instance;	
		return instance;
	}

	void DoSomething() { cout << "DoSometing..." << endl; }
};

int main() {
	// Singleton s1;     // error 생성자 외부 접근 x

	Singleton& s1 = Singleton::GetInstance();
	s1.DoSomething();
	
	// Singleton s2 = s; // error 복사 생성자 사용 불가
	Singleton& s2 = Singleton::GetInstance();
	s2.DoSomething();

	return 0;
}