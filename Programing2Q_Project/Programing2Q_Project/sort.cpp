//// STL �˰��� (STL algorithm) ����ϱ�
////      ����Ÿ�� �������� ������� �����ϱ�
////      Ex) find, sort, for_each ... 
//
//// sort �Լ�
////  sort(start, end);         //��������
////  sort(start, end, Fr);     //�������� + �������(�Լ�)
//
//#include <vector>
//#include <algorithm>        // algorithm �� ���� ���̺귯��
//#include <functional>       // functor(�Լ���ü)�� ���� ���̺귯�� - greater<int>()
//#include <iostream>
//using namespace std;
//
//void main()
//{
//    vector<int>  v(8);
//    vector<int>::iterator start, end, iter;
//    for (int i = 0; i < v.size(); i++) v[i] = i + 1;
//
//    start = v.begin();
//    end = v.end();
//
//    // �������� ����
//    sort(start, end);                       //sort //algorithm
//
//    for (iter = v.begin(); iter != v.end(); iter++)
//        cout << *iter << " ";
//    cout << "\n";
//
//
//    // �������� ����
//    sort(start, end, greater<int>());       //sort //functor ���
//
//    for (iter = v.begin(); iter != v.end(); iter++)
//        cout << *iter << " ";
//    cout << "\n";
//}