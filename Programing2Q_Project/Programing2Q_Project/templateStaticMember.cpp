//
////템플릿 관련 표기법 ---------------------------------------
//
////  디폴트 값 표기 ***
////      int a = 0;
////      T a = T(); // C++ 98/03
////      T a = {};  // C++11
//// 
////  static memeber data 외부 표기
////  멤버 함수를 외부에 표기// 
////  클래스 템플릿의 '멤버 함수 템플릿' 표기
//
//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Complex
//{
//    T re, im;
//public:
//    Complex(T a = {}, T b = {}) : re(a), im(b) {}     // 디폴트 값 표기  
//
//    static int cnt;                                     // static 멤버 데이터
//
//    T getReal() const;                                  // 멤버 함수
//
//    template<typename U> T func(const U& c);            // 멤버 함수 템플릿
//};
//
//// static 멤버 데이터 외부 구현
//template<typename T>
//int Complex<T>::cnt = 0;
//
//
//// 멤버 함수 외부 구현
//template<typename T>
//T Complex<T>::getReal() const {
//    return re;
//}
//
//// 클래스 템플릿의 멤버 함수 템플릿 구현
//template<typename T> template<typename U>
//T Complex<T>::func(const U& c) {
//}
//
//int main()
//{
//    Complex<int> c2;
//
//}