//����) �����ڿ� �Ҹ����� ȣ�� ������ Ȯ������  --------------------------------
//
//#include<conio.h>
//#include<iostream>
//using namespace std;
//
//class Circle
//{
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	~Circle();
//};
//
//Circle::Circle()
//{
//	radius = 1;
//	cout << "������ " << radius << "�� �� ����" << endl;
//}
//
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "������ " << radius << "�� �� ����" << endl;
//}
//
//Circle::~Circle()
//{
//	cout << "������ " << radius << "�� �� �Ҹ�" << endl;
//}
//
//int main()
//{
//	Circle c1;				//Circle() ������ ȣ��� �ʱ�ȭ
//	Circle c2(2);			//Circle(int r)
//	Circle c3(3);
//	return 0;
//}
//
//����) ��ü ����� �Լ� ������ �������� ---------------------------
//
//#include <iostream>
//using namespace std;
//
//class SimpleClass
//{
//	int num1;
//	int num2;
//public:
//	SimpleClass(int n1 = 0, int n2 = 0)		//������
//	{
//		num1 = n1; num2 = n2;
//	}
//
//	void ShowData()							//�ɹ��Լ�
//	{
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void)
//{
//	SimpleClass sc;						// ��ü ����. //�⺻ ������
//	SimpleClass sc = SimpleClass();		// ��ü ����. 
//
//	SimpleClass sc();					// �Լ��� ���� !!! ***
//
//	SimpleClass mysc = sc1();
//	mysc.ShowData();
//	return 0;
//}
//
//SimpleClass sc1()						// SimpleClass �����ϴ� �Լ�
//{
//	SimpleClass sc(20, 30);				// Ŭ���� ��ü ����
//	return sc;
//}
