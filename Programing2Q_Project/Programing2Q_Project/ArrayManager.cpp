//#include <iostream>
//using namespace std;
//
//class ArrayManager {
//private:
//	int* ptr = nullptr;
//	int size = 0;
//
//public:
//	ArrayManager(int size) { ptr = new int[size]; this->size = size; }
//	~ArrayManager() { delete[] ptr; }
//
//	void Set(int index, int v) { ptr[index] = v; }
//	void Print()
//	{
//		for (size_t i = 0; i < size; i++) cout << ptr[i] << " ";
//		cout << endl;
//	}
//
//	void Add(int n)
//	{
//		// ���ο� �迭 ���� (size+1)
//		int* ptr_new = new int[size + 1];
//
//		// �� ����
//		for (size_t i = 0; i < size; i++) ptr_new[i] = ptr[i];
//
//		// �� �߰�
//		ptr_new[size] = n;
//		size++;
//
//		// ���� �޸� ����
//		delete[] ptr;
//
//		// ������ ��� ����
//		ptr = ptr_new;
//	}
//
//	void Remove(int n)
//	{
//
//	}
//};
//
//int main()
//{
//	ArrayManager myclass(3);
//	myclass.Set(0, 1);
//	myclass.Set(1, 2);
//	myclass.Set(2, 3);
//	myclass.Print();
//
//	myclass.Add(4);
//	myclass.Print();
//
//	/*myclass.Remove(4);
//	myclass.Print();*/
//}