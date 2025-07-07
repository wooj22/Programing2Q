//// C++ ���� �ڿ��� �����ϴ� ���
//
//// RAII ���� 
////      Resource Acquisition Is Initialization  
////      �ڿ��� ȹ���� �ʱ�ȭ�� 
////      ���ÿ� �Ҵ�� �޸𸮴� �ڵ����� �����Ǵ� ���� �̿��� ������ ���� - �ڿ� ������ �����ϰ�
//
//// ����Ʈ ������(smart pointer)
////    ������ '��ü' �� ���� �ڽ��� �Ҹ� �� �� �ڽ��� ����Ű�� �ִ� �����͵� ���� delete �ϰ�
////    �Ҹ��ڵ� �ȿ� �� ����� �ڿ��� �����ϴ� ��ƾ
//
//
///* unique_ptr ���� : Ư�� ��ü�� ������ �������� �ο��ϴ� ������ ��ü */
//#include <iostream>
//#include <memory>
//
//// RAII ������ �ڿ� class - heep ��ü
//class A
//{
//    int* data;
//public:
//    A() {
//        std::cout << "�ڿ� ȹ����!" << std::endl;
//        data = new int[100];
//    }
//    ~A() {
//        std::cout << "�ڿ� ������!" << std::endl;
//        delete[] data;
//    }
//    void some() { std::cout << "�Ϲ� �����Ϳ� �����ϰ� ��밡��!" << std::endl; }
//};
//
//// A �ڷ����� ���� ����Ʈ ������ class - stack ��ü
//class A_SPtr       
//{
//    A* data;
//public:
//    A_SPtr(A* d) : data(d) {}
//    ~A_SPtr() { delete data; }
//
//    A& operator*() const { return *data; }
//    A* operator->() const { return data; }
//};
//
//// T �ڷ����� ���� ����Ʈ ������ class - stack ��ü
//template<typename T>
//class SPtr
//{
//    T* data;
//public:
//    SPtr(T* d) : data(d) {}
//    ~SPtr() { delete data; }
//    SPtr(const SPtr& d) = delete;
//
//    T& operator*() const { return *data; }
//    T* operator->() const { return data; }
//};
//
//int main() { 
//    A* a = new A();
//    delete a;
//
//    // 1) A_SPtr
//    A_SPtr sp = new A();
//    sp->some();
//    // delete x
//
//    // 2) SPtr
//    SPtr<A> sptr = new A();
//    sptr->some();
//    // delete x
//
//    // 3) unique_ptr
//    std::unique_ptr<A> pa = std::make_unique<A>();
//    pa->some();
//    // delete x
//
//    // A�� heep��ü�� �����Ǿ��� ������ �Ҹ��� �ڵ� ȣ�� x
//    // A_Stpr, Stpr, unique_ptr�� ���� ��ü�� �����Ǿ��� ������ �Ҹ��� �ڵ� ȣ�� ��
//}
