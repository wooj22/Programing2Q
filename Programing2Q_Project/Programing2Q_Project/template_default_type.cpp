// ���ø� �Ű������� ����Ʈ ��
// Ÿ�� �Ű������� �����̱� ������ ����Ʈ �� ������ �����ϴ�.
//#include <iostream>
//using namespace std;
//
//template <typename T = int>		// ����Ʈ ���ø� �μ� int
//class MyClass
//{
//	T data;
//public:
//	MyClass(T a) : data(a) {}
//	void Prn() { cout << data << endl; }
//};
//
//int main()
//{
//	//MyClass obj1(1.5);		// �μ��߷�, C++17(�� �ƴ�..
//	MyClass<> obj2(1.5);		//<>	// ����Ʈ(�⺻��) ���
//	obj2.Prn();
//}


// ���ø�[template] �Ű������� ����Ʈ �� ���ø� �Ű������� �ʱ�ȭ�ϱ�
//#include <iostream>
//#include <string>
//
//template <typename T>
//struct Compare {
//	bool operator()(const T& a, const T& b) const { return a < b; }
//};
//
//// typename Comp = Compare<T>
//// Comp �ڷ����� T�� �Է¹��� ���ø� �Ű����� T�� ���� Compare<T>�ڷ������� �����ȴ�.
//template <typename T, typename Comp = Compare<T>>  
//T Min(T a, T b) {
//	Comp comp;				// ���� ��, Comp ��� ��ü�� �̸� ���� 
//	if (comp(a, b)) {
//		return a;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 3, b = 5;
//	std::cout << "Min " << a << " , " << b << " :: " << Min(a, b) << std::endl;
//
//	//Min(a, b)�� ���� �ν��Ͻ�ȭ�Ǵ� ���ø� Ŭ������ �ۼ��غ�����.
//
//	std::string s1 = "abc", s2 = "def";
//	std::cout << "Min " << s1 << " , " << s2 << " :: "
//		<< Min(s1, s2) << std::endl;
//}
//
//

