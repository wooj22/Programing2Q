//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// ���� Ŭ���� bad_alloc
//	{
//		int num = 0;
//
//		try
//		{
//			while (true)
//			{
//				num++;
//				cout << num << "��° �Ҵ�" << endl;
//				new int[10000][10000];
//			}
//		}
//		catch (bad_alloc& bad)		
//		{
//			cout << bad.what() << endl;
//			cout << "�� �̻� �޸� �Ҵ��� �Ұ��մϴ�." << endl;
//		}
//	}
//
//	// ���� �߻����� ���� nulló��
//	int* ptr = new(nothrow) int;
//	if (ptr == nullptr)
//		cout << "�޸� �Ҵ� ����";
//}