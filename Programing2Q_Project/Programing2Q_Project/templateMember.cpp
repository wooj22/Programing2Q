//// Ŭ���� ���ø��� �ִ� ��� �Լ��� �� �ٽ� ���ø�ȭ�� �� �ִ�.
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class A
//{
//private:
//    T data;
//
//public:
//    A(const T& input) : data(input) {}
//    void print() { cout << data << endl; }
//
//    // ��� �Լ� ���ø�
//    template <typename TT>     
//    void doSomething() 
//    {
//        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
//    }
//};
//
//int main()
//{
//    A<int> a_int(123);
//    a_int.print();
//    a_int.doSomething<float>();
//}