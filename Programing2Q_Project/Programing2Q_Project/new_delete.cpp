////�޸� ������ �޸��� ���� �Ҵ�  // new delete
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	char* pchar = new char;						//1����Ʈ��ŭ heap�� ���� �Ҵ�
//	*pchar = 'a';
//	cout << "�޸��ּ� :" << (void*)pchar << "\t�� :" << *pchar << endl;   //void*�� ����ȯ
//	cout << "heap ũ��: " << sizeof(*pchar) << endl;
//	delete pchar;
//
//	int* pnum = new int;						//4����Ʈ��ŭ heap�� ���� �Ҵ�
//	*pnum = 3;
//	cout << "�޸��ּ� :" << pnum << "\t�� :" << *pnum << endl;
//	cout << "heap ũ��: " << sizeof(*pnum) << endl;
//	delete pnum;
//
//	double* pdouble{ new double };				//8����Ʈ��ŭ heap�� ���� �Ҵ�
//	*pdouble = 3.141592;
//	cout << "�޸��ּ� :" << pdouble << "\t�� :" << *pdouble << endl;
//	cout << "heap ũ��: " << sizeof(*pdouble) << endl;
//	delete pdouble;
//
//
//	//new �ϸ鼭 �ʱ�ȭ�ϱ� //new�� �ʱ�ȭ�� �����ϴ�. ------------------
//
//	int* p = new int(10);
//	cout << "*p:" << *p << endl;
//	delete p;
//
//	float* pfloat = new float(75.25);				//float �� ������ ������.
//	cout << "*pfloat:" << *pfloat << endl;
//	delete pfloat;
//
//	int* pary1 = new int[3] {};						//�迭 //0���� �ʱ�ȭ 
//	cout << "pary1[0]:" << pary1[0] << endl;
//	delete[] pary1;
//
//	int* pary2{ new int[3] {} };					//�迭 //0���� �ʱ�ȭ //{} �ʱ�ȭ
//	delete[] pary2;
//
//	int* pary3{ new int[5] { 1, 2, 3, 4, 5 } };		//�迭, ������ �ʱ�ȭ
//	delete[] pary3;
//
//	char* pary4 = new char[20] { "Hello World!" };	//���ڿ�
//	cout << "pary3:" << pary4 << endl;
//	delete[] pary4;
//
//	int num = 6;												//������ �Ҵ��� �� ���� ���� ***
//	auto* pary5{ new float[num] { 1.1, 2.2, 3.1, 4.1 } };		//auto* - float*
//	for (int i = 0; i < num; i++)
//		cout << "pary5[" << i << "]:\t" << pary5[i] << "  ";
//	cout << endl;
//	delete[] pary5;
//
//	return 0;
//}
//
///*
//
//new �� ���� ��� ***
//	1. operator new()�� �̿��Ͽ� �޸� �Ҵ�
//	2. ������ ȣ��
//	3. �޸� �ּҸ� �ش� Ÿ������ ��ȯ
//
//delete �� ���� ���
//	1. �Ҹ��� ȣ��
//	2. operator delete()�� �̿��Ͽ� �޸� ����
//
//
////------------------------------------------------------------------------
//C++���� C����� malloc free �Լ��̿ܿ� new delete �����ڰ� �ϳ� �� �ִ�.
//	�Ѵ� ����� ���������� C++ �����ڰ� �� ���� �����ϱ� ������ �� ���� ���ȴ�.
//	Ư�� 'Ŭ����'�� ���� �ݵ�� new delete �����ڸ� ����ؾ� �Ѵ�. ***
//
//	int *p = (int *)malloc(sizeof(int));
//	int *p = new int;
//	//�ּҸ� ������ ������ = new �Ҵ��ϰ� ���� ũ���� �ڷ���;
//
//�迭�� ����Ͽ� ������ ũ���� �޸𸮸� ���� �޸𸮸� �Ҵ� �Ϸ���, �Ʒ��� ���ó�� ���ָ� �ȴ�.
//
//	int *p = (int *)malloc(sizeof(int)*10);		// int[10]
//	int *p = new int[10];
//
//C���� free�� ���� �� new �����ڿ����� delete �����ڰ� �ִ�.
//ǥ�� ����� �Ʒ��� ����.
//
//	free(p);
//	delete p;
//
//// new delete �迭 ��� ------------------------------------------------
//
//������ delete�����ڿ����� �����ؾ� �� ���� �ִµ�,
//new �����ڿ� ���� ���·� ������ �� �־�� �Ѵٴ� ���̴�. ***
//
//	int *p = new int;
//	delete p;
//
//	int *p = new int[10];
//	delete[] p;				// �迭�� �迭�� ����
//
//*/
