//// STL �ݺ��� (STL iterator) ����ϱ�
//// �����̳ʸ� �ϰ��� �ְ� �����ϱ� ���� ���
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void main()
//{
//    vector<int> v = { 1,2,3 };      // �����̳�
//    vector<int>::iterator  iter;    // �ݺ��� // �����̳� �����ϴ� ������, ��ġ
//
//    iter = v.begin();               // ��ȯ���� vector<int>::iterator
//    cout << "ù ��° ��� : " << *iter << endl;
//
//    // iterator ������ ������ 
//    *iter = 5;
//    cout << "ù ��° ����� �� : " << *iter << endl;
//    cout << "ù ��° ����� �� : " << v[0] << endl;
//
//    *iter++;                        // ������ ���� ���� -> ���� ���Ҹ� ����Ŵ
//    cout << "ù ��° ����� ���� ��� : " << *iter << endl;
//
//    // �ݺ��ڸ� �̿��Ͽ� ������ ��� ����ϱ�
//    for (iter = v.begin(); iter != v.end(); iter++)
//        cout << "   " << *iter;
//    cout << "\n";
//
//    //v.end();
//    //      v.end() �� �� �� ��Ҹ� ����Ű�� ���� �ƴϴ�. ***
//    //      (���ڿ��� null �� ���� '��'�� �ǹ�)
//
//
//    // ��°���?
//    vector<char> chars = { 'A', 'B', 'C' };
//    auto itr = chars.begin(); 
//    itr++; itr++;
//    cout << *itr << endl;
//}
//
//
