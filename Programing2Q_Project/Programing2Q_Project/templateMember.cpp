//// 클래스 템플릿에 있는 멤버 함수를 또 다시 템플릿화할 수 있다.
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
//    // 멤버 함수 템플릿
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