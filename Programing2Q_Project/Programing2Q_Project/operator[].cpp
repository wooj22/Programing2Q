//// 객체를 배열처럼 사용하기  
//// 배열 연산자 [] 오버로딩
//
//#include <iostream>
//using namespace std;
//
//class MyArray {
//public:
//	int* arr;
//	int size = 0;
//
//	MyArray(int n) : size(n) { arr = new int[size]; }
//	~MyArray() { delete[] arr; }
//
//	// [] 연산자
//	// 멤버함수로만 구현 가능하다.
//	int& operator[](int index) { return arr[index]; }
//};
//
//int main()
//{
//	int arr[3];
//	arr[0] = 1;
//
//	MyArray myarr(3);
//	myarr.arr[0] = 1;
//
//	// 객체를 배열처럼 사용
//	myarr[0] = 1;
//	cout << myarr[0];
//}
