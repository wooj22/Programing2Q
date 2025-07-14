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
//	// 목록을 순회하면서 찾아내기
//	// 만일 현재 원소가 20 이라면, 그 앞에 50 을 집어넣는다.
//	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
//	{
//		if (*it == 20)
//		{
//			list.insert(it, 50);
//		}
//	}
//	print_list(list);
//
//	// 값이 30 인 원소를 삭제한다.
//	//std::cout << "값이 30 인 원소를 제거한다" << std::endl;
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
