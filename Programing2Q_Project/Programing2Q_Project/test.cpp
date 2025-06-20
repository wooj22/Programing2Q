//#include <iostream>
//using namespace std;
//
//class Animal {
//private:
//	int num = 0;
//
//public:
//	Animal() { cout << "Animal()" << endl; }
//	Animal(int n) : num(n) {};
//	~Animal() { cout << "~Animal()" << endl; }
//	virtual void Show() { cout << "Animat::Show()" << endl; }
//};
//
//
//class Cat : public Animal{
//public:
//	Cat() { cout << "Cat()" << endl; }
//	Cat(int n) : Animal(n) {};
//	~Cat() { cout << "~Cat()" << endl; }
//	void Show() override { __super::Show(); cout << "Cat::Show()" << endl; }
//};
// 
//int main() {
//	Cat cat(1);
//	cat.Show();
//	return 0;
//}