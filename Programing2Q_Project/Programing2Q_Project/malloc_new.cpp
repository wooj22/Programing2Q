////�޸� ������ �޸��� ���� �Ҵ�  // malloc free ***
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	// C: malloc free -----------------------------------------
//	{
//		int* ptr1 = (int*)malloc(sizeof(int));
//		int* ptr2 = (int*)malloc(sizeof(int) * 7);
//		int i;
//
//		*ptr1 = 20;
//		for (i = 0; i < 7; i++)	ptr2[i] = i + 1;
//
//		printf("%d \n", *ptr1);
//		for (i = 0; i < 7; i++)	printf("%d ", ptr2[i]);
//
//		free(ptr1);
//		free(ptr2);
//	}
//	// C++ : new delete ---------------------------------------
//	{
//		int* ptr1 = new int;
//		*ptr1 = 20;
//		printf("%d \n", *ptr1);
//
//		int* ptr2 = new int[7];
//		for (int i = 0; i < 7; i++)	ptr2[i] = i + 1;
//		for (int i = 0; i < 7; i++)	printf("%d ", ptr2[i]);
//
//		delete ptr1;
//		delete[] ptr2;
//	}
//
//	return 0;
//}
//
///*
////���������� ���������� ���ڿ��� ��ƵѼ� ���� ���. ���� �Ҵ� �ʿ�.
//
//	char name[30];
//
//	void ReadUserName(void)
//	{
//		printf("What's your name? ");
//		cin >> name;
//	}
//
//	int main(void)
//	{
//		ReadUserName();	printf("name1: %s \n", name);
//		ReadUserName();	printf("name2: %s \n", name);
//		printf("again name1: %s \n", name);
//		printf("again name2: %s \n", name);
//		return 0;
//	}
//
//	//-----------------------------------------------
//	char* ReadUserName(void)
//	{
//		char* name = (char*)malloc(sizeof(char) * 30);
//		printf("What's your name? ");
//		//gets(name);
//		cin >> name;
//		return name;
//	}
//
//	int main(void)
//	{
//		char* name1;
//		char* name2;
//		name1 = ReadUserName();	printf("name1: %s \n", name1);
//		name2 = ReadUserName();	printf("name2: %s \n", name2);
//		printf("again name1: %s \n", name1);
//		printf("again name2: %s \n", name2);
//		free(name1);
//		free(name2);
//		return 0;
//	}
//*/
//
///*
//// malloc, realloc ----------------------------------------------------------------
//
//malloc()
//	�Լ�����: void* malloc(size_t size);
//	malloc�� size��ŭ�� �޸𸮸� �Ҵ��ϰ�(�ʱ�ȭ ����) �ش� �� ������ ��ȯ�մϴ�.
//
//	int* ptr = malloc(10 * sizeof(int));
//
//calloc()
//	�Լ�����: void* calloc(size_t nelements, size_t bytes);
//	calloc�� num* size��ŭ�� �޸𸮸� �Ҵ��ϰ� �ش� �� ������ 0���� �ʱ�ȭ�Ͽ� ��ȯ�մϴ�.
//
//	int* ptr = calloc(10, sizeof(int));
//
//realloc()
//	�Լ�����: void *realloc(void *block, size_t size);
//	realloc�� malloc�̳� calloc���� �Ҵ���� �޸��� ����� ������ �� ����Ѵ�.
//
//
//	//-------------------------------------------------------------
//	#include <stdio.h>
//	#include <stdlib.h>
//
//	int main() {
//		int *pi1;
//		int *pi2;
//
//		pi1 = (int *)malloc(sizeof(int) * 3); //�Ҵ�
//		printf("malloc : %d %d %d\n", pi1[0], pi1[1], pi1[2]);
//
//		pi2 = (int *)calloc(3, sizeof(int)); //�Ҵ�
//		printf("calloc : %d %d %d\n", pi2[0], pi2[1], pi2[2]);
//
//		free(pi1);		//�޸� ����
//		free(pi2);		//�޸� ����
//	}
//
//	//-------------------------------------------------------------
//	#include <stdio.h>
//	#include <stdlib.h>
//
//	int main()
//	{
//		int i;
//		int *pi = (int *)malloc(sizeof(int) * 3);	//4x3 �޸� �Ҵ�
//		for (i = 0; i < 3; i++)	pi[i] = i * 4;
//		for (i = 0; i < 3; i++)
//			printf("pi[%d] : memory %d %d\n", i, &pi[i], pi[i]);
//		printf("-----------------------------\n");
//
//		pi = (int *)realloc(pi,sizeof(int) * 5);	//4x5 �޸� ���Ҵ�
//		for (i = 3; i < 5; i++)	pi[i] = i * 4;
//		for (i = 0; i < 5; i++)
//			printf("pi[%d] : memory %d %d\n", i, &pi[i], pi[i]);
//		printf("-----------------------------\n");
//
//		free(pi);	//�޸� ����
//	}
//
//*/
//
////����) int ����Ÿ 10���� ������ �������� Ȯ���ϰ�
////		1���� 10 �� ���ڸ� ������ ��
////		�� ������ ����ϴ� ���α׷��� �ۼ��϶�.
//
//
////����) �Ʒ� �ڵ忡�� �߸��� �κ��� �����ϼ���. 
///*
//
//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	int n = 2;
//	int arr[n];					//1
//	int* p = new int[n];		//2
//	cout << p[1];				//3
//	p[2] = 2;					//4
//	p = new int[3];				//5
//	delete p;					//6
//}
//
////1 �迭���� ��� ����ؾ� ��
////2 ����
////3 �ʱ�ȭ ���� ���
////4 ���� ���
////5 �ּ� ���(�޸� ����)
////6 []�� ���� �ؾ� ��
//
//*/
//
//
////����) 20���̳��� ���ڿ��� 5�� ���� �� ����Ϸ��� �մϴ�.
////		�����Ҵ��� ����Ͽ� ����Ȯ�� �� ���ڿ��� Ű����� �Է¹޾� ���� �� ����ϼ���.
///*
//#include <iostream>
//#include <cstring> // strlen, strcpy �Լ� ���
//
//int main() {
//	const int STRING_COUNT = 5;
//	const int MAX_LENGTH = 20; // 20�� + �ι���('\0')�� ���� 21�� �Ҵ�
//	char** arr = new char*[STRING_COUNT]; // ���ڿ� ������ �迭 ���� �Ҵ�
//
//	// �� ���ڿ� ���� ���� �Ҵ� �� �Է�
//	for (int i = 0; i < STRING_COUNT; ++i) {
//		arr[i] = new char[MAX_LENGTH + 1]; // 20�� + '\0'
//		std::cout << i + 1 << "��° ���ڿ� �Է�: ";
//		std::cin.getline(arr[i], MAX_LENGTH + 1);
//	}
//
//	// �Էµ� ���ڿ� ���
//	std::cout << "\n�Է��� ���ڿ� ���:\n";
//	for (int i = 0; i < STRING_COUNT; ++i) {
//		std::cout << arr[i] << std::endl;
//	}
//
//	// ���� �Ҵ� ����
//	for (int i = 0; i < STRING_COUNT; ++i) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//	return 0;
//}
//*/
//
///*
////�Լ� ������������ ���� �迭 �Ҵ�
//
//	typedef void (*FPTR)();					//typedef Ȱ��
//
//	void (**p)() = new FPTR[4];				//�Լ������� �����Ҵ�
//
//	void (*(*p)[3])() = new FPTR[4][3];		//�Լ������� �迭 �����Ҵ�
//
//*/
//
////�����Ҵ��̶�
////new delete
//// 
////�����Ҵ��� �ʿ��� ����
////�迭�� �����Ҵ� - new[] delete[]
////����ü�� �����Ҵ�
////
////Ŭ������ �����Ҵ�
////������ ����� ���� ����
////����Ʈ ������ (unique_ptr, shared_ptr) ���
