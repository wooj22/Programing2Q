//// STL Templete ���� 
//
//#include <algorithm>
//#include <functional>
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//// int[] array ����ϴ� �Լ�
//void printArrInt(int* begin, int* end) {
//    while (begin != end) {
//        std::cout << *begin << " ";
//        begin++;
//    }
//    std::cout << std::endl;
//}
//
//// ���� �ڷ����� ��� ����� �� �ִ� ���ø� �Լ�
//template <typename T>
//void printArray(T begin, T end) {
//    while (begin != end) {
//        std::cout << *begin << " ";
//        begin++;
//    }
//    std::cout << std::endl;
//}
//
//// vector ����ϴ� ���ø��� ����� ����.
//template <typename T>
//void printVector(T begin, T end) {
//    while (begin != end) {
//        std::cout << *begin << " ";
//        begin++;
//    }
//    std::cout << std::endl;
//}
//
//// vector �ȿ� s �� �ִ��� �������� �����Ѵ�.
//template <typename T, typename U>
//bool isValue(T begin, T end, const U n) {
//    while (begin != end) {
//        if (*begin == n) return true;
//        begin++;
//    }
//    return false;
//}
//
//// vector �ȿ� ���� ������� �߰��϶�. ***
//template <typename T>
//void insertVector(vector<T>& v, const T n)
//{
//    auto it = v.begin();
//    for (; it != v.end(); it++) {
//        if (n <= *it) {
//            v.insert(it, n);
//            return;
//        }
//    }
//    v.insert(it, n);
//}
//
//int main()
//{
//    // �迭 ����ϴ� ���ø��� ����� ����.
//    int arr1[] = { 1,2,3,4,5,6 };
//    printArrInt(arr1, arr1 + 6);
//
//    double arr2[] = { 1,2,3,4,5,6 };
//    printArray(arr2, arr2 + 6);
//
//    // vector ����ϴ� ���ø��� ����� ����.
//    vector<int> v = { 1,2,3,4,5,6 };
//    printVector(v.begin(), v.end());
//
//    // vector �ȿ� s �� �ִ��� �������� �����Ѵ�.
//    cout << isValue(v.begin(), v.end(), 13) << endl;
//
//    // vector �ȿ� ���� ������� �߰��϶�.
//    vector<int> v2;
//    //v2.insert(v2.begin(), 2);
//    //v2.insert(v2.begin(), 3);
//
//    insertVector(v2, 3);
//    insertVector(v2, 1);
//    insertVector(v2, 4);
//    insertVector(v2, 2);
//    printVector(v2.begin(), v2.end());
//}
//
