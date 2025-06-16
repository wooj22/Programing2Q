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
//	// 선행 연산자 오버로딩
//	// 선행 연산의 결과는 L value이기 때문에 this 역참조로 return
//	Complex& operator++() {
//		++this->real; ++this->image;
//		return *this;
//	}
//
//	// 후행 연산자 오버로딩
//	// 후행연산의 결과는 상수(R value)이기 때문에 그대로 반환
//	// 후행연산을 구분하는 것은 매개변수(int)이다. -> 암기
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
//	cout << "---- 선행처리 ----\n";
//	z = ++x;
//	x.ShowComplex();
//	z.ShowComplex();
//
//	cout << "---- 후행처리 ----\n";
//	z = y++;
//	y.ShowComplex();
//	z.ShowComplex();
//}