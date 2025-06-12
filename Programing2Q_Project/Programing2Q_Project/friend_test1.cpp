//// 두 객체의 num 더해진 객체를 리턴
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
//	int Get() { return num; }
//	void Set(int a) { num = a; }
//	MyClass Sum(MyClass obj);
//
//	// friend 등록
//	friend MyClass Sum2(MyClass obj1, MyClass obj2);
//};
//
//// 1. 멤버 함수
//MyClass MyClass::Sum(MyClass obj)
//{
//	MyClass newOb;
//	newOb.num = this->num + obj.num;
//	return newOb;
//}
//
//// 2. 일반 함수
//MyClass Sum2(MyClass obj1, MyClass obj2)
//{
//	MyClass res;
//	res.num = obj1.num + obj2.num;
//	return res;
//}
//
//int main(void)
//{
//	MyClass x; x.Set(1);		// 1
//	MyClass y; x.Set(10);		// 10
//
//	MyClass z1 = x.Sum(y);
//	cout << z1.Get() << endl;
//
//	MyClass z2 = Sum2(x, y);
//	cout << z2.Get() << endl;
//
//	return 0;
//}
//
