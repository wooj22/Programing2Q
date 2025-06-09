//// ������ ���� (Delegating constructors)
////      ���� Ŭ���� ������ �����ڰ� �ٸ� �����ڸ� ȣ���ϴ� ��
////      Ư�� ����� �پ��� ������ �ʱ�ȭ �ϰ� ���� �� ���
//
//#include <iostream>
//using namespace std;
//
//class Student
//{
//private:
//    int m_id;
//    string m_name;
//
//public:
//    Student(const string& name_in)
//        : Student(0, name_in)           // ���� ������
//    {
//    }
//
//    Student(const int& id_in, const string& name_in)
//        : m_id(id_in), m_name(name_in)
//    {
//    }
//};
//
//// init ��� �Լ�
////      ��� ������� �� �� �ʱ�ȭ ���ִ� ��� �Լ��� ����� 
////      �����ڸ��� �̸� ���� �ٸ��� ȣ���ϴ� ���
//
//class Student
//{
//private:
//    int m_id;
//    string m_name;
//
//public:
//    Student(const string& name_in)
//        // : Student(0, name_in)
//    {
//        init(0, name_in);
//    }
//
//    Student(const int& id_in, const string& name_in)
//        // : m_id(id_in), m_name(name_in)
//    {
//        init(id_in, name_in);
//    }
//
//    void init(const int& id_in, const string& name_in))
//    {
//        m_id = id_in;
//        m_name = name_in;
//    }
//};
//
////Init() �Լ��� ��� ������ ���� �Ҵ��� ���̴�. 
////�� ������δ� 
////const �Ǵ� reference ������ ���� �ʱⰪ�� �ʿ��� ����� �ʱ�ȭ�� �� ����.