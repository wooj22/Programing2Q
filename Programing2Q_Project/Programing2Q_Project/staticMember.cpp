////���� �ɹ� ����
////		��ü ���� �Ҵ���� �ʰ� Ŭ������ ��� ��ü�� '����'�ϴ� ����� �ǹ��Ѵ�.
////		��� ������ ����(static)���� ����Ǹ�, 
////      �ش� Ŭ������ ��� ��ü�� ���� '�ϳ�'�� �����͸��� ���� ����
////		���� ��� ������ Ŭ���� �������� ���������, ���Ǵ� ���� �������� �����Ѵ�.
//
////���� ��� �Լ�(static member function)
////		C++������ Ŭ������ ��� �Լ��� ����(static)���� ������ �� �ֽ��ϴ�.
////		�̷��� ����� ���� ��� �Լ��� �ش� Ŭ������ ��ü�� �������� �ʰ�, 
////      Ŭ���� �̸������� ȣ���� �� �ֽ��ϴ�.
//// 
////		1. ��ü�� �������� �ʰ� Ŭ���� �̸������� ȣ���� �� �ֽ��ϴ�.
////		2. ��ü�� �������� �����Ƿ�, this �����͸� ������ �ʽ��ϴ�.
////		3. Ư�� ��ü�� �������� �����Ƿ�, ���� ��� �����ۿ� ����� �� �����ϴ�. ***
//
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//	static int g_count;		//static �ɹ� ����
//public:
//	CTest()
//	{
//		g_count++;
//		cout << g_count << "��° CTest ��ü" << endl;
//	}
//	static void func() {}	//static �ɹ� �Լ�
//};
//
//int CTest::g_count = 0;		//static ������ �ʱ�ȭ ***
//
////static ������ ��ü ���� �����ϴ� ������ �ƴ�, ���α׷� ��ü �������� �ϳ��� �����ϴ� ����
//
//
//
////public static ���� -------------------------------------------------------------
//
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//public:
//	static int g_count;		//���� ���
//public:
//	CTest()
//	{
//		g_count++;
//	}
//};
//int CTest::g_count = 0;		//static ������ �ʱ�ȭ
//
//int main(void)
//{
//	cout << CTest::g_count << "��° ��ü" << endl;
//	CTest sim1;
//	CTest sim2;
//
//	cout << CTest::g_count << "��° ��ü" << endl;	//Ŭ�����̸����� ����
//	cout << sim1.g_count << "��° ��ü" << endl;		//��ü�̸����� ���� ( ��ü�ɹ��� �ƴ� )
//	cout << sim2.g_count << "��° ��ü" << endl;		//��ü�̸����� ����
//
//	return 0;
//}
//
//// private static ���� --------------------------------------------------------------
//
//#include <iostream>
//using namespace std;
//
//class CItem
//{
//private:
//	static int objCount;		//CItem Ŭ�������� ���, ��� ��ü���� ����.
//public:
//	CItem()
//	{
//		objCount++;
//		cout << objCount << "��° ��ü" << endl;
//	}
//	CItem(const CItem& copy)
//	{
//		objCount++;
//		cout << objCount << "��° ��ü" << endl;
//	}
//	//static void print() { cout << "count: " << objCount << endl; }
//};
//int CItem::objCount = 0;		//���� �ʱ�ȭ
//
//int main(void)
//{
//	CItem sim1;
//	CItem sim2;
//
//	CItem cmx1;			//objCount �� ī����
//	CItem cmx2 = cmx1;
//	CItem();
//
//	cout << "count: " << CItem::objCount << endl;		//error //private
//
//	//����) objCount �� ����ϴ� �Լ��� ����� ȣ���ϼ���.
//	//	CItem::print();
//
//	return 0;
//}
