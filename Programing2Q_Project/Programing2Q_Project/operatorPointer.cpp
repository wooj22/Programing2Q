//// ������ �����ε� Ȱ�� 
////	* ������ ������ �����ε� 
//// ��ü�� ������ ó�� �ٷ�� ���� ����.
//
////#include <iostream>
////using namespace std;
////
////class IntPtr
////{
////private:
////	int* ptr;
////public:
////	IntPtr(int* ptr) : ptr(ptr) {}		// new �Ҵ�� ptr �� ����
////	~IntPtr() { delete ptr; }		    // �˾Ƽ� �ڵ����� �Ҹ� // RAII
////
////	// ������ ������ �����ε�
////	int& operator*() const { return *ptr; }
////	int* operator->() const { return ptr; }
////};
////
////int main()
////{
////	IntPtr sptr(new int(1));
////
////	cout << *sptr << endl;
////	*sptr = 10;
////	cout << *sptr << endl;
////
////	return 0;
////}
//
//
//// ����Ʈ ������
//// �˾Ƽ� �Ҹ�Ǵ� ���� ������
//
//#include <iostream>
//using namespace std;
//
//class Pos
//{
//private:
//	int xpos, ypos;
//
//public:
//	Pos(int x = 0, int y = 0) : xpos(x), ypos(y) { cout << "Pos ��ü ����" << endl; }
//	~Pos() { cout << "Pos ��ü �Ҹ�" << endl; }
//	void SetPos(int x, int y) { xpos = x; ypos = y; }
//
//	// �ܺ� �Լ� friend
//	friend ostream& operator<<(ostream& os, const Pos& pos)
//	{
//		os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//		return os;
//	}
//};
//
//class SmartPtr
//{
//private:
//	Pos* posptr;		// ���� ������
//
//public:
//	SmartPtr(Pos* ptr) : posptr(ptr) { }
//	~SmartPtr() { delete posptr; }
//
//	// ������ ������ �����ε�
//	Pos& operator*() const { return *posptr; } // ��ü ��ȯ
//	Pos* operator->() const { return posptr; } // raw ������ ��ȯ
//};
//
//int main()
//{
//	SmartPtr sp(new Pos(1, 2));
//	cout << *sp;
//
//	sp->SetPos(1, 2);
//	cout << *sp;
//}
