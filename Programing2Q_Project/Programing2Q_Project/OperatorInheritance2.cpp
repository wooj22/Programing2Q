//// 연산자 오버로딩과 상속
//// 대입연산자 함수를 제외한 나머지 연산자는 상속된다
//
//#include <iostream>
//using namespace std;
//
//class CMyData
//{
//private:
//	int m_nData = 0;
//public:
//	CMyData(int nParam) :m_nData(nParam) {}
//
//	CMyData operator + (const CMyData& rhs)  //연산자 오버로딩
//	{
//		return CMyData(m_nData + rhs.m_nData);
//	}
//
//	CMyData& operator = (const CMyData& rhs)
//	{
//		m_nData = rhs.m_nData;	return *this;
//	}
//
//	operator int() { return m_nData; }
//};
//
//class CMyDataEx : public CMyData
//{
//public:
//	CMyDataEx(int nParam) : CMyData(nParam) {}
//
//	//인터페이스를 맞춰주기 위한 연산자 오버로딩.
//	using CMyData::operator+;
//	using CMyData::operator=;
//};
//
//int main(int argc, const char* argv[])
//{
//	CMyData a(3), b(4);
//	cout << a + b << endl;
//
//	CMyDataEx c(3), d(4), e(0);
//	e = c + d;
//	cout << e << endl;
//	return 0;
//}