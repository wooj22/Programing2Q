//// 함수 템플릿의 참조자(reference) 파라미터로 '문자열'을 전달하는 경우. 타입 주의
//// 문자열 리터럴의 길이에 따라 각기 다른 배열형으로 정의됨
//#include <iostream>
//
//template <typename T>
//inline T const& max(T const& a, T const& b) //참조자 파라미터
//{
//    return  a < b ? b : a;
//}
//
//// 만약 아래 main 코드의 주석한 코드를 실행하려면 템플릿 매개변수를 2개 사용해야함
////template <typename T, typename TT>
////inline T const& max(T const& a, TT const& b)
////{
////    return  a < b ? b : a;
////}
//
//int main()
//{
//    std::string s = "apple";
//    max("apple", "peach");      // 같은 타입 char const [6]
//	//max("apple", "tomato");   // ERROR: 다른 타입 char const [6], char const [7]
//    //max("apple", s);          // ERROR: 다른 타입
//}