//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	/* 메모리 관리와 메모리의 동적 할당 */
//	/// 동적할당 (heap에 공간 할당)
//	char* pchar = new char;				//1바이트만큼 heap에 공간 할당
//	*pchar = 'a';
//	cout << "메모리주소 :" << (void*)pchar << "\t값 :" << *pchar << endl;  //void*로 형변환
//	cout << "heap 크기: " << sizeof(*pchar) << endl;
//	delete pchar;
//
//	int* pnum = new int;				//4바이트만큼 heap에 공간 할당
//	*pnum = 3;
//	delete pnum;
//
//	double* pdouble{ new double };		//8바이트만큼 heap에 공간 할당
//	*pdouble = 3.141592;
//	delete pdouble;
//
//	/// new 초기화 (new는 ()를 이용해 값 초기화까지 하는게 가능함)
//	int* p = new int(10);				// int 포인터에 메모리를 할당하면서 10으로 값 초기화
//	cout << "*p:" << *p << endl;
//	delete p;
//
//	float* pfloat = new float(75.25f);
//	cout << "*pfloat: " << *pfloat << endl;
//	delete pfloat;
//
//	/// new 배열 초기화
//	int* pary1 = new int[3] {};			// int 3개 배열을 0으로 초기화 (배열은 {}로 초기화 가능)
//	cout << "pary1[0]: " << pary1[0] << endl;
//	delete[] pary1;						// 배열 delete
//
//	int* pary2{ new int[3] {} };
//	delete[] pary2;
//
//	int* pary4{ new int[5] { 1, 2, 3, 4, 5 } };
//	delete[] pary4;
//
//	/// new 문자열 배열 초기화
//	char* pary3 = new char[20] { "Hello World!" };
//	cout << "pary3: " << pary3 << endl;
//	delete[] pary3;
//
//	char* pary3_1 = new char[4] {"abc"};
//	char* pary3_2 = new char[4] {'a', 'b', 'c', '\0'};
//	delete[] pary3_1;
//	delete[] pary3_2;
//
//
//	/*   1.1, 2.2, 3.1, 4.1 데이타를 동적할당하여 초기화 후 출력하세요  */
//	// 1) 각각 초기화
//	double* ptr1 = new double(1.1);
//	double* ptr2 = new double(2.2);
//	double* ptr3 = new double(3.1);
//	double* ptr4 = new double(4.1);
//
//	cout << * ptr1 << '\t' << *ptr2 << '\t' << *ptr3 << '\t' << *ptr4 << endl;
//	delete ptr1; delete ptr2; delete ptr3; delete ptr4;
//
//	// 2) 배열로 초기화	
//	const int PTR5_SIZE = 4;
//	double* ptr5 = new double[PTR5_SIZE] {1.1, 2.2, 3.1, 4.1};
//
//	cout << endl << endl;
//	for (size_t i = 0; i < PTR5_SIZE; i++)
//		cout << "ptr5[" << i << "]: " << ptr5[i] << '\t';
//
//	delete[] ptr5;
//	return 0;
//}