//// STL 반복자 (STL iterator) 사용하기
//// 컨테이너를 일관성 있게 접근하기 위한 방법
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void main()
//{
//    vector<int> v = { 1,2,3 };      // 컨테이너
//    vector<int>::iterator  iter;    // 반복자 // 컨테이너 접근하는 포인터, 위치
//
//    iter = v.begin();               // 반환형은 vector<int>::iterator
//    cout << "첫 번째 요소 : " << *iter << endl;
//
//    // iterator 포인터 역참조 
//    *iter = 5;
//    cout << "첫 번째 요소의 값 : " << *iter << endl;
//    cout << "첫 번째 요소의 값 : " << v[0] << endl;
//
//    *iter++;                        // 포인터 증감 연산 -> 다음 원소를 가리킴
//    cout << "첫 번째 요소의 다음 요소 : " << *iter << endl;
//
//    // 반복자를 이용하여 벡터의 요소 출력하기
//    for (iter = v.begin(); iter != v.end(); iter++)
//        cout << "   " << *iter;
//    cout << "\n";
//
//    //v.end();
//    //      v.end() 는 맨 끝 요소를 가르키는 것이 아니다. ***
//    //      (문자열의 null 과 같이 '끝'을 의미)
//
//
//    // 출력값은?
//    vector<char> chars = { 'A', 'B', 'C' };
//    auto itr = chars.begin(); 
//    itr++; itr++;
//    cout << *itr << endl;
//}
//
//
