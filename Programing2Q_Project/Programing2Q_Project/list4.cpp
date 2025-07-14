//#include<iostream>
//#include<list>
//using namespace std;
//
//template <typename T>
//void print_list(list<T>& lst) {
//    cout << "--------- print_list() ------------" << endl;
//    for (const auto& elem : lst) 
//        cout << elem << " ";
//    cout << endl;
//}
//
//bool predicate(char c)
//{
//    return(c != 'k' && c != 'o' && c != 'r' && c != 'e' && c != 'a');
//}
//
//bool predicate2(char c)
//{
//    return(c == 'k' || c == 'o' || c == 'r' || c == 'e' || c == 'a');
//}
//
//int main()
//{
//    list<char> alpha_list;
//
//    // a ~ z 까지 추가하세요.
//    for (char c = 'a'; c <= 'z'; c++) 
//    {
//        alpha_list.push_back(c);
//    }
//    print_list(alpha_list);
//
//    // k o r e a 만 남기고 삭제하세요.  // remove_if
//    alpha_list.remove_if(predicate);
//    print_list(alpha_list);
//
//
//    list<char> alpha_list2;
//
//    // a ~ z 까지 추가하세요.
//    for (char c = 'a'; c <= 'z'; c++) {
//        alpha_list2.push_back(c);
//    }
//    print_list(alpha_list2);
//
//    // k o r e a 만 삭제하세요.
//    alpha_list2.remove_if(predicate2);
//    print_list(alpha_list2);
//
//    // alpha_list 에 alpha_list2  merge
//    alpha_list.merge(alpha_list2);
//    print_list(alpha_list);
//
//    return 0;
//}