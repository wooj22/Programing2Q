// ��ü �ɹ��� ���Ͽ� this-> �� ����ϴ� ���

//#include <iostream>
//using namespace std;
//
//class TwoNumber {
//private:
//	int num1;
//	int num2;
//
//public:
//	TwoNumber(int num1, int num2)		// �Ű������� �����ϱ�
//	{
//		this->num1 = num1;				
//		this->num2 = num2;
//	}
//
//	TwoNumber(int num1, int num2) : num1(num1), num2(num2) // �ɹ����� �ʱ�ȭ
//	{
//		// empty
//	}
//
//	void Show()
//	{
//		cout << this->num1 << endl;
//		cout << this->num2 << endl;
//	}
//};
//
//int main(void)
//{
//	TwoNumber two(2, 4);
//	two.Show();
//	return 0;
//}


// ��ü �ɹ��� ���Ͽ� this �� ����ϴ� ���
// ��� �Լ��� ��ü �ڽ��� �ּҸ� ������ ��

//class Smaple {
//public:
//	Smaple* f() {
//		return this;
//	}
//};


//this ��� ���� ------------------------------------------------

// ��� �Լ��� �ƴ� �Լ����� this ��� �Ұ� -> ��ü���� ���ü��� ���� ������
// static ��� �Լ����� this ��� �Ұ�
// ��ü�� ����� ���� static �Լ� ȣ���� ���� �� �ֱ� ������