//// �޸� ����(memory leak)
////  : ���� �Ҵ� �� �޸𸮸� ������ �������� �ʰų�, ������ �� ���� ���¿� ������ ��
//
//// 1. ���� ����
//void func() {
//	int* ptr = new int(5);
//	// delete prt; ����		  -> �޸� ���� �߻�
//}
//
//// 2. new[] ���� �迭 �޸� �Ҵ� �� delete[]�� �ƴ� delete ���
//void func() {
//	int* arr = new int[10];
//	delete arr;			     // -> �޸� ���� �߻�
//	// delete[] arr;		 // �ùٸ� ���� ���
//}
//
//// 3. ���� �߻��� �޸� �����ڵ尡 ������� ����
//void func() {
//	int* ptr = new int(10);
//	// �� �������� ���ܰ� �߻��ߴٸ�? -> �޸� ���� �߻�
//	delete ptr;		// ���� �ڵ尡 ������ �̰��� �������� �ʾ� �޸� ���� �Ұ� 
//}
//
//// 4. �ߺ� �Ҵ�, �ּ� ���
//void func() {
//	int* ptr = new int(5);
//	ptr = new int(10);		 // -> �޸� ���� �߻�
//	delete ptr;				 // new int(5)��ŭ�� ������ �������� ����
//}
//
//// 5. �����̳ʿ� ����� ������ ���� ����
//#include <vector>
//std::vector<int*> vec;
//
//void func() {
//	vec.push_back(new int(1));
//	vec.push_back(new int(2));
//	// -> �̴�� ���α׷��� ����ȴٸ� �޸� ���� �߻�
//}
//
//// 6. �ߺ� ����
//class MyClass {
//	int* ptr;
//public:
//	MyClass() { ptr = new int(10); }
//	~MyClass() { delete ptr; }
//
//	// �⺻ ��������ڴ� ���� ���縸 ���� -> �����͸� ����
//	// �ߺ����� or ���� ���ɼ�
//	// MyClass(const MyClass& obj) { obj.prt = this.ptr;}
//};
//
//// 7. �ּ� ���
//MyClass* create() {
//	MyClass* obj = new MyClass();
//	//return obj;		// ������ �޸� ���� �߻�. �� �Լ��� ������ν� obj�� ������ �� ���� ����
//}
//
//// 8. �ּ� ���, ������ ���������� �Ǽ� (����)
//void complexFun(bool flag) {
//	int* ptr = new int(10);
//	if (flag) return;		// return�Ǹ� �޸� ���� �ȵǰ� ��������
//	delete ptr;
//}
