/// ��ü �迭  (��ü�� ������)
//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x, y;
//
//public:
//
//	Point(int x = 0, int y = 0)
//	{
//		this->x = x;
//		this->y = y;
//		cout << x << "," << y << endl;
//	}
//
//	// ���� ������
//	Point(const Point& p)
//	{
//		this->x = p.x;
//		this->y = p.y;
//		cout << "���������" << endl;
//	}
//};
//
//int main()
//{
//	// ��ü �迭 ����
//	Point array[5];
//
//	// ��ü �迭 ���� ����
//	Point arr[5]{ 10,20,30 };
//	Point array2[5]{ Point(10, 20), Point(30, 40) };
//
//	// ��ü �迭 ���� ����
//	Point* p1 = new Point[5];							// ��������
//	Point* p2 = new Point[5]{ {10,10}, 20, 30, 40 };	// �����ϸ鼭 �ʱ�ȭ
//
//	delete[] p1;
//	delete[] p2;
//
//	// ��ü ������ �迭
//	Point* parr[5];
//	cout << "-------\n";
//	for (int i = 0; i < 5; i++) 
//	{
//		parr[i] = new Point(i * 10, i * 10);	// �������̹Ƿ� ����(������)���� ���� �����Ͽ� �Ҵ�
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		delete parr[i];		// ���� �Ҵ�� ��ü�� ����
//	}
//
//	// ��ü�� ���� ���� 
//	Point x1(1, 2);
//	Point x2 = x1;
//}

/*
// ��ü�� �迭�� �����ϼ��� //�迭�� �����ͷ� �����ϼ���.

class MyClass
{
	int num = 0;
public:
	MyClass(int a) : num(a)	{	}
	void Show()	{	cout << num << endl;	}
};

int main(void)
{
	MyClass array[4] = {		//�迭�� �迭�� ����
		MyClass(1), MyClass(2), MyClass(3), MyClass(4)
	};

	MyClass* pClass = array;	//�迭�� �����ͷ� ����

	(*pClass).Show();
	pClass->Show();				//�����ͷ� �ɹ� ���� ***
	(pClass + 1)->Show();

	return 0;
}

*/