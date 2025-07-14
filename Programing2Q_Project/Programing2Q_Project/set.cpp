//// std::set - key만 저장하는 균형 이진 트리
////  1. 크기가 가변적이다.
////  2. 기본적으로 하나의 데이터를 정렬해야 할 때 사용한다. -> set의 중요한 특징, 중복된 원소들이 없다.
////  3. key가 있는지 없는지 알아야 할 때 
////  4. 많은 자료를 저장하면서 동시에 빠른 검색을 원할 때
//
//#include <set>
//#include <string>
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	set<int> intSet;
//	set<int>::iterator it;
//
//    intSet.insert(90);
//    intSet.insert(95);
//    intSet.insert(100);
//    intSet.insert(60);
//    intSet.insert(60);
//    intSet.insert(95);
//    intSet.insert(85);
//
//    for (it = intSet.begin(); it != intSet.end(); ++it)
//        cout << *it << "  ";
//    cout << endl;                                          // sort 되어 있음 ***  
//
//    cout << "총 개수 : " << intSet.size() << endl;         // 중복 없음  ***
//}