//// 템플릿 특수화
////  특정 형식에 대해서는 별도의 기능을 수행해야하는 경우
////	template <>	선언 후, 특정타입의 개별 함수 작성
//
//// Q. 일반함수가 오버로딩 순위가 높기 때문에 일반함수로 만들어도 될 것 같은데
////    템플릿 특수화를 하는 이유는?
//// A. 템플릿 특수화가 되어있으면 함수를 사용할때(컴파일시간)에만 함수가 생성되기 때문에
////	  코드의 양을 줄일 수 있다.
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
//// char* 템플릿 특수화 
//// Max함수는 기본적으로 템플릿으로 찍지만, char* 자료형이 오면 이 함수를 쓰겠다는 의미
//template <>
//char* Max(char* a, char* b)
//{
//	cout << "char* Max<char*>(char* a, char* b)" << endl;
//	return strlen(a) > strlen(b) ? a : b;
//}
//
//// const char* 템플릿 특수화
//// Max함수는 기본적으로 템플릿으로 찍지만, const char* 자료형이 오면 이 함수를 쓰겠다는 의미
//template <>
//const char* Max(const char* a, const char* b)
//{
//	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
//	return strcmp(a, b) > 0 ? a : b;
//}
//
//int main(void)
//{
//	cout << Max(11, 15) << endl;			// template
//	cout << Max('T', 'Q') << endl;			// template
//	cout << Max(3.5, 7.5) << endl;			// template
//	cout << Max("Simple", "Best") << endl;			// template 특수화
//
//	char str1[] = "Simple";
//	char str2[] = "Best";
//	cout << Max(str1, str2) << endl;			// template 특수화
//
//	return 0;
//}