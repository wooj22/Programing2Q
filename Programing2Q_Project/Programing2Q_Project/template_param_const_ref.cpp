//// �Լ� ���ø��� ������(reference) �Ķ���ͷ� '���ڿ�'�� �����ϴ� ���. Ÿ�� ����
//// ���ڿ� ���ͷ��� ���̿� ���� ���� �ٸ� �迭������ ���ǵ�
//#include <iostream>
//
//template <typename T>
//inline T const& max(T const& a, T const& b) //������ �Ķ����
//{
//    return  a < b ? b : a;
//}
//
//// ���� �Ʒ� main �ڵ��� �ּ��� �ڵ带 �����Ϸ��� ���ø� �Ű������� 2�� ����ؾ���
////template <typename T, typename TT>
////inline T const& max(T const& a, TT const& b)
////{
////    return  a < b ? b : a;
////}
//
//int main()
//{
//    std::string s = "apple";
//    max("apple", "peach");      // ���� Ÿ�� char const [6]
//	//max("apple", "tomato");   // ERROR: �ٸ� Ÿ�� char const [6], char const [7]
//    //max("apple", s);          // ERROR: �ٸ� Ÿ��
//}