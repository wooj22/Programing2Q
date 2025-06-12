////��ø Ŭ����
////      Ŭ������ �ٸ� Ŭ������ ���� ������ ����� �� �ִ�
////      ��ø Ŭ������ '�ٱ��� Ŭ����'�� ���� ���� �ִ� ������ ���ֵǸ�, �ش� ���� ������ ����� �� �ִ�.
//
////����
//https://learn.microsoft.com/ko-kr/cpp/cpp/nested-class-declarations?view=msvc-170
//
//#include <iostream>
//using namespace std;
//
//class BufferedIO
//{
//public:
//    enum IOError { None, Access, General };
//
//    // Declare nested class BufferedInput.
//    class BufferedInput
//    {
//    public:
//        int read() { return(1); }
//        int good() { return _inputerror == None; }
//    private:
//        IOError _inputerror;
//    };
//
//    // Declare nested class BufferedOutput.
//    class BufferedOutput
//    {
//    };
//
//    // BufferedIO �������� ��밡��
//};
//
//int main()
//{
//}
//
//
////��ø Ŭ������ ��� �Լ� ------------------------------------------------------------
//// 
////    ��ø Ŭ�������� ����� ��� �Լ��� '���� ����'���� ���ǵ� �� �ֽ��ϴ�.
////    ���� ������ ������ ���� �ۼ��� ���� �ֽ��ϴ�.
//
//// member_functions_in_nested_classes.cpp
//class BufferedIO
//{
//public:
//    enum IOError { None, Access, General };
//
//    class BufferedInput
//    {
//    public:
//        int read();     // Declare but do not define member
//        int good();     // functions read and good.
//    private:
//        IOError _inputerror;
//    };
//
//    class BufferedOutput
//    {
//        // Member list.
//    };
//};
//
//// Define member functions read and good in file scope. //���ϳ����� ���ǰ���
//int BufferedIO::BufferedInput::read() { return(1); }
//int BufferedIO::BufferedInput::good() { return _inputerror == None; }
//
///*
////�ٿ� ���� // typedef
//
//typedef BufferedIO::BufferedInput BIO_INPUT;
//int BIO_INPUT::read()
//
//*/
//int main()
//{
//}
//
//
////----------------------------------------------------------------------
////��ø Ŭ������ ����� typedef
//class C
//{
//public:
//    typedef class U u_t;    // class U visible outside class C scope //������ ������ ���� ����
//    typedef class V {} v_t; // class V not visible outside class C
//};
//
//int main()
//{
//    // okay, forward declaration used above so file scope is used //���ٵ� //���� ���� ***
//    U* pu;
//
//    // error, type name only exists in class C scope
//    u_t* pu2;       // C2065
//
//    // error, class defined above so class C scope
//    V* pv;          // C2065
//
//    // okay, fully qualified name               //����� ����
//    C::V* pv2;
//}
//
//
////----------------------------------------------------------------------
////��ø Ŭ������ ����� friend �Լ��� 
////    �ٱ��� Ŭ������ �ƴ� ��ø Ŭ���� ������ �ִٰ� ���ֵ˴ϴ�.
////    ���� ���� Ŭ���� friend �Լ��� 
////    �ٱ��� Ŭ������ ��� �Ǵ� ��� �Լ��� ���� Ư���� �׼��� ������ �����ϴ�.
//
//#include <iostream>
//using namespace std;
//
//class outer
//{
//    int n = 0;
//    class inner						//enclose ���ο��� ����ϰڴ�.
//    {
//        int m = 0;
//        void func(outer o) { cout << o.n; }
//        friend void ffunc(outer o) { cout << o.n; } //error
//    };
//};
//
//int main() {
//}
