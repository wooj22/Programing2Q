//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//	// 객체 안에 포인터가 있을때
//	// 복사 생성자로 인해 객체들의 포인터가 같은 메모리를 가리키지 않도록 깊은 복사를 정의한다
//	char* name;			
//
//public:
//	Person() {};
//	Person(const char* str) {
//		name = new char[strlen(str) + 1];
//		strcpy_s(name, strlen(str) + 1, str);
//	}
//
//	~Person() { delete[] name; }
//
//	// 복사 생성자
//	Person(const Person& p) {
//		name = new char[strlen(p.name) + 1];
//		strcpy_s(name, strlen(p.name) + 1, p.name);
//	}
//
//	// 복사 대입 연산자
//	Person& operator=(const Person& p)
//	{
//		if (this != &p) {
//			delete[] name;
//			name = new char[strlen(p.name) + 1];
//			strcpy_s(name, strlen(p.name) + 1, p.name);
//		}
//		return *this;
//	}
//
//	// 이동 생성자 -> 주소 치환
//	Person(Person&& other) noexcept
//	{
//		name = other.name;    // 얕은 복사    
//		other.name = nullptr;
//	}
//
//	// 이동 대입 연산자
//	Person operator=(Person&& other) noexcept 
//	{
//		if (this != &other) {
//			delete[] name;
//			name = other.name;    // 얕은 복사
//			other.name = nullptr;
//		}
//		return *this;
//	}
//
//
//	void show() const { cout << name << endl; }
//
//	void setname(const char* newname) {
//		delete[] name;
//		name = new char[strlen(newname) + 1];
//		strcpy_s(name, strlen(newname) + 1, newname);
//	}
//};
//
//int main() 
//{
//	Person p1("kim");
//	p1.show();
//
//	// 복사 생성
//	Person p2 = p1;
//	p2.show();
//
//	// 복사 대입
//	p2.setname("yang");
//	p1 = p2;
//	p1.show();
//	p2.show();
//
//	// 이동 생성
//	Person p3(move(p1));
//	Person p4(Person());
//}