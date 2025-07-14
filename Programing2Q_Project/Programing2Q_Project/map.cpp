//// std::map <key, value> - <first, second>
//// 1. 크기가 가변적이다.
//// 2. 데이터를 넣으면, key를 기준으로 정렬을 한다. (단, key는 유일하다 // 중복사용하고 싶다면 multi_map 사용)
//// 3. 많은 자료를 저장하면서 동시에 빠른 검색을 지원
//// 4. 빈번하게 삽입, 삭제하지 않는다.
//
//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//
//template <typename K, typename V>
//void print_map(std::map<K, V>& m)
//{
//	for (auto itr = m.begin(); itr != m.end(); ++itr) {
//		std::cout << itr->first << " " << itr->second << std::endl;
//	}
//}
//
//int main()
//{
//	map<string, int> map1;
//
//	// 일반 삽입 x
//	//map.insert("민수", 10000);
//
//	// value_type
//	map1.insert(std::map<string, int>::value_type("test", 0));
//
//	// pair
//	map1.insert(make_pair("민수", 10000));
//	map1.insert(make_pair("수연", 5200));
//	map1.insert(make_pair("지수", 9800));
//	map1.insert(make_pair("지수", 0));		// key가 중복되면 삽입되지 않음
//
//	// first, second
//	for (auto& e : map1)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//
//	// [key]
//	cout << map1["민수"] << endl;
//	map1["민수"] = 20000;
//	cout << map1["민수"] << endl;
//
//	// key로 추가
//	map1["우정"] = 400;
//	cout << map1["우정"] << endl;
//
//	// 다른 맵의 요소를 insert
//	map<int, int> map2;
//	map2.insert(make_pair(1, 11));
//	map2.insert(make_pair(2, 22));
//	map2.insert(make_pair(3, 33));
//	map2.insert(make_pair(4, 44));
//
//	map<int, int> map3;
//	map3.insert(make_pair(5, 55));
//	map3.insert(make_pair(6, 66));
//	map3.insert(make_pair(7, 77));
//	map3.insert(make_pair(8, 88));
//
//	map2.insert(map3.begin(), map3.end());
//	print_map(map2);
//
//	// iterator
//	map<string, int> peoples;
//	map<string, int>::iterator it;
//
//	peoples.insert(make_pair("하늘", 18));
//	peoples.insert(make_pair("수연", 15));
//	peoples.insert(make_pair("성훈", 22));
//	it = peoples.begin();
//
//	for (it; it != peoples.end(); it++)
//	{
//		cout << (*it).first << " " << (*it).second << endl;
//	}
//
//	// find
//	
//}