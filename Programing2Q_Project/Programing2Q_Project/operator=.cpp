//// =	// 대입연산자 정의하기  // 복사 대입 연산자 (복사 생성자를 참고하세요)
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
//	//변환 생성자
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
//	// = 대입연산자
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
//	// = 연산자 정의 없이도 실행됨 이유는? 
//	// 생성자처럼 자동으로 생성되는 '특수 맴버함수'
//	a = b;		  
//
//	// 연산을 수행하면 이름 없는 임시 객체가 만들어지며 a에 대입하는 것은 이 임시객체다.
//	//a.operator=(b.operator+(c));
//	a = b + c;	
//
//	// 중첩 대입이 가능하게 하기 위해 참조로 반환한다(L value).
//	(a = b) = c;
//
//	return 0;
//}
