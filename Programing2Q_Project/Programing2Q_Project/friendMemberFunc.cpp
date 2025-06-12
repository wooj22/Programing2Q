//// 다른 클래스의 특정 멤버함수를 대상으로도 friend 선언 가능하다.
//// 여기서 주의할 점!! 멤버함수만 등록시키고 싶다면 h, cpp 파일을 분리해야한다.
//// 헤더에는 클래스의 전방선언만 하고, cpp파일에서 사용할 클래스의 헤더를 include해야한다.
//
//#include <iostream>
//using namespace std;
//
//class Point;
//
///* Point 좌표 연산 Class */
//class PointOP
//{
//private:
//	int opcnt;
//
//public:
//	PointOP() : opcnt(0) {}
//	~PointOP() { cout << "Operation times: " << opcnt << endl; }
//
//	Point PointAdd(const Point&, const Point&);
//	Point PointSub(const Point&, const Point&);
//};
//
//Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
//{
//	opcnt++;
//	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
//}
//
//Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
//{
//	opcnt++;
//	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
//}
//
///* Point 좌표 Class */
//class Point
//{
//private:
//	int x;
//	int y;
//
//public:
//	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) {}
//
//	// friend 등록 (클래스 전체가 아닌 특정 멤버 함수만)
//	friend Point PointOP::PointAdd(const Point&, const Point&);
//	friend Point PointOP::PointSub(const Point&, const Point&);
//	friend void ShowPointPos(const Point&);
//};
//
//
//int main(void)
//{
//	Point pos1(1, 2);
//	Point pos2(2, 4);
//	PointOP op;
//
//	ShowPointPos(op.PointAdd(pos1, pos2));
//	ShowPointPos(op.PointSub(pos2, pos1));
//	return 0;
//}
//
//void ShowPointPos(const Point& pos)
//{
//	cout << "x: " << pos.x << ", ";
//	cout << "y: " << pos.y << endl;
//}