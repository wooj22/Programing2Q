////�޸� ������ �޸��� ���� �Ҵ�  // malloc free ***
//
///*
////���������� ���������� ���ڿ��� ��ƵѼ� ���� ���. ���� �Ҵ� �ʿ�.
//
//	char name[30];
//
//	void readusername(void)
//	{
//		printf("what's your name? ");
//		cin >> name;
//	}
//
//	int main(void)
//	{
//		readusername();	printf("name1: %s \n", name);
//		readusername();	printf("name2: %s \n", name);
//		printf("again name1: %s \n", name);
//		printf("again name2: %s \n", name);
//		return 0;
//	}
//
//	//-----------------------------------------------
//	char* readusername(void)
//	{
//		char* name = (char*)malloc(sizeof(char) * 30);
//		printf("what's your name? ");
//		//gets(name);
//		cin >> name;
//		return name;
//	}
//
//	int main(void)
//	{
//		char* name1;
//		char* name2;
//		name1 = readusername();	printf("name1: %s \n", name1);
//		name2 = readusername();	printf("name2: %s \n", name2);
//		printf("again name1: %s \n", name1);
//		printf("again name2: %s \n", name2);
//		free(name1);
//		free(name2);
//		return 0;
//	}
//*/
//
//// c, c++ ���� �Ҵ�  --------------------------------------------------------
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	// c: malloc free --------------------------------------
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
//	// c++ : new delete ------------------------------------
//	{
//		int* ptr1 = new int;
//		int* ptr2 = new int[7];
//
//		*ptr1 = 20;
//		for (int i = 0; i < 7; i++)		ptr2[i] = i + 1;
//
//		printf("%d \n", *ptr1);
//		for (int i = 0; i < 7; i++)		printf("%d ", ptr2[i]);
//
//		delete ptr1;
//		delete[] ptr2;
//	}
//
//	return 0;
//}
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
