//// this ������
//// this �����ʹ� this�� ���� '��ü �ڽ��� �ּҰ�'�� ������ ��� �ִ� ������
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class CTest
//{
//private:
//	int num;
//
//public:
//	CTest(int n) : num(n)
//	{
//		cout << "num=" << this->num << ", ";
//		cout << "address=" << this << endl;  // this(��ü)�������� �ּ� ���
//	}
//
//	void ShowData()							 // �Լ� ȣ���ϸ� �Ͻ������� this ����
//	{
//		cout << this->num << endl;			 // this->num
//	} 
//
//	CTest* GetThisPointer()					 // ������ ���� ***
//	{
//		return this;	// �� �Լ��� ȣ���ϴ� CTest ��ü�� �����͸� return
//	}
//};
//
//int main(void)
//{
//	CTest sim1(100);
//	CTest* ptr1 = sim1.GetThisPointer();		// ��ü�� �ּҰ�(this)�� ���´�.
//	cout << ptr1 << ", ";						// ����ϸ� ����
//	ptr1->ShowData();
//
//	CTest sim2(200);
//	CTest* ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowData();
//
//	return 0;
//}