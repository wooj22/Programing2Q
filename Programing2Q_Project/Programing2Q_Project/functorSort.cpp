//// �Լ���ü�� �̿��� �Լ� �����ϱ�.
//// int �� ���ϴ� �Լ�.		 �Լ� �����ؼ� ���. (�Լ� �����ͷ� ���� ���� - �����ͷ� ȣ�� )
//// int �� ���ϴ� �Լ���ü.  �Լ���ü �����ؼ� ���. (��ü�� ���� ���� - ��ü�� �Լ�ó�� ȣ�� )
//
//#include <iostream>
//using namespace std;
//
//bool Compare(int num1, int num2) { return num1 > num2; }
//
//class Sort
//{
//public:
//	bool operator()(int num1, int num2) const { return num1 > num2; }
//};
//
//class DataStorage		// Storage for int data
//{
//private:
//	int* arr;		// pointer for array
//	int		index;
//	const int MAX_LEN;
//public:
//	DataStorage(int arrlen) :index(0), MAX_LEN(arrlen)
//	{
//		arr = new int[MAX_LEN];
//	}
//	void AddData(int num)
//	{
//		if (index >= MAX_LEN) { cout << "���� �Ұ�" << endl; return; }
//		arr[index++] = num;
//	}
//	void Show()
//	{
//		for (int i = 0; i < index; i++)	cout << arr[i] << ' ';
//		cout << endl;
//	}
//
//	void Sort(const Sort& functor)		//bubble sort ����
//	{
//		for (int i = 0; i < (index - 1); i++) {
//			for (int j = 0; j < (index - 1) - i; j++) {
//				if (functor(arr[j], arr[j + 1]))
//				{
//					std::swap(arr[j], arr[j + 1]);
//				}
//			}
//		}
//	}
//
//	/*
//		void AscendingSort(const AscendingSort& functor) {
//		}
//		void DescendingSort(const DescendingSort& functor) {
//		}
//	*/
//};
//
//int main(void)
//{
//	DataStorage storage(5);  //�迭�� �پ��� ������� ����. 
//	storage.AddData(40);
//	storage.AddData(20);
//	storage.AddData(30);
//	storage.AddData(10);
//
//	storage.Sort(Compare);  //
//	storage.Sort(Sort());
//
//	storage.Show();
//
//	/*
//	//�پ��� ����� ���Ĺ���� �˷��ֱ�.
//
//	storage.Sort( Compare );
//
//	storage.Sort( Sort() );
//
//	storage.AscendingSort(AscendingSort());
//
//	storage.DescendingSort(DescendingSort());
//
//	*/
//	return 0;
//}
//
//
///*
//class AscendingSort  // ��������
//{
//public:
//	bool operator()(int num1, int num2) const {
//		return num1 > num2;
//	}
//};
//
//class DescendingSort  // ��������
//{
//public:
//	bool operator()(int num1, int num2) const {
//		return num1 < num2;
//	}
//};
//*/