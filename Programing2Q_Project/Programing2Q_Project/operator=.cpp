//// =	// ���Կ����� �����ϱ�  // ���� ���� ������ (���� �����ڸ� �����ϼ���)
//
//#include <iostream>
//using namespace std;
//
//class CMyData
//{
//private:
//	int data = 0;
//
//public:
//
//	//��ȯ ������
//	CMyData(int nParam) : data(nParam) { cout << "CMyData(int)" << endl; }
//
//	// +
//	CMyData operator+(const CMyData& obj)
//	{
//		//cout << "operator+" << endl;
//		CMyData result(0);
//		result.data = this->data + obj.data;
//		return result;
//	}
//
//	// = ���Կ�����
//	CMyData& operator=(const CMyData& rhs)
//	{
//		cout << "operator=" << endl;
//		data = rhs.data;
//		return *this;
//	}
//};
//
//int main()
//{
//	CMyData a(0), b(3), c(4);
//
//	// = ������ ���� ���̵� ����� ������? 
//	// ������ó�� �ڵ����� �����Ǵ� 'Ư�� �ɹ��Լ�'
//	a = b;		  
//
//	// ������ �����ϸ� �̸� ���� �ӽ� ��ü�� ��������� a�� �����ϴ� ���� �� �ӽð�ü��.
//	//a.operator=(b.operator+(c));
//	a = b + c;	
//
//	// ��ø ������ �����ϰ� �ϱ� ���� ������ ��ȯ�Ѵ�(L value).
//	(a = b) = c;
//
//	return 0;
//}
