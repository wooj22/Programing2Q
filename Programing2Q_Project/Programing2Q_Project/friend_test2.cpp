//// friend 이용한 ++ 연산자 기능
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
//	// 1. 멤버 함수
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
//// 2. 외부 함수 -> friend
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
//	cout << "---- 선행처리 ----\n";
//	z = AddOnePrefix(x);
//	z.Show();	//11
//	x.Show();	//11
//
//	cout << "---- 후행처리 ----\n";
//	z = AddOnePostfix(y);
//	z.Show();	//10
//	y.Show();	//11
//}