//// �Լ� ���ø��� static ������ ���ø� �Լ� ���� �������̴�
//// Ŭ���� ���ø��� static ������ ���ø� Ŭ���� ���� �������̴�
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class CStaticMember
//{
//private:
//	static T mem;		// CStaticMember<T>::mem
//
//public:
//	void Add(int num) { mem += num; }
//	void Show() { cout << mem << endl; }
//};
//
//// static member init
//template <typename T>
//T CStaticMember<T>::mem = 0;		
//
//// static ��� Ư��ȭ
//template<>						
//long CStaticMember<long>::mem = 5;	
//
//int main(void)
//{
//	// 1) CStaticMember<int>::mem
//	CStaticMember<int> obj1;
//	CStaticMember<int> obj2;
//	obj1.Add(2);
//	obj2.Add(3);
//	obj1.Show();
//
//	// 2) CStaticMember<long>::mem
//	// <Long> Ÿ���� Ư��ȭ �Ǿ� �����Ƿ� mem�� 5�� �ʱ�ȭ��
//	CStaticMember<long> obj3;
//	CStaticMember<long> obj4;
//	obj3.Add(100);
//	obj4.Show();
//
//	return 0;
//}
