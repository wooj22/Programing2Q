//// ���� ���ø�
//// ���ø����� ���� ����ϱ� (���� ���ø�, Variable template )  //C++14
//
//#include <iostream>
//using namespace std;
//
//template<typename T = long double>
//constexpr T pi = T(3.1415926535897932385);      // constexpr == �ϴ� const�� ����
//
//template<>
//constexpr char const* pi<char const*> = "PI";
//
//int main(void)
//{
//    cout << pi<int> << endl;			//���ø� ���� int
//
//    cout << pi<> << endl;;				//�⺻�� long double
//
//    cout << pi<char const*> << endl;	//Ư��ȭ
//
//    return 0;
//}
//
//
////A variable template may be introduced by a template declaration at namespace scope
//
//template<class T>
//constexpr T pi = T(3.1415926535897932385L);  // variable template
//
//template<class T>
//T circular_area(T r)                        // function template
//{
//    return pi<T> *r * r;    // pi<T> is a variable template instantiation
//}
//
//
////When used at class scope, variable template declares a static data member template.
//using namespace std::literals;
//struct matrix_constants
//{
//    template<class T>
//    using pauli = hermitian_matrix<T, 2>;   // alias template
//
//    template<class T>                       // static data member template
//    static constexpr pauli<T> sigmaX = { { 0, 1 }, { 1, 0 } };
//
//    template<class T>
//    static constexpr pauli<T> sigmaY = { { 0, -1i }, { 1i, 0 } };
//
//    template<class T>
//    static constexpr pauli<T> sigmaZ = { { 1, 0 }, { 0, -1 } };
//};