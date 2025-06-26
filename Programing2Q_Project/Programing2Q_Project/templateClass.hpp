//// 클래스 템플릿의 선언과 정의의 분리 
////	템플릿 코드는 컴파일 할 때 포함되어야 한다. 
////	즉, 헤더에 존재해야 한다.  -> hpp
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Point
//{
//private:
//	T xpos, ypos;
//
//public:
//	Point(T x = 0, T y = 0);
//	void ShowPosition() const;
//};
//
////Point<T>::
//template <typename T>
//Point<T>::Point(T x, T y) : xpos(x), ypos(y)
//{
//
//}
//
////Point<T>::
//template <typename T>
//void Point<T>::ShowPosition() const
//{
//	cout << '[' << xpos << ", " << ypos << ']' << endl;
//}
