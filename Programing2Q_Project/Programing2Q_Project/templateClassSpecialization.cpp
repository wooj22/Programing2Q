//#include <iostream>
//using namespace std;
//
//// ���ø� Ŭ����
//template <typename T>
//class CTest			// CTest<T>
//{
//private:
//	T ndata;
//
//public:
//	CTest(T param) : ndata(param) {}
//	~CTest() {}
//
//	void SetData(T val) { ndata = val; };
//	T GetData() { return ndata; };
//};
//
//// ���ø� Ŭ���� Ư��ȭ
//// const char* Ÿ�� �Ű������� CTestŬ������ ���ؼ��� �Ʒ��� �ڵ带 �����Ѵ�.
//template <> 
//class CTest<const char*>		
//{
//private:
//	char* m_data;
//
//public:
//	CTest(const char* param) {
//		m_data = new char[strlen(param) + 1];
//		strcpy_s(m_data, strlen(param) + 1, param);
//		//
//	}
//	~CTest() { delete[] m_data; }
//
//	char* GetData() const {
//		return m_data;
//	};
//};
//
//int main(void)
//{
//	CTest<const char*> a("hello");
//
//	cout << a.GetData() << endl;
//
//	return 0;
//}
