//// ���ø� Ư��ȭ
////  Ư�� ���Ŀ� ���ؼ��� ������ ����� �����ؾ��ϴ� ���
////	template <>	���� ��, Ư��Ÿ���� ���� �Լ� �ۼ�
//
//// Q. �Ϲ��Լ��� �����ε� ������ ���� ������ �Ϲ��Լ��� ���� �� �� ������
////    ���ø� Ư��ȭ�� �ϴ� ������?
//// A. ���ø� Ư��ȭ�� �Ǿ������� �Լ��� ����Ҷ�(�����Ͻð�)���� �Լ��� �����Ǳ� ������
////	  �ڵ��� ���� ���� �� �ִ�.
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
//// char* ���ø� Ư��ȭ 
//// Max�Լ��� �⺻������ ���ø����� ������, char* �ڷ����� ���� �� �Լ��� ���ڴٴ� �ǹ�
//template <>
//char* Max(char* a, char* b)
//{
//	cout << "char* Max<char*>(char* a, char* b)" << endl;
//	return strlen(a) > strlen(b) ? a : b;
//}
//
//// const char* ���ø� Ư��ȭ
//// Max�Լ��� �⺻������ ���ø����� ������, const char* �ڷ����� ���� �� �Լ��� ���ڴٴ� �ǹ�
//template <>
//const char* Max(const char* a, const char* b)
//{
//	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
//	return strcmp(a, b) > 0 ? a : b;
//}
//
//int main(void)
//{
//	cout << Max(11, 15) << endl;			// template
//	cout << Max('T', 'Q') << endl;			// template
//	cout << Max(3.5, 7.5) << endl;			// template
//	cout << Max("Simple", "Best") << endl;			// template Ư��ȭ
//
//	char str1[] = "Simple";
//	char str2[] = "Best";
//	cout << Max(str1, str2) << endl;			// template Ư��ȭ
//
//	return 0;
//}