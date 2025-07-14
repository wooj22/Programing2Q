//// std::map <key, value> - <first, second>
//// 1. ũ�Ⱑ �������̴�.
//// 2. �����͸� ������, key�� �������� ������ �Ѵ�. (��, key�� �����ϴ� // �ߺ�����ϰ� �ʹٸ� multi_map ���)
//// 3. ���� �ڷḦ �����ϸ鼭 ���ÿ� ���� �˻��� ����
//// 4. ����ϰ� ����, �������� �ʴ´�.
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
//	// �Ϲ� ���� x
//	//map.insert("�μ�", 10000);
//
//	// value_type
//	map1.insert(std::map<string, int>::value_type("test", 0));
//
//	// pair
//	map1.insert(make_pair("�μ�", 10000));
//	map1.insert(make_pair("����", 5200));
//	map1.insert(make_pair("����", 9800));
//	map1.insert(make_pair("����", 0));		// key�� �ߺ��Ǹ� ���Ե��� ����
//
//	// first, second
//	for (auto& e : map1)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//
//	// [key]
//	cout << map1["�μ�"] << endl;
//	map1["�μ�"] = 20000;
//	cout << map1["�μ�"] << endl;
//
//	// key�� �߰�
//	map1["����"] = 400;
//	cout << map1["����"] << endl;
//
//	// �ٸ� ���� ��Ҹ� insert
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
//	peoples.insert(make_pair("�ϴ�", 18));
//	peoples.insert(make_pair("����", 15));
//	peoples.insert(make_pair("����", 22));
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