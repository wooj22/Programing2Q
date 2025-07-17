//prev_permutation() / next_permutation() : ���� / ���� ���� ���ϱ� -------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // 1���� 4���� ������ ���� ����
    // �迭�� ����!
    vector<int> v(4);

    // 1���� 4���� ���Ϳ� ����
    for (int i = 0; i < 4; i++) { v[i] = i + 1; }

    // next_permutation�� ���ؼ� ���� ���� ���ϱ�
    do {
        for (int i = 0; i < 4; i++) { cout << v[i] << " "; }
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));

    return 0;

}

/*
    vector<int> v;
    v.sort(v.begin(), v.end());

    do {

    } while (next_permutation(v.begin(), v.end()));

    //next_permutation�� ����Ѵٸ� less��
    //prev_permutation�� ����Ѵٸ� greater�� ���� �� ����ؾ� ��� ����� ���� ���� �� �� �ִ�.
*/


