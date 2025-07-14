//#include <list>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//template <class T>
//void print_list(std::list<T>& list)
//{
//	for (auto& i : list)
//	{
//		cout << i;
//	}
//}
//
//struct Item
//{
//	string name;
//	int level;
//	void Show() const
//	{
//		cout << "name : " << name << ", level : " << level << endl;
//	}
//
//	bool operator<(Item& other) { return level < other.level; }
//};
//
//// 출력 연산자 오버로딩
//ostream& operator<< (ostream& os, const Item& item) { item.Show(); return os; }
//
//bool compare(Item& item1, Item &item2)
//{
//	return item1.level < item2.level;
//}
//
//// C++ 스타일 연산자 오버로딩 객체
//struct Compare
//{
//	bool operator() (Item& item1, Item& item2)
//	{
//		return item1.level < item2.level;
//	}
//};
//
//int main()
//{
//	std::list<Item> items = { Item{ "단검", 1 }, Item{ "장검", 2 },Item{ "갑옷", 2 },Item{ "반지", 1 } };
//	items.push_back(Item{ "벨트", 10 });
//
//	// 사용자 지정 클래스타입 list도 출력 연산자 오버로딩을 통해 출력
//	print_list(items);
//
//	// 사용자 지정 클래스타입 list도 비교 함수를 전달하여 정렬 가능
//	items.sort(compare);
//	print_list(items);
//
//	// operator< 연산자 오버로딩을 통해 따로 함수를 전달하지 않아도 정렬 가능
//	items.sort();
//	print_list(items);
//
//	// 함수 객체
//	items.sort(Compare());
//	print_list(items);
//
//	// 람다로 한번에
//	items.sort([](Item a, Item b) {return a.level > b.level; });
//	print_list(items);
//}