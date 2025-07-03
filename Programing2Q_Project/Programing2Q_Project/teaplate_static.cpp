//// 함수 템플릿의 static 변수는 템플릿 함수 별로 독립적이다
//// 클래스 템플릿의 static 변수는 템플릿 클래스 별로 독립적이다
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//void ShowStaticValue(void)
//{
//	static T num = 0;
//	num += 1;
//	cout << num << " ";
//}
//
//int main(void)
//{
//	// ShowStaticValue<int>와 ShowStaticValue<long>는 다른 자료형이므로
//	// static은 각 자료형마다 하나씩 생성되어 동일한 자료형에서만 정적으로 공유된다.
//	// 1) ShowStaticValue<int>::num
//	ShowStaticValue<int>();
//	ShowStaticValue<int>();
//	ShowStaticValue<int>();
//	cout << endl;
//
//	// 2) ShowStaticValue<long>::num
//	ShowStaticValue<long>();
//	ShowStaticValue<long>();
//	ShowStaticValue<long>();
//	cout << endl;
//
//	return 0;
//}
