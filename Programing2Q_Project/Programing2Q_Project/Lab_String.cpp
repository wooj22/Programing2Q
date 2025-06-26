//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class String {
//private:
//    char* string = nullptr;
//public:
//    // 생성자
//    String(const char* s)
//    {
//        string = new char[strlen(s) + 1];
//        strcpy_s(string, strlen(s) + 1, s);
//    }
//
//    // 소멸자
//    ~String()
//    {
//        delete[] string;
//    }
//
//    // 복사 생성자
//    String(const String& obj) 
//    {
//        string = new char[strlen(obj.string) + 1];
//        strcpy_s(string, strlen(obj.string) + 1, obj.string);
//    }
//
//    // 복사 대입 연산자
//    String& operator=(const String& obj)
//    {
//        if (this == &obj) return *this;
//
//        delete[] string;
//        string = new char[strlen(obj.string) + 1];
//        strcpy_s(string, strlen(obj.string) + 1, obj.string);
//
//        return *this;
//    }
//
//    // operator+
//    String operator+(const String& obj)
//    {
//        size_t len1 = strlen(this->string);
//        size_t len2 = strlen(obj.string);
//        char* str = new char[len1 + len2 + 1];
//
//        strcpy_s(str, len1 + len2 + 1, this->string);
//        strcat_s(str, len1 + len2 + 1, obj.string);
//
//        String result(str);
//        delete[] str;
//        return result;
//    }
//
//    // operator+=
//    String& operator+=(const String& obj)
//    {
//        size_t len1 = strlen(this->string);
//        size_t len2 = strlen(obj.string);
//        char* str = new char[len1 + len2 + 1];
//
//        strcpy_s(str, len1 + len2 + 1, this->string);
//        strcat_s(str, len1 + len2 + 1, obj.string);
//
//        delete[] string;
//        string = str;
//
//        return *this;
//    }
//
//    // ==
//    bool operator==(const String& obj) 
//    {
//        return strcmp(this->string, obj.string) == 0;
//    }
//
//    // <<
//    friend ostream& operator<<(ostream& os, const String& str) 
//    {
//        os << str.string;
//        return os;
//    }
//
//    // 문자열 반환
//    const char* GetString() const { return string; }
//};
//
//int main(void) {
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
