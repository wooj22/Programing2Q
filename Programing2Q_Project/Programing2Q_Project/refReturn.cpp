// �ڽ� ���� ��ȯ
// �ڽ��� �״�� ��ȯ, ���� ȣ���� ����.

//#include <iostream>
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
//		cout << "��ü����" << endl;
//	}
//
//	//CTest& -> ������ ��ȯ(����)
//	CTest& Adder(int n)			
//	{
//		num += n;
//		return *this;			// this ��ȯ
//	}
//
//	CTest& ShowNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};
//
//int main(void)
//{
//	CTest obj(3);
//	CTest& ref = obj.Adder(2);		//obj ���� ����
//
//	obj.ShowNumber();
//	ref.ShowNumber();
//
//	ref.Adder(1).ShowNumber().Adder(2).ShowNumber(); //�ڽ� ���� ��ȯ
//
//	return 0;
//}


//����)
//  ��ü�� �����ϰ�, ��ü �ڽ��� �ּҸ� �����ϴ� �ɹ��Լ���
//  ��ü �ڽ��� �����ϴ� �ɹ��Լ��� ���� �ۼ��ϼ���. ***
//#include <iostream>
//using namespace std;
//
//class CTest
//{
//private:
//	int num;
//public:
//	CTest(int n) : num(n) {}
//	void Show() { cout << num << endl; }
//
//	CTest& GetSelf() { return *this; }	//*this �� ��ȯ, ��ü �ڽ��� ��ȯ  ***
//	CTest* GetThis() { return this; }	//this �� ��ȯ, ��ü �ּҸ� ��ȯ  ***
//};
//
//int main(void)
//{
//	return 0;
//}
//
