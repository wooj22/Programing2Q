//// const ��ü ������
//
//#include <iostream>
//using namespace std;
//
//class Coffee
//{
//public:
//	Coffee() { SugarCount = 0;	bTakeout = false; }
//
//	const int& GetSugarCount() { return SugarCount; }
//	void AddSugar() { SugarCount++; }
//	bool IsTakeout() const { return bTakeout; }
//
//private:
//	int SugarCount;
//	bool bTakeout;
//};
//
//int main(void)
//{
//	// 1. �����Ϳ� const�� �ٴ� ��� : ��� ��ü -> ����� ���� x
//	const Coffee* A = new Coffee();		// const * �� �����Ҵ�
//	Coffee const* A2 = new Coffee();	// same expression
//
//	// 2. ��ü ��� const�� �ٴ� ��� : ��� ���� x
//	Coffee* const B = new Coffee();
//
//	//�Ʒ��ڵ� �� ������ �߻��ϴ� ����?
//
//	A->AddSugar();						// error
//	B->AddSugar();						// success
//
//	A->IsTakeout();						// success
//	B->IsTakeout();						// success
//	B = new Coffee();					// error
//
//	A->GetSugarCount();					// error  // const function �ƴ�
//	B->GetSugarCount();
//
//	return 0;
//}