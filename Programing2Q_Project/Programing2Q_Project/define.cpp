#include <iostream>
using namespace std;

/*
//C

#define CA_RUSSIA	1707540
#define CA_CANADA	998467
#define CA_CHINA	957290

*/

//class CountryArea
//{
//public:
//	const static int RUSSIA = 1707540;			//const static ���� ���� //��ũ�κ��� ��
//	const static int CANADA = 998467;
//	const static int CHINA = 957290;
//	const static int SOUTH_KOREA = 9922;
//};
//
//int main(void)
//{
//	cout << "���þ� ����: " << CountryArea::RUSSIA << "��" << endl;
//	cout << "ĳ���� ����: " << CountryArea::CANADA << "��" << endl;
//	cout << "�߱� ����: " << CountryArea::CHINA << "��" << endl;
//	cout << "�ѱ� ����: " << CountryArea::SOUTH_KOREA << "��" << endl;
//	return 0;
//}


//#include <stdio.h>
//
//typedef unsigned char BYTE;
//#define RGB(r , g , b) ((BYTE)(r) << 16) | ((BYTE)(g) << 8) | (BYTE)(b)
//#define RED(color) (BYTE)((color) >> 16)
//#define GREEN(color) (BYTE)((color) >> 8)
//#define BLUE(color) (BYTE)(color)
//
//int main() {
//	int color = RGB(0xFF, 0xEE, 0xAA);
//	printf("R = %X : G = %X : B = %X\n",
//		RED(color), GREEN(color), BLUE(color));
//	return 0;
//}

//����) class , static ������ ��ȯ �ϼ���.
//#include <iostream>
//using namespace std;
//
//class Color {
//
//public:
//	typedef unsigned char BYTE;
//
//	static int RGB(BYTE r, BYTE g, BYTE b) {
//		return ((BYTE)(r) << 16) | ((BYTE)(g) << 8) | (BYTE)(b);
//	}
//	static BYTE RED(int color) {
//		return (BYTE)((color) >> 16);
//	}
//	static BYTE GREEN(int color) {
//		return (BYTE)((color) >> 8);
//	}
//	static BYTE BLUE(int color) {
//		return (BYTE)(color);
//	}
//};
//
//int main() {
//	int color = Color::RGB(0xFF, 0xEE, 0xAA);
//	printf("R = %X : G = %X : B = %X\n",
//		Color::RED(color), Color::GREEN(color), Color::BLUE(color));
//	return 0;
//}
