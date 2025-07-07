//// STL 알고리즘 (STL algorithm) 사용하기
////      데이타를 여러가지 방식으로 가공하기
////      Ex) find, sort, for_each ... 
//
//// sort 함수
////  sort(start, end);         //범위지정
////  sort(start, end, Fr);     //범위지정 + 방식전달(함수)
//
//#include <vector>
//#include <algorithm>        // algorithm 을 위한 라이브러리
//#include <functional>       // functor(함수객체)를 위한 라이브러리 - greater<int>()
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
//    // 오름차순 정렬
//    sort(start, end);                       //sort //algorithm
//
//    for (iter = v.begin(); iter != v.end(); iter++)
//        cout << *iter << " ";
//    cout << "\n";
//
//
//    // 내림차순 정렬
//    sort(start, end, greater<int>());       //sort //functor 사용
//
//    for (iter = v.begin(); iter != v.end(); iter++)
//        cout << *iter << " ";
//    cout << "\n";
//}