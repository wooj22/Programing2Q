////Ŭ���� ���ø� - Ŭ���� �ɹ��� ���� Ÿ�Կ� ���Ͽ� ����
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
//// Ŭ���� ���ø��� ����� ������ �и�    > �� �� �̰� ã�Ҿ��µ�
//#include <iostream>
//using namespace std;
//
//// Ŭ���� ���ø��� �̸���? Point<T>
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
//	// Ŭ���� ���ø��� <> ���� �Ұ���
//	// Point<int>�� Point<double>�� ���� ���ø����� �� �ٸ� Ŭ�����̴�.
//	Point<int> pos1(3, 4);
//	pos1.ShowPosition();
//
//	Point<double> pos2(2.4, 3.6);
//	pos2.ShowPosition();
//
//	// ��ǥ ������ ���ڷ� ǥ��
//	Point<char> pos3('P', 'F');
//	pos3.ShowPosition();
//
//	return 0;
//}