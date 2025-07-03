////템플릿 템플릿 파라미터 -----------------------------------------------
////		템플릿 파라미터로 템플릿을 사용하는 것
////		template<..., template<TemplateTypeParams> class ParameterName, ...>
//
////템플릿 파라미터 
////          type 템플릿 파라미터 : <typename T> 또는 <class T>
////      non-type 템플릿 파라미터 : <int num>
////      template 템플릿 파라미터 : <template<typename T> class Class>
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
//// 템플릿 메타(tmp) 프로그래밍에서 템플릿을 템플릿 파라미터로 전달하는 경우
//template <typename T, template <typename T> typename Class >   // template 템플릿 파라미터
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
//    //ClassA        //클래스 템플릿을 인수로 전달
//    //ClassA<int>   //템플릿 클래스를 인수로 전달
//}