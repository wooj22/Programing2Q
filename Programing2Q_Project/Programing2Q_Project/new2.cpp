//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	/* �޸� ������ �޸��� ���� �Ҵ� */
//	/// �����Ҵ� (heap�� ���� �Ҵ�)
//	char* pchar = new char;				//1����Ʈ��ŭ heap�� ���� �Ҵ�
//	*pchar = 'a';
//	cout << "�޸��ּ� :" << (void*)pchar << "\t�� :" << *pchar << endl;  //void*�� ����ȯ
//	cout << "heap ũ��: " << sizeof(*pchar) << endl;
//	delete pchar;
//
//	int* pnum = new int;				//4����Ʈ��ŭ heap�� ���� �Ҵ�
//	*pnum = 3;
//	delete pnum;
//
//	double* pdouble{ new double };		//8����Ʈ��ŭ heap�� ���� �Ҵ�
//	*pdouble = 3.141592;
//	delete pdouble;
//
//	/// new �ʱ�ȭ (new�� ()�� �̿��� �� �ʱ�ȭ���� �ϴ°� ������)
//	int* p = new int(10);				// int �����Ϳ� �޸𸮸� �Ҵ��ϸ鼭 10���� �� �ʱ�ȭ
//	cout << "*p:" << *p << endl;
//	delete p;
//
//	float* pfloat = new float(75.25f);
//	cout << "*pfloat: " << *pfloat << endl;
//	delete pfloat;
//
//	/// new �迭 �ʱ�ȭ
//	int* pary1 = new int[3] {};			// int 3�� �迭�� 0���� �ʱ�ȭ (�迭�� {}�� �ʱ�ȭ ����)
//	cout << "pary1[0]: " << pary1[0] << endl;
//	delete[] pary1;						// �迭 delete
//
//	int* pary2{ new int[3] {} };
//	delete[] pary2;
//
//	int* pary4{ new int[5] { 1, 2, 3, 4, 5 } };
//	delete[] pary4;
//
//	/// new ���ڿ� �迭 �ʱ�ȭ
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
//	/*   1.1, 2.2, 3.1, 4.1 ����Ÿ�� �����Ҵ��Ͽ� �ʱ�ȭ �� ����ϼ���  */
//	// 1) ���� �ʱ�ȭ
//	double* ptr1 = new double(1.1);
//	double* ptr2 = new double(2.2);
//	double* ptr3 = new double(3.1);
//	double* ptr4 = new double(4.1);
//
//	cout << * ptr1 << '\t' << *ptr2 << '\t' << *ptr3 << '\t' << *ptr4 << endl;
//	delete ptr1; delete ptr2; delete ptr3; delete ptr4;
//
//	// 2) �迭�� �ʱ�ȭ	
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