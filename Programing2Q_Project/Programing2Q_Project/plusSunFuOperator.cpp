//#include <iostream> 
//using namespace std;
//
//class Complex
//{
//private:
//	int real;
//	int image;
//public:
//	Complex(int r = 0, int i = 0) { real = r;	image = i; }
//	void ShowComplex() { cout << "( " << real << " + " << image << "i )" << endl; }
//
//	// ���� ������ �����ε�
//	// ���� ������ ����� L value�̱� ������ this �������� return
//	Complex& operator++() {
//		++this->real; ++this->image;
//		return *this;
//	}
//
//	// ���� ������ �����ε�
//	// ���࿬���� ����� ���(R value)�̱� ������ �״�� ��ȯ
//	// ���࿬���� �����ϴ� ���� �Ű�����(int)�̴�. -> �ϱ�
//	Complex operator++(int) {
//		Complex temp = *this;
//		++this->real; ++this->image;
//		return temp;
//	}
//
//	// friend
//	/*friend Complex& operator++(Complex& obj);
//	friend Complex& operator++(Complex& obj, int);*/
//};
//
////Complex& operator++(Complex& obj) {
////	++obj.real; ++obj.image;
////	return obj;
////}
////
////Complex& operator++(Complex& obj, int) {
////	Complex temp = obj;
////	++obj.real; ++obj.image;
////	return temp;
////}
//
//void main()
//{
//	Complex x(10, 10), y(20, 20);
//	Complex z;
//
//	cout << "---- ����ó�� ----\n";
//	z = ++x;
//	x.ShowComplex();
//	z.ShowComplex();
//
//	cout << "---- ����ó�� ----\n";
//	z = y++;
//	y.ShowComplex();
//	z.ShowComplex();
//}