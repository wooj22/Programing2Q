//// std::array ���� �迭
//// ���α׷� ���� �� �̸� �迭�� ũ�⸸ŭ ���� �޸𸮷κ��� �޸𸮸� �Ҵ�޾�
//// ������ Ÿ�ӿ� �迭�� ũ�Ⱑ ������������, ũ�� ������ �Ұ����ϴ�.
//// at(), size() ���� ����Լ� ����� �����ϸ�
//// ��ü ��Ҹ� �迭 ���·� ������ �� �� �ִ�. - size�� ���� x
//
//#include <iostream>
//#include <array>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	// �츮�� �����ϴ� array
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
//	// ��� �Լ�
//	int b = stl_array.at(0);
//	int stl_arr_size = stl_array.size();
//
//	// ������ ���� - size�� ���� �Ұ�. �ʱ� ���� size ������ ��Ҹ� ��� ������
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