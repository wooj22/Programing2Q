//#include <iostream>
//using namespace std;
//
//class First
//{
//private:
//    char* one;      // 동적 멤버
//
//public:
//    First(const char* str) 
//    {
//        one = new char[strlen(str) + 1];
//    }
//
//    // 올바른 방법
//    /*virtual ~First() 
//    {
//        cout << "~First()" << endl;
//        delete[] one;
//    }*/
//
//    ~First()
//    {
//        cout << "~First()" << endl;
//        delete[] one;
//    }
//};
//
//class Second : public First
//{
//private:
//    char* two;      // 동적 멤버
//
//public:
//    Second(const char* str1, const char* str2) : First(str1) 
//    {
//        two = new char[strlen(str2) + 1];
//    }
//
//    ~Second() 
//    {
//        cout << "~Second()" << endl;
//        delete[] two;
//    }
//};
//
//int main(void)
//{
//    // 업캐스팅
//    First* ptr = new Second("simple", "complex");
//
//    // First의 소멸자만 호출된다. -> Second의 two 메모리 누수
//    delete ptr;
//    return 0;
//}
