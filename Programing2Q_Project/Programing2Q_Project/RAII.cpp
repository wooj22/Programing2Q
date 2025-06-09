// �Ҹ���	- ��ü �Ҹ��� �� ȣ��Ǵ� �Լ�
// �Ҹ��ڿ��� ���� ó��

// Ŭ������ �ɹ��� �����ͺ����� �ִ� ���
// ��ü���� - �����Ҵ�� ���� ���� ***

/*
	//�̸�,���� �� ���� �������
	int main(void)
	{
		char name[100]  = "Lee dong su";
		int age			= 29;
	}

	//�̸�,���̸� ���� ����ϴ� ��ü �����
	int main(void)
	{
		CPerson man1("Lee dong su", 29);
		CPerson man2("Kim min woo", 41);
		man1.ShowInfo();
		man2.ShowInfo();
		return 0;
	}
*/


// �ɹ��� �����ͺ����� �����ϰ� �����Ҵ��� �ϴ� ��� �ڿ� ����----------------------
// ���� �Ҵ�� �޸��� ���� ���θ� �����ؾ��� -> ���� �Ҹ��ڿ��� ����
//#include <iostream>
//using namespace std;
//
//class CPerson
//{
//private:
//	char* name;			// ������ ���
//	int		age;
//
//public:
//	CPerson(const char* _name, int _age)
//	{
//		int len = strlen(_name) + 1;
//		name = new char[len]; 
//		strcpy_s(name, len, _name);	// new
//		age = _age;
//	}
//
//	~CPerson()
//	{
//		delete[] name;				// delete (�Ҹ��ڿ��� �����ϴ°� �Ϲ�����)
//	}
//
//	void Show() const
//	{
//		cout << "�̸�: " << name << " ����: " << age << endl;
//	}
//};
//
//int main(void)
//{
//	char name1[] = "Lee dong su";
//	char name2[] = "Kim min woo";
//	CPerson man1(name1, 29);
//	CPerson man2(name2, 41);
//	man1.Show();
//	man2.Show();
//
//	return 0;
//}



//RAII ���� --------------------------------------------------------------------
//	���ҽ� ȹ���� �ʱ�ȭ��. 
//  (Resource Acquisition Is Initialization)  ***
//	�ڿ��� ������ ����� ���� ��ü�� ���̴� �������� ����� �ڿ��� �������ִ� ���
// 
//	stack�� �Ҵ�� �ڿ��� 
//	�ڽ��� scope�� ������, �޸𸮰� �����Ǹ� destructor�� �Ҹ��ٴ� ������ �̿� ***



//����)
// �Ʒ�ó�� �����ϰ� �� �� ������, 
// ���� �߻��ϸ� fclose�� ȣ������ �ʰ� ����Ǵ� ���� ����
// RAII �������� �����ϼ���.

//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//void UseFile() {
//	FILE* file = nullptr;
//	errno_t err = fopen_s(&file, "./test.txt", "w+");
//	// Do something  //���⼭ ���� �߻��ϸ� ????
//	if (file != nullptr) fclose(file);
//}
//
//int main()
//{
//	UseFile();
//}


//����) ��ü�� ���� (RAII ����) ---------------------------
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//class CFile final
//{
//private:
//	FILE* file_ = nullptr;
//
//public:
//	CFile(const std::string& path)
//	{
//		errno_t err = fopen_s(&file_, path.c_str(), "w+");
//	}
//
//	~CFile()
//	{
//		fclose(file_);	// �Ҹ��ڿ��� �ڿ� ����
//	}
//
//	void Use() {};
//};
//
//int main()
//{
//	CFile fileObj("./test.txt");
//	// ���α׷��� ����Ǹ鼭(��ü�� ����� ��) ����	��ü �Ҹ��� ȣ��
//}


