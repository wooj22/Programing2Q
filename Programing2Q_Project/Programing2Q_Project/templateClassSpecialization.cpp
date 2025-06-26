//#include <iostream>
//using namespace std;
//
//// 템플릿 클래스
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
//// 템플릿 클래스 특수화
//// const char* 타입 매개변수의 CTest클래스에 대해서는 아래의 코드를 생성한다.
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
