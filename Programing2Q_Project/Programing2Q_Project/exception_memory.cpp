//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 예외 클래스 bad_alloc
//	{
//		int num = 0;
//
//		try
//		{
//			while (true)
//			{
//				num++;
//				cout << num << "번째 할당" << endl;
//				new int[10000][10000];
//			}
//		}
//		catch (bad_alloc& bad)		
//		{
//			cout << bad.what() << endl;
//			cout << "더 이상 메모리 할당이 불가합니다." << endl;
//		}
//	}
//
//	// 예외 발생하지 말고 null처리
//	int* ptr = new(nothrow) int;
//	if (ptr == nullptr)
//		cout << "메모리 할당 실패";
//}