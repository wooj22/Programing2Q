//// ���� ���ް� ��ȯ -------------------------------------------------------------
//
//#include <iostream>
//using namespace std;
//
//int& RefRetFuncOne(int& ref)			//�����ڷ� ����, �ڽ��� ����.
//{
//	ref++;
//	return ref;
//}
//
//int RefRetFuncTwo(int& ref)				//�� ����
//{
//	ref++;
//	return ref;
//}
//
//int main(void)
//{
//	int  num1 = 1;
//
//	int& num2 = RefRetFuncOne(num1);	// &num2�� num1�� ���� �ּҰ�
//	//int num2 = RefRetFuncOne(num1);	// ������ ���������� ���� ����.
//	 
//	//int  num2 = RefRetFuncTwo(num1);  // �� ����
//	//int& num2 = RefRetFuncTwo(num1);  // error //int& �� int ���� �Ҵ��� �� ����. rvalue
//
//	num1++;
//	num2++;
//	cout << "num1: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//
//	//-----------------------------------------------------------------------
//	RefRetFuncOne(num1) = 3;			// OK, �Լ��� ��ȯ���� num1 �ڽ��̴�.
//	cout << "num1: " << num1 << endl;
//
//	return 0;
//}
//
////������ �Ű�����, �Լ� �����ε��� ��� ���� ------------------------------------
//
//#include <iostream>
//using namespace std;
//
//void func(int a) { }
//void func(int& a) { }
//
//int main(void)
//{
//	int a = 1;
//
//	func(a);		//error
//
//	return 0;
//}
//
//
////�����ڰ� �ƴ� ���� �����ϴ� �Լ��� �����ڷ� �ޱ� ------------------------------
//
//int function() {
//	int a = 5;
//	return a;
//}
//
//int main() 
//{
//	int& c = function();        //������ ����
//
//	const int& c = function();  //��� �����ڷ� ������ ������ ����
//
//	return 0;
//}
//
//
////����) �������� a �� �Լ��� ���ϰ� �Բ� �Ҹ�Ǳ� ������, 
//// ��� ������ ���� ����. (Dangling reference)
//
