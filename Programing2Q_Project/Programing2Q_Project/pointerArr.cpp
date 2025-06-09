///// 객체배열, 동적할당, 포인터 배열 
///// 나 이거좀 완전하게 외워야돼!!!!!!!!
///// 티스토리 올려놓기
//
//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//class Circle
//{
//    int radius;
//public:
//    Circle();
//    Circle(int r);
//    ~Circle();
//    void setRadius(int r) { radius = r; }
//    double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle::Circle() { radius = 1; }
//Circle::Circle(int r) { radius = r; }
//Circle::~Circle() {}
//
//
//int main()
//{
//    /* 각각 반지름 2, 3, 5로 설정후 넓이를 출력 */
//
//    /// 1. 객체 배열
//    // 1) 정적 객체 배열
//    Circle arr1[3] = { Circle(2), Circle(3), Circle(5) };
//    for (int i = 0; i < 3; ++i) {
//        cout << arr1[i].getArea() << endl;
//    }
//
//    // 2) 동적 객체 배열
//    Circle* arr2 = new Circle[3]{ Circle(2), Circle(3), Circle(5) };
//    for (int i = 0; i < 3; ++i) {
//        cout << arr2[i].getArea() << endl;
//    }
//
//    Circle* n = new Circle[10]; //copy
//    delete[] arr2; arr2 = n;
//    delete[] arr2;
//
//    /// 2. 포인터 배열 
//    Circle* arr3[3] = { new Circle(2), new Circle(3), new Circle(5) };
//	for (int i = 0; i < 3; ++i) {
//		cout << arr3[i]->getArea() << endl;
//	}
//
//    // 지우고 재할당 하기
//    delete arr3[0]; arr3[0] = nullptr;
//    if (arr3[0] == nullptr) arr3[0] = new Circle(10);
//
//    delete arr3[0];
//    delete arr3[1];
//    delete arr3[2];
//
//    return 0;
//}
