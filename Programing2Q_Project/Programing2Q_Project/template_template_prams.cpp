////���ø� ���ø� �Ķ���� -----------------------------------------------
////		���ø� �Ķ���ͷ� ���ø��� ����ϴ� ��
////		template<..., template<TemplateTypeParams> class ParameterName, ...>
//
////���ø� �Ķ���� 
////          type ���ø� �Ķ���� : <typename T> �Ǵ� <class T>
////      non-type ���ø� �Ķ���� : <int num>
////      template ���ø� �Ķ���� : <template<typename T> class Class>
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class ClassA
//{
//public:
//    void Show() { cout << "ClassA::Show" << endl; }
//};
//
//// ���ø� ��Ÿ(tmp) ���α׷��ֿ��� ���ø��� ���ø� �Ķ���ͷ� �����ϴ� ���
//template <typename T, template <typename T> typename Class >   // template ���ø� �Ķ����
//class ClassB
//{
//private:
//    Class<T> m_obj;
//public:
//    void Show() { cout << "ClassB::Show" << endl; m_obj.Show(); }
//};
//
//int main()
//{
//    ClassB<int, ClassA> obj; obj.Show();
//
//    //ClassA        //Ŭ���� ���ø��� �μ��� ����
//    //ClassA<int>   //���ø� Ŭ������ �μ��� ����
//}