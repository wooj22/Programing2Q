////���� //��ü�� �迭�� ��ü�������� �迭 
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class CPerson
//{
//private:
//	char* name;
//	int age;
//public:
//	CPerson() {
//		name = NULL;
//		age = 0;
//	}
//	CPerson(char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len]; strcpy_s(name, len, myname);
//		age = myage;
//	}
//	~CPerson() {
//		delete[] name;
//	}
//
//	void SetInfo(char* myname, int myage) {
//		name = myname;
//		age = myage;
//	}
//	void ShowInfo() const {
//		cout << "�̸�: " << name << ", " << "����: " << age << endl;
//	}
//};
//
//
//int main(void)
//{
//	CPerson parr[3];			//��ü �迭
//
//	char namestr[100];
//	char* strptr;
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸�: "; cin >> namestr;
//		cout << "����: "; cin >> age;
//
//		strptr = new char[strlen(namestr) + 1];			//new //delete �ϴ� �� Ȯ���ϼ���.
//		strcpy_s(strptr, strlen(namestr) + 1, namestr);
//		parr[i].SetInfo(strptr, age);
//		delete[] strptr;
//	}
//
//	parr[0].ShowInfo();
//	parr[1].ShowInfo();
//	parr[2].ShowInfo();
//
//	return 0;
//}
//
//
//int main(void)
//{
//	CPerson* parr[3];		//��ü�������� �迭
//
//	char namestr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸�: ";	cin >> namestr;
//		cout << "����: ";	cin >> age;
//
//		parr[i] = new CPerson(namestr, age);	// ��ü ��������
//	}
//
//	parr[0]->ShowInfo();
//	parr[1]->ShowInfo();
//	parr[2]->ShowInfo();
//
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//
//	return 0;
//}