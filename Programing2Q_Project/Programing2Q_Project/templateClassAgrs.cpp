// 자료형 2개에 대해 템플릿화하기 -> 타입 매개변수가 2개
//#include <iostream>                            
//using namespace std;
//                
//template <typename T1, typename T2> // 타입 매개변수
//class Data 
//{
//    T1 value;
//
//public:
//    Data(T1 v);
//    void CopyData(T2 v);
//    T1 GetData();
//};
//
//template <typename T1, typename T2>
//Data<T1, T2>::Data(T1 v) { value = v; }
//template <typename TYPE, typename T2>
//void Data<T1, T2>::CopyData(T2 v) { value = v; }
//template <typename T1, typename T2>
//T1 Data<T1, T2>::GetData() { return value; }
//
//void main()
//{
//    int a = 10;
//    Data<int, int&> obj1(10);    cout << obj1.GetData() << endl;
//    obj1.CopyData(a);    cout << obj1.GetData() << endl;
//
//    double b = 3.4;
//    Data<double, double&> obj2(1.5);    cout << obj2.GetData() << endl;
//    obj2.CopyData(b);    cout << obj2.GetData() << endl;
//}
