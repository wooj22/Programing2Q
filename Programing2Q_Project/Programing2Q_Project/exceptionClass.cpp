//#include <iostream>
//using namespace std;
//
//// 예외 목록 정의
//class MyError
//{
//private:
//	string message;
//public:
//	MyError(string msg) : message(msg) {};
//	void Print() { cout << "예외 발생 : " << message << endl; }
//};
//
//int main()
//{
//	try 
//	{
//		throw MyError("예외 내용~~");
//	}
//	catch (MyError ex)
//	{
//		ex.Print();
//	}
//}