//// ������ �����ε��� ����� �Ǵ°�? => �ȴ�.
//
//#include <iostream>
//using namespace std;
//
//class CMyData
//{
//private:
//	int m_nData = 0;
//public:
//	CMyData(int nParam) : m_nData(nParam) {}
//
//	// ������ �����ε�
//	CMyData operator + (const CMyData& rhs)  
//	{
//		return CMyData(m_nData + rhs.m_nData);
//	}
//};
//
//class CMyDataEx : public CMyData
//{
//public:
//	CMyDataEx(int nParam) : CMyData(nParam) {}
//};
//
//int main(int argc, const char* argv[])
//{
//	CMyData a(3), b(4);
//	CMyData	c = a + b;
//
//	CMyDataEx d(3), e(4);
//	CMyData	f = d + e;
//
//	return 0;
//}
//
//
//
//
