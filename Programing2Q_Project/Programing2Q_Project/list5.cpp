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
//// ��� ������ �����ε�
//ostream& operator<< (ostream& os, const Item& item) { item.Show(); return os; }
//
//bool compare(Item& item1, Item &item2)
//{
//	return item1.level < item2.level;
//}
//
//// C++ ��Ÿ�� ������ �����ε� ��ü
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
//	std::list<Item> items = { Item{ "�ܰ�", 1 }, Item{ "���", 2 },Item{ "����", 2 },Item{ "����", 1 } };
//	items.push_back(Item{ "��Ʈ", 10 });
//
//	// ����� ���� Ŭ����Ÿ�� list�� ��� ������ �����ε��� ���� ���
//	print_list(items);
//
//	// ����� ���� Ŭ����Ÿ�� list�� �� �Լ��� �����Ͽ� ���� ����
//	items.sort(compare);
//	print_list(items);
//
//	// operator< ������ �����ε��� ���� ���� �Լ��� �������� �ʾƵ� ���� ����
//	items.sort();
//	print_list(items);
//
//	// �Լ� ��ü
//	items.sort(Compare());
//	print_list(items);
//
//	// ���ٷ� �ѹ���
//	items.sort([](Item a, Item b) {return a.level > b.level; });
//	print_list(items);
//}