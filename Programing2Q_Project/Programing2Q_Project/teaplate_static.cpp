//// �Լ� ���ø��� static ������ ���ø� �Լ� ���� �������̴�
//// Ŭ���� ���ø��� static ������ ���ø� Ŭ���� ���� �������̴�
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//void ShowStaticValue(void)
//{
//	static T num = 0;
//	num += 1;
//	cout << num << " ";
//}
//
//int main(void)
//{
//	// ShowStaticValue<int>�� ShowStaticValue<long>�� �ٸ� �ڷ����̹Ƿ�
//	// static�� �� �ڷ������� �ϳ��� �����Ǿ� ������ �ڷ��������� �������� �����ȴ�.
//	// 1) ShowStaticValue<int>::num
//	ShowStaticValue<int>();
//	ShowStaticValue<int>();
//	ShowStaticValue<int>();
//	cout << endl;
//
//	// 2) ShowStaticValue<long>::num
//	ShowStaticValue<long>();
//	ShowStaticValue<long>();
//	ShowStaticValue<long>();
//	cout << endl;
//
//	return 0;
//}
