// private ������ 
// - �����ڰ� private�̶�� ���� �ܺο����� ��ü ������ ������� �ʰڴٴ� ���̴�.

//#include <iostream>
//using namespace std;
//
//class ClassA
//{
//private:
//	int num;
//	ClassA(int n) : num(n) {}					// private ������ 
//
//public:
//	ClassA() : num(0) {}						// public ������
//	//ClassA(int n) : num(n) {}					// 
//	void ShowNum() const { cout << num << endl; }
//
//	ClassA& CreateInitObj(int n) const 
//	{
//		ClassA* ptr = new ClassA(n);			// �����Ҵ�
//		return *ptr;
//	}
//
//};
//
//int main(void)
//{
//	ClassA base;								//public
//	//ClassA base(1);								//private �̹Ƿ� error
//
//	ClassA& obj1 = base.CreateInitObj(3);		//�Լ��� �̿��� ����, ��ü ������ �״�� ����.
//	obj1.ShowNum();
//
//	ClassA& obj2 = base.CreateInitObj(12);
//	obj2.ShowNum();
//
//	delete& obj1;								// �Լ����� �Ҵ�� ���� �����ؾ� �Ѵ�. 
//	delete& obj2;
//
//	return 0;
//}

//�̱��� ���� ��� Ȱ��. �̱��濡 ���� ������ ������. ***
//#include <iostream>
//
//class Singleton {
//private:
//	Singleton() { std::cout << "Singleton()" << std::endl; }
//	Singleton(const Singleton& ref) {}
//	Singleton& operator=(const Singleton& ref) {}
//	~Singleton() { std::cout << "~Singleton()" << std::endl; }
//public:
//	static Singleton& getInstance() {
//		static Singleton s;
//		return s;
//	}
//};
//
//int main(void) {
//	Singleton s;
//	{
//		Singleton& s = Singleton::getInstance();
//	}
//	{
//		Singleton& s = Singleton::getInstance();
//	}
//	return 0;
//	}


