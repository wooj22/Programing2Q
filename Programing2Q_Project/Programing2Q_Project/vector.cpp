//// STL �����̳� (STL Container) ����ϱ�
//// STL �ݺ��� (STL iterator) ����ϱ�
//// STL �˰��� (STL algorithm) ����ϱ�
//
//// ��ǥ���� �����̳� vector<T>
//// �����̳�, ����Ÿ�� ��Ƽ� ó���ϴ� ��� vector, list, map, set
//
//#include <vector>
//#include <iostream>
//using namespace std;
//
//void main()
//{
//    vector<int> v0;         //int�� ���� ����    //int �����迭 - �߰�,����
//
//    v0.push_back(1);        //�߰�
//    v0.push_back(2);        //�߰�
//    v0.pop_back();          //����
//
//    // ������ ũ�� 
//    cout << "������ ũ�� : " << v0.size() << endl;
//
//    // �迭ó�� ���� ����
//    cout << v0[0] << endl;
//
//
//    // �پ��� �ʱ�ȭ
//    vector<int> v1(3);              //int�� ���� ���� �� ũ�⸦ 3�� �Ҵ� (��� ���Ϳ�� 0���� �ʱ�ȭ) 
//    vector<int> v2(5, 2);           //int�� ����, size 5,  2�� �ʱ�ȭ
//    vector<int> v3 = { 1, 2, 3 };   //int�� ���� ���� �� 1, 2, 3 ���� �ʱ�ȭ
//
//    // ���� ����ϱ�
//    for (int i = 0; i < v3.size(); i++)
//        cout << "  " << v3[i];
//    cout << endl;
//
//
//    // �빮�� A B C D  �� vector �����̳ʷ� ��� ������.----------
//    vector<string> strings = {"A","B","C","D"};
//    for (auto item : strings) {
//        cout << item << "  ";
//    }
//    cout << endl;
//}
//
