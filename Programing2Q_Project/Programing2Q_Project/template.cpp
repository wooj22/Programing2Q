//// 제네릭 프로그래밍 (generic programming)
////		데이터 형식에 의존하지 않고, 
////		하나의 값이 여러 다른 데이터 타입들을 가질 수 있는 기술에 중점을 두어 
////		재사용성을 높일 수 있는 프로그래밍 방식
//
//// 템플릿 
////      C++에서 제네릭 프로그래밍을 위해 제공하는 핵심 도구
////      다양한 자료형으로 코드를 재사용할 수 있게 작성.
////		사용자가 템플릿 매개 변수에 대해 제공하는 인수를 기반으로 
////		컴파일 시간에 일반 형식 또는 함수를 생성하는 구문입니다. 
//
//#include <iostream>
//using namespace std;
//
//// 자료형만 다른 여러 함수 -> 너무 많은 오버로드 
//int Add(int num1, int num2) { return num1 + num2; }
//float Add(float num1, float num2) { return num1 + num2; }
//double Add(double num1, double num2) { return num1 + num2; }
//
//
//// 템플릿 (함수 템플릿) 선언 및 정의
//// <매개변수> 로 형식을 받아서 처리 - 형식 매개변수 (Type Parameter)
//
//// 1. '형식 매개변수' 선언	
//template <typename T>		//T 는 형식매개변수의 이름 //template <class T> 도 같은 표현 ***
//T Add(T num1, T num2)
//{
//	return num1 + num2;
//}
//
//// 2, 형식을 전달하여 사용 - 이름<형식>
//int main(void)
//{
//	Add<int>(1, 2);					    // <>안에 사용할 데이터 타입 전달
//	cout << Add(2.9, 3.7) << endl;		// <> 생략가능 (전달되는 인수로 추정)
//	cout << Add<double>(2.9, 3.7) << endl;
//
//	cout << Add(15, 20) << endl;		// 컴파일러는 이를 다음과 같이 해석한다. Add<int>(15, 20);
//	cout << Add(3.2f, 3.2f) << endl;	// Add<float>
//	cout << Add(3.14, 2.75) << endl;	// Add<double>
//
//	return 0;
//}
//
//
///* 함수 템플릿과 템플릿 함수 */ 
//// 함수 템플릿 : 템플릿 정의 (틀)
//template <typename t>
//t add(t num1, t num2)
//{
//	return num1 + num2;
//}
//	
//// 템플릿 함수 : 컴파일러가 생성하는 템플릿 기반의 함수
//// Add(1, 1); 이라는 구문이 실행 되었을 때
////int add<int>(int num1, int num2)	// 템플릿 함수생성 (템플릿 구체화) - 인스턴스화
////{
////	return num1 + num2;
////}
//	
//
