//// ��ü�� �Լ�ó�� ����� �� ������?
//// ������ �����ε�  Ȱ��
//// �Լ� ȣ�� �������� () �����ε� 
//
//// �Լ� ��ü -> ��ü�� �Լ�ó�� �����
//// function object (functor)
//
//// ���� ( functor = function + object ) ( �Լ� ��ü )
//// 
////		�Լ� ȣ�� ��������()�� �����ε��� ��ü�� �ǹ��Ѵ�.
////		��ġ �Լ��� ȣ���ϵ� ��ü�� ȣ���� �� �ִ�.
//
////��ü�� �Լ�ó�� ����ϴ� ����? 
////		- �Լ��� ��üó�� �ٷ�� ���� �����̳� �����ϱ⿡ ���ϴ�. ( ����Ÿ - ���¿� �ൿ )
////		- ������ �Լ��� �������� �ʰ� ��ü�� �ϰ��� �ְ� ó�������ϴ�. ( ������ü, �Լ���ü )
////		- ������ü�� ������ ���, �Լ���ü�� ȣ���ؼ� ���
//
////#include <iostream>
////using namespace std;
////
////struct Adder {
////public:
////	int operator() (int n1, int n2) { return n1 + n2; }
////};
////
////void Calc(int n1, int n2, Adder adder) {
////	cout << adder(n1, n2);
////}
////
////int main(void)
////{
////	Calc(1, 2, Adder());
////	return 0;
////}
//
//
///// �پ��� �ڷ����� �����ϱ�
//#include <iostream>
//using namespace std;
//
//class Pos
//{
//private:
//	int xpos, ypos;
//
//public:
//	Pos(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//
//	Pos operator+(const Pos& pos) const	{ return Pos(xpos + pos.xpos, ypos + pos.ypos); }
//
//	friend ostream& operator<<(ostream& os, const Pos& pos);
//};
//
//ostream& operator<<(ostream& os, const Pos& pos)
//{
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class Adder
//{
//public:
//	// () ������ ����
//	int operator()(const int& n1, const int& n2)		
//	{
//		return n1 + n2;
//	}
//
//	double operator()(const double& e1, const double& e2)
//	{
//		return e1 + e2;
//	}
//
//	Pos operator()(const Pos& pos1, const Pos& pos2)
//	{
//		return pos1 + pos2;
//	}
//};
//
//int main(void)
//{
//	Adder adder;
//
//	cout << adder(1, 3) << endl;			// ��ü�� �Լ�ó�� ����ϱ�
//	cout << adder(1.5, 3.7) << endl;		// �پ��� �ڷ��� ����ϱ� 
//	cout << adder(Pos(3, 4), Pos(7, 9));	// Ŭ������ �����غ���.
//
//	return 0;
//}
//
//
