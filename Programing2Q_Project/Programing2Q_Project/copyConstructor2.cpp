//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//	// ��ü �ȿ� �����Ͱ� ������
//	// ���� �����ڷ� ���� ��ü���� �����Ͱ� ���� �޸𸮸� ����Ű�� �ʵ��� ���� ���縦 �����Ѵ�
//	char* name;			
//
//public:
//	Person() {};
//	Person(const char* str) {
//		name = new char[strlen(str) + 1];
//		strcpy_s(name, strlen(str) + 1, str);
//	}
//
//	~Person() { delete[] name; }
//
//	// ���� ������
//	Person(const Person& p) {
//		name = new char[strlen(p.name) + 1];
//		strcpy_s(name, strlen(p.name) + 1, p.name);
//	}
//
//	// ���� ���� ������
//	Person& operator=(const Person& p)
//	{
//		if (this != &p) {
//			delete[] name;
//			name = new char[strlen(p.name) + 1];
//			strcpy_s(name, strlen(p.name) + 1, p.name);
//		}
//		return *this;
//	}
//
//	// �̵� ������ -> �ּ� ġȯ
//	Person(Person&& other) noexcept
//	{
//		name = other.name;    // ���� ����    
//		other.name = nullptr;
//	}
//
//	// �̵� ���� ������
//	Person operator=(Person&& other) noexcept 
//	{
//		if (this != &other) {
//			delete[] name;
//			name = other.name;    // ���� ����
//			other.name = nullptr;
//		}
//		return *this;
//	}
//
//
//	void show() const { cout << name << endl; }
//
//	void setname(const char* newname) {
//		delete[] name;
//		name = new char[strlen(newname) + 1];
//		strcpy_s(name, strlen(newname) + 1, newname);
//	}
//};
//
//int main() 
//{
//	Person p1("kim");
//	p1.show();
//
//	// ���� ����
//	Person p2 = p1;
//	p2.show();
//
//	// ���� ����
//	p2.setname("yang");
//	p1 = p2;
//	p1.show();
//	p2.show();
//
//	// �̵� ����
//	Person p3(move(p1));
//	Person p4(Person());
//}