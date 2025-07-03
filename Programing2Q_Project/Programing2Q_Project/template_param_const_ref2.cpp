//#include <typeinfo>
//#include <iostream>
//
//// 참조로 받는 경우 T -> 그대로 해석됨
//template <typename T>
//void ref(T const& x) {
//    std::cout << "x in ref(T const&): " << typeid(x).name() << '\n';
//}
//
//// 값으로 받는 경우 T -> 배열은 매개변수로 올 수 없기 떄문에 포인터로 넘어옴
//template <typename T>
//void nonref(T x) {
//    std::cout << "x in non ref(T):    " << typeid(x).name() << '\n';
//}
//
//int main()
//{
//    ref("hello");       // char const[6]
//	nonref("hello");    // char const* __ptr64
//}