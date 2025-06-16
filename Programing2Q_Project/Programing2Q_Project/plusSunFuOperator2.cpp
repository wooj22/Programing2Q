//// ������ �����ε� ���� // ++, --,  ���� ����, ���� ����, ���� ����, ���� ���� �����ϼ���.
//
//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int m_x, m_y;
//public:
//	Point() { m_x = m_y = 0; }
//	int x() { return m_x; }
//	int y() { return m_y; }
//
//	Point& operator++();       // Prefix increment operator.
//	Point operator++(int);     // Postfix increment operator.
//	Point& operator--();       // Prefix decrement operator.
//	Point operator--(int);     // Postfix decrement operator.
//};
//
//// Define prefix increment operator.
//Point& Point::operator++()
//{
//	m_x++;
//	m_y++;
//	return *this;
//}
//
//// Define postfix increment operator.
//Point Point::operator++(int)
//{
//	Point temp = *this;
//	++*this;
//	return temp;
//}
//
//// Define prefix decrement operator.
//Point& Point::operator--()
//{
//	m_x--;
//	m_y--;
//	return *this;
//}
//
//// Define postfix decrement operator.
//Point Point::operator--(int)
//{
//	Point temp = *this;
//	--*this;
//	return temp;
//}
//
//int main()
//{
//	Point p;
//	cout << (p++).x() << endl;
//	cout << (++p).x() << endl;
//}
//
////friend Point& operator++(Point&)      // Prefix increment
////friend Point  operator++(Point&, int) // Postfix increment
////friend Point& operator--(Point&)      // Prefix decrement
////friend Point  operator--(Point&, int) // Postfix decrement
//
///*
// //���� �Ǵ� ���� �����ڴ� �μ��� �����ϴ� �� �Ϲ������� ������ �ʴ´�.
//
// #include <iostream>
//using namespace std;
//
//class Int
//{
//public:
//	Int& operator++(int n);   //�μ�
////private:
//	int _i = 0;
//};
//
//Int& Int::operator++(int n)
//{
//	if (n != 0)    // Handle case where an argument is passed.
//		_i += n;
//	else
//		_i++;      // Handle case where no argument is passed.
//	return *this;
//}
//
//int main()
//{
//	Int i;
//
//	i.operator++(25); // Increment by 25.
//	cout << i._i;
//
//	//i++;
//	//cout << i._i;
//}
//*/