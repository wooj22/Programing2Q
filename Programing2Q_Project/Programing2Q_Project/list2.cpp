//#include <iostream>
//#include <list>
//using namespace std;
//
//template <class T>
//void print_list(std::list<T>& list)
//{
//	cout << "---list show()---" << endl;
//	for (auto& element : list)
//	{
//		cout << element << " ";
//	}
//	cout << endl << "-----------------" << endl;
//}
//
//int main()
//{
//	std::list<int> list;
//
//	list.push_back(10);
//	list.push_back(20);
//	list.push_back(30);
//	list.push_back(40);
//
//
//	print_list(list);
//
//	// ����� ��ȸ�ϸ鼭 ã�Ƴ���
//	// ���� ���� ���Ұ� 20 �̶��, �� �տ� 50 �� ����ִ´�.
//	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
//	{
//		if (*it == 20)
//		{
//			list.insert(it, 50);
//		}
//	}
//	print_list(list);
//
//	// ���� 30 �� ���Ҹ� �����Ѵ�.
//	//std::cout << "���� 30 �� ���Ҹ� �����Ѵ�" << std::endl;
//	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
//	{
//		if (*it == 30)
//		{
//			list.erase(it);
//			break;
//		}
//	}
//	print_list(list);
//}
