//�ٸ� Ŭ������ Ŭ������ �ɹ��� ����ϴ� ���
//��ø Ŭ���� (Nested Class) �Ǵ� ���� Ŭ���� (Inner Class)
// 
//		Ŭ���� ���ο� �� �ٸ� Ŭ������ ���� �� �ִ�
//		�������� ĸ��ȭ(Encapsulation)�� ���� ����(Information Hiding)�� ���ؼ� ���

//------------------------------------------------------------------------------
//#include <iostream>
//using namespace std;
//
//struct enclose
//{
//	struct inner						//enclose ���ο��� ����ϰڴ�.
//	{
//		static int ivalue;
//		void func(int value) {}
//	};
//};

//------------------------------- 
//struct enclose
//{
//	struct inner {
//		static int ivalue;
//		void func(int value);
//	};
//};
//
//// ���� ����ȭ�� �̸��� ����ؾ� �Ѵ�.
//int enclose::inner::ivalue = 1;				// ���� Ŭ������ ����� �ʱ�ȭ.
//void enclose::inner::func(int value) {}	// ���� Ŭ������ �Լ��� ����.

//------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class Outter
//{
//private:
//	int n = 0;
//
//public:
//	class Nested	// �ɹ� Ŭ����							
//	{
//	public:
//		void Func() { Outter a;  cout << a.n << endl; }
//	};
//};

//------------------------------------------------------------------------------

//#include <iostream>
//using namespace std;
//
//class Outter {
//private:
//public:
//	class Nested {
//	private:
//		string name;
//	public:
//		Nested(string nameValue) : name(nameValue) {}
//		void Display() const {
//			cout << name.c_str() << endl;
//		}
//	};
//};
//
//int main(void)
//{
//	Outter out;					// Outter ��ü ����
//
//	Outter::Nested n("abc");	// Nested ��ü ����
//	n.Display();
//
//	return 0;
//}

//--------------------------------------------------------------------
//#include <iostream>
//#include <string>
//
//class Outter
//{
//private:
//	class Nested		// private �̶��
//	{
//	private:
//		std::string name;
//
//	public:
//		Nested(std::string nameValue) : name(nameValue) { }
//		void Display() const {
//			std::cout << "���� Ŭ������ " << name.c_str() << std::endl;
//		}
//	};
//
//public:
//	// ���� �Լ��� ���� Ŭ������ ��ü�� �����Ͽ� ��ȯ�մϴ�.
//	static Nested func(std::string name) {
//		return Nested{ name };
//	}
//};
//
////// �� Ŭ�������� Display() �Լ��� ȣ���� ���ô� ----------------
//int main()
//{
//	// Display() �Լ� ȣ���Ϸ��� ��ü ���� �ʿ�. �׷��� private
//
//	// func ��ȯ ��ü�� �ν��Ͻ��� �����غ���.		
//	//Outter::Nested anotherClass() = Outter::func("��ü ����");		// ERROR 
//	// Nested Ŭ������ Outter Ŭ���� �� private�� ����Ǿ� �ֽ��ϴ�. 
//	// ���� Ÿ���� �����ϴ� ���� ������ �ʽ��ϴ�.
//
//
//	//�ذ�å 1
//	// func() �Լ��� public���� ����Ǿ� �־� ������ �����մϴ�.
//	// ���� ��ȯ ���� ��ü�κ��� Display() �Լ��� ȣ���� �� �ֽ��ϴ�. // ������ ������ ��Ģ�� ����Ƿ� ����.
//	Outter::func("ȣ�� ���").Display();
//
//	//�ذ�å 2
//	// Ŭ������ ��Ģ������ private�� ����Ǿ� �־� �ܺηκ��� ������ �Ұ����մϴ�.	 
//	// �׷��� Ÿ���� auto�� ����Ѵٸ�, 
//	// ���� Ŭ������ �ƴ� �� �ٸ� Ŭ������ �νĵǱ� ������ ����� �����մϴ�.
//	auto anotherClass = Outter::func("���� ���");
//	anotherClass.Display();
//
//}