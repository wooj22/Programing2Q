//// ��ü�� �迭ó�� ����ϱ�  
//// �迭 ������ [] �����ε�
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
//	// [] ������
//	// ����Լ��θ� ���� �����ϴ�.
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
//	// ��ü�� �迭ó�� ���
//	myarr[0] = 1;
//	cout << myarr[0];
//}
