//#include <typeinfo>
//#include <iostream>
//
//// ������ �޴� ��� T -> �״�� �ؼ���
//template <typename T>
//void ref(T const& x) {
//    std::cout << "x in ref(T const&): " << typeid(x).name() << '\n';
//}
//
//// ������ �޴� ��� T -> �迭�� �Ű������� �� �� ���� ������ �����ͷ� �Ѿ��
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