////String 클래스를 구현하세요. ( 특수맴버함수, 연산자 오버로드 )
//
//// 생성자	
//// 복사 생성자
//// 복사 대입 연산자
//// 연산자 함수 + == <<
//
//#include <iostream>
//using namespace std;
//
//class String {
//private:
//	char* string = nullptr;
//public:
//    // constructor
//	String(const char* s)   // 변환 생성자
//	{
//		string = new char[strlen(s) + 1];
//		strcpy_s(string, strlen(s) + 1, s);
//	}
//    ~String() { if (string != nullptr) delete[] string; }
//
//    String(const String& obj) {
//
//    }
//
//    String& operator=(const String& obj) {
//
//    }
//
//    operator char* () { return string; }        // 변환 함수
//
//    // operator overload
//    String& operator+(const String& obj) {
//        // this와 obj의 string을 합친 새 String 객체를 반환
//    }
//
//    void operator+=(const String& obj) {
//        // this의 string에 obj의 string를 합침
//    }
//
//    bool operator==(const String& obj) {
//        // this의 string과 obj의 string == 비교
//    }
//
//    // function
//    char* GetString() { return nullptr; }
//};
//
//int main(void)
//{
//    String s1 = "abc";
//    String s2 = "def";
//
//    String s3 = s1 + s2;
//
//    String s4 = ""; 
//    s4 += s3;
//
//    cout << s1 << " " << s2 << " " << s3 << " " << s4 << endl;
//    cout << (s1 == s4) << endl;
//
//    return 0;
//}