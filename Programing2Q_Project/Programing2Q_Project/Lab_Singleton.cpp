#include <iostream>
using namespace std;

class Singleton {
private:
	// ������ private ��ȣ
	Singleton() { cout << "�̱��� ��ü ����" << endl; 	}
	
	// ���� ����
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:
	// instance�� ���� ������ �δ� ��� �����Ϸ��� ��ü�� �Ҹ��� �����ϱ� ������ public���� �δ� ���� �Ϲ���
	// instacne�� ���� ���� �����̱� ������ �ܺο��� delete�� ȣ���� �� ����, ���α׷� ���� �� �����Ϸ��� �Ҹ��Ŵ
	// private���� �δ� ��� �Ϻ� �����Ϸ����� ���� �߻� ���ɼ� ����
	// �ܺο��� �Ҹ��� ȣ��� �Ҹ��ڴ� ȣ������� instacne�� ������ �����Ѵ�. (�ܺο��� ȣ������ �ʵ��� �ؾ���)
	~Singleton() { cout << "�̱��� ��ü �Ҹ�"; }

	// instance ��ȯ
	// C++ 11���� ���� ���� ������ thread safe�� �����
	// ������ C++ 11 ���ĺ��ʹ� ���� ���� ������ �δ� ���� �Ϲ���
	// ���� static Singleton instance�� ��� ������ �δ� ���? -> Race condition
	// ��Ƽ������ ȯ�濡�� ���� ��� ������ thread safe�� ������� �ʾ� ��ü�� ������ ������ ������ ����
	static Singleton& GetInstance() {
		static Singleton instance;	
		return instance;
	}

	void DoSomething() { cout << "DoSometing..." << endl; }
};

int main() {
	// Singleton s1;     // error ������ �ܺ� ���� x

	Singleton& s1 = Singleton::GetInstance();
	s1.DoSomething();
	
	// Singleton s2 = s; // error ���� ������ ��� �Ұ�
	Singleton& s2 = Singleton::GetInstance();
	s2.DoSomething();

	return 0;
}