////��� ���������� ���� ������
//
////- �ڽ� Ŭ�������� ���� �����ڸ� �����ε� �ϴ� ���, 
////  �θ� Ŭ������ ���� �����ڸ� ����� ���� ������ �θ� Ŭ������ ���� �����ڴ� ȣ���� ���� �ʴ´�.
////- ����, ����Ʈ ���� �������� ���, 
////  �θ� Ŭ������ ���� �����ڱ��� ȣ���� �־�� ���簡 ����� �̷���� �� �����Ƿ� ���� ***
//
//#include <iostream>
//using namespace std;
//
//class Parent
//{
//private:
//    int n1, n2;
//
//public:
//    Parent(int n1 = 0, int n2 = 0) : n1(n1), n2(n2) {}
//    void ShowData()
//    {
//        cout << n1 << " / " << n2 << endl;
//    }
//    Parent& operator=(const Parent& ref)
//    {
//        cout << "Parent operator=()" << endl;
//        this->n1 = ref.n1;
//        this->n2 = ref.n2;
//        return *this;
//    }
//};
//
//class Child : public Parent
//{
//private:
//    int n1, n2;
//
//public:
//    Child(int n1, int n2, int n3, int n4) : Parent(n1, n2), n1(n3), n2(n4) {}
//    void ShowData()
//    {
//        Parent::ShowData();
//        cout << n1 << " / " << n2 << endl;
//    }
//    Child& operator=(const Child& ref)
//    {
//        cout << "Child operator=()" << endl;
//
//        Parent::operator=(ref);         //�θ� Ŭ���� ���� ������ ȣ���ؾ� �Ѵ�. ***
//
//        this->n1 = ref.n1;
//        this->n2 = ref.n2;
//        return *this;
//    }
//};
//
//void main()
//{
//    Child c1(1, 2, 3, 4);
//    Child c2(0, 0, 0, 0);
//    c2 = c1;
//    c2.ShowData();
//
//    //���
//    //Child operator=()
//    //Parent operator=()
//    //1 / 2
//    //3 / 4
//}