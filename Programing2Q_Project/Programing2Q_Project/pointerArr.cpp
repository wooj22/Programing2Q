///// ��ü�迭, �����Ҵ�, ������ �迭 
///// �� �̰��� �����ϰ� �ܿ��ߵ�!!!!!!!!
///// Ƽ���丮 �÷�����
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
//    /* ���� ������ 2, 3, 5�� ������ ���̸� ��� */
//
//    /// 1. ��ü �迭
//    // 1) ���� ��ü �迭
//    Circle arr1[3] = { Circle(2), Circle(3), Circle(5) };
//    for (int i = 0; i < 3; ++i) {
//        cout << arr1[i].getArea() << endl;
//    }
//
//    // 2) ���� ��ü �迭
//    Circle* arr2 = new Circle[3]{ Circle(2), Circle(3), Circle(5) };
//    for (int i = 0; i < 3; ++i) {
//        cout << arr2[i].getArea() << endl;
//    }
//
//    Circle* n = new Circle[10]; //copy
//    delete[] arr2; arr2 = n;
//    delete[] arr2;
//
//    /// 2. ������ �迭 
//    Circle* arr3[3] = { new Circle(2), new Circle(3), new Circle(5) };
//	for (int i = 0; i < 3; ++i) {
//		cout << arr3[i]->getArea() << endl;
//	}
//
//    // ����� ���Ҵ� �ϱ�
//    delete arr3[0]; arr3[0] = nullptr;
//    if (arr3[0] == nullptr) arr3[0] = new Circle(10);
//
//    delete arr3[0];
//    delete arr3[1];
//    delete arr3[2];
//
//    return 0;
//}
