//// 함수 템플릿 오버로딩
//// 템플릿과 일반함수가 모두 있는 경우. 일반함수가 우선순위가 높다.
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//T Add(T num1, T num2) {
//	cout << "T Add(T num1, T num2)" << endl;
//	return num1 + num2;
//}
//
//int Add(int num1, int num2) {
//	cout << "Add(int num1, int num2)" << endl;
//	return num1 + num2;
//}
//
//double Add(double num1, double num2) {
//	cout << "Add(double num1, double num2)" << endl;
//	return num1 + num2;
//}
//
//int main(void)
//{
//	cout << Add(5, 7) << endl;		//일반 함수
//	cout << Add(3.7, 7.5) << endl;
//	cout << Add<int>(5, 7) << endl;		//템플릿 함수  // <> 필요.
//	cout << Add<double>(3.7, 7.5) << endl;
//	return 0;
//}
//
