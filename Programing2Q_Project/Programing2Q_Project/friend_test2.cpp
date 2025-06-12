//// friend �̿��� ++ ������ ���
//
//#include <iostream>
//using namespace std;
//
//class MyClass
//{
//private:
//	int num = 0;
//
//public:
//	MyClass() {}
//	MyClass(int a) :num(a) {}
//	void Show() { cout << num << endl; }
//
//	// 1. ��� �Լ�
//	MyClass AddOnePrefix()
//	{
//		++this->num;
//		return *this;
//	}
//
//	MyClass AddOnePostfix()
//	{
//		MyClass temp;
//		temp = *this;
//		++this->num;
//		return temp;
//	}
//
//	// friend
//	friend MyClass& AddOnePrefix(MyClass& obj);
//	friend MyClass AddOnePostfix(MyClass& obj);
//};
//
//// 2. �ܺ� �Լ� -> friend
//MyClass& AddOnePrefix(MyClass& obj)
//{
//    ++obj.num;
//    return obj;
//}
//
//MyClass AddOnePostfix(MyClass& obj)
//{
//    MyClass temp;
//    temp = obj;
//    ++obj.num;
//    return temp;
//}
//
//void main()
//{
//	MyClass x(10), y(10);
//	MyClass z;
//
//	cout << "---- ����ó�� ----\n";
//	z = AddOnePrefix(x);
//	z.Show();	//11
//	x.Show();	//11
//
//	cout << "---- ����ó�� ----\n";
//	z = AddOnePostfix(y);
//	z.Show();	//10
//	y.Show();	//11
//}