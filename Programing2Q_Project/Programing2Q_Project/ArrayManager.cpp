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
//		// 새로운 배열 생성 (size+1)
//		int* ptr_new = new int[size + 1];
//
//		// 값 복사
//		for (size_t i = 0; i < size; i++) ptr_new[i] = ptr[i];
//
//		// 값 추가
//		ptr_new[size] = n;
//		size++;
//
//		// 기존 메모리 해제
//		delete[] ptr;
//
//		// 포인터 대상 변경
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