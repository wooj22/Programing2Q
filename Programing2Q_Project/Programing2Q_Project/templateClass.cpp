////클래스 템플릿 - 클래스 맴버의 변수 타입에 대하여 선언
//
////#include <iostream>
////using namespace std;
////
////template <typename T>
////class CTest
////{
////public:
////	CTest(T param) : ndata(param) {}
////	~CTest() {}
////
////	void SetData(T val) { ndata = val; };
////	T GetData() { return ndata; };
////
////private:
////	T ndata;
////};
////
////int main(void)
////{
////	CTest<int> a(1);
////	//CTest a(1);					//C++17
////	cout << a.GetData() << endl;
////
////	CTest<float> b(1.5f);
////	cout << b.GetData() << endl;
////
////	return 0;
////}
//
//// 클래스 템플릿의 선언과 정의의 분리    > 와 나 이거 찾았었는데
//#include <iostream>
//using namespace std;
//
//// 클래스 템플릿의 이름은? Point<T>
//template <typename T>
//class Point												
//{
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0);
//	void ShowPosition() const;
//};
//
//// template <typename T>
//template <typename T>									
//Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}		// Point<T>::
//
//template <typename T>
//void Point<T>::ShowPosition() const {
//	cout << '[' << xpos << ", " << ypos << ']' << endl;
//}
//
//int main(void)
//{
//	// 클래스 템플릿은 <> 생략 불가능
//	// Point<int>와 Point<double>은 같은 템플릿으로 찍어낸 다른 클래스이다.
//	Point<int> pos1(3, 4);
//	pos1.ShowPosition();
//
//	Point<double> pos2(2.4, 3.6);
//	pos2.ShowPosition();
//
//	// 좌표 정보를 문자로 표시
//	Point<char> pos3('P', 'F');
//	pos3.ShowPosition();
//
//	return 0;
//}