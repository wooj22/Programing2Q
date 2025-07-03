//#include <iostream>
//using namespace std;
//
//// Print(T value)
//template <typename T>
//void Print(T value) 
//{
//	cout << value << endl;
//}
//
//// PrintTypeSize(T value)
//template <typename T>
//void PrintTypeSize(T value) {
//	cout << sizeof(value) << endl;
//}
//
//// const char* 특수화
//template<>
//void PrintTypeSize<const char*>(const char* value)
//{
//	cout << strlen(value) + 1 << endl;
//}
//
//// PrintArray(T const& arr) 
//template <typename T>
//void PrintArray(T const& arr) 
//{
//	for (auto it : arr) cout << it << " ";
//	cout << endl;
//}
//
//// BigTypePrint(T1 data1, T2 data2) 
//template <typename T1, typename T2>
//void BigTypePrint(T1 data1, T2 data2) 
//{
//	if (sizeof(data1) > sizeof(data2)) cout << data1 << endl;
//	else cout << data2 << endl;
//}
//
//int main() {
//	cout << "[Print Template]" << endl;
//	Print(1);
//	Print('1');
//	Print("1");
//
//	cout << endl << "[Print Type Size]" << endl;
//	PrintTypeSize(1);
//	PrintTypeSize('1');
//	PrintTypeSize("1");
//
//	cout << endl << "[Print Array]" << endl;
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	char arr2[] = { '1', '2', '3', '4', '5' };
//	string arr3[] = { "1", "2", "3", "4", "5" };
//	PrintArray(arr1);
//	PrintArray(arr2);
//	PrintArray(arr3);
//
//	cout << endl << "[Big Type Print]" << endl;
//	BigTypePrint(1, "s");
//	BigTypePrint('a', "s");
//	BigTypePrint("s", 1.0);
//}