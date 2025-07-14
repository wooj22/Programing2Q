//// std::array 정적 배열
//// 프로그램 실행 전 미리 배열의 크기만큼 스택 메모리로부터 메모리를 할당받아
//// 컴파일 타임에 배열의 크기가 정해져있으며, 크기 변경이 불가능하다.
//// at(), size() 등의 멤버함수 사용이 가능하며
//// 전체 요소를 배열 형태로 재지정 할 수 있다. - size는 변경 x
//
//#include <iostream>
//#include <array>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	// 우리가 선언하는 array
//	const int size = 5;
//	int array5[size] = {1,2,3,4,5};
//
//	// STL array
//	std::array<int, 5> stl_array = { 1,2,3,4,5 };
//
//	// index
//	stl_array[0] = 2;
//	int a = stl_array[0];
//
//	// 멤버 함수
//	int b = stl_array.at(0);
//	int stl_arr_size = stl_array.size();
//
//	// 재지정 가능 - size는 변경 불가. 초기 지정 size 이하의 요소만 사용 가능함
//	stl_array = { 0,0,0,0 };
//	for (auto i : stl_array)
//	{
//		cout << i << ' ';
//	}
//
//	// algorithm sort
//	stl_array = { 2,5,4,3,1};
//	std::sort(stl_array.begin(), stl_array.end());
//	for (auto& element : stl_array) { cout << element << " "; }
//}