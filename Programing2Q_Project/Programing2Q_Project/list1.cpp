//// std::list
//// 1. ���������� �迭�� ���� ���̰� �������̴�. -> �������� ũ�� ������ ����
//// 2. �߰��� ������ ����(insert)�̳� ����(erase)�� �����մϴ�. ���� �� ����ð� ���⵵�� ���༺�� ***
//// 3. ���� ������ �����ϳ�, ���� ������ �Ұ����մϴ�. -> index ���� �Ұ�
//
//#include <iostream>
//#include <list>
//#include <functional>
//using namespace std;
//
//bool Predicate(int n)
//{
//	return n >= 100;
//}
//
//void print_list(list<int>& _list)
//{
//	list<int>::iterator iter;
//	for (iter = _list.begin(); iter != _list.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl << endl;
//}
//
//int main()
//{
//	// list 1
//	list<int> list1;
//	list<int>::iterator it;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		list1.push_back(i);
//	}
//
//	cout << "list1 : ";  print_list(list1);
//	
//	// insert(����) case 1
//	it = list1.begin();
//	it++;
//
//	list1.insert(it, 100);		// int 1�� ���� �ڸ��� 100 ����
//	cout << "list1 insert case 1: "; print_list(list1);
//
//	// insert(����) case 2
//	it = list1.begin();
//	it++; it++;
//
//	list<int> list2;
//	list2.push_back(10);
//	list2.push_back(10);
//	list2.push_back(10);
//
//	list1.insert(it, list2.begin(), list2.end());		// index 2�� ���� �ڸ��� 10, 10, 10 ����
//	cout << "list1 insert case 2: "; print_list(list1);
//
//	// insert(����) case 3
//	it = list1.end();
//	list1.insert(it, 2, 500);		// ������ ���� �ڸ��� 500, 500 ����
//	cout << "list1 insert case 3: "; print_list(list1);
//
//
//	// erase(����) case 1
//	it = list1.begin();
//	list1.erase(it);				// index 0�� ���� ����
//	cout << "list1 erase case 1: "; print_list(list1);
//
//	// erase(����) case 2
//	list1.erase(list1.begin(), list1.end());	// ó������ ������ ����
//	cout << "list1 erase case 2: "; print_list(list1);
//
//
//	list<int> list3;
//	list3.push_back(10);
//	list3.push_back(40);
//	list3.push_back(200);
//	list3.push_back(50);
//	list3.push_back(30);
//	list3.push_back(100);
//	list3.push_back(38);
//	list3.push_back(38);
//	list3.push_back(38);
//	list3.push_back(99);
//
//	cout << "list3 : "; print_list(list3);
//
//	// remove(�� ã�Ƽ� ��� ����)
//	list3.remove(38);
//	cout << "list3 remove(38): "; print_list(list3);
//
//	// remove_if(������ �ִ� ��� ��� ����)
//	list3.remove_if(Predicate);		//bool function - 100���� ū ���� ����
//	cout << "list3 remove_if(Predicate): "; print_list(list3);
//
//
//	// sort(��������)
//	list3.sort();
//	cout << "list3 sort(��������): "; print_list(list3);
//
//	// sort(��������)
//	list3.sort(greater<int>());
//	cout << "list3 sort(��������): "; print_list(list3);
//
//
//	// unique (�����ϰ� ����� - �ߺ��Ǵ� ���� ����)
//	for (int i = 0; i < 5; i++) list3.push_back(10);
//	cout << "list3 : "; print_list(list3);
//
//	list3.unique();
//	cout << "list3 unique: "; print_list(list3);
//
//
//	// splice (�ٸ� ����Ʈ�� ���Ҹ� �߶� ���̱�)
//	list<int> list4;
//	for (int i = 0; i < 10; i++) list4.push_back(i);
//
//	cout << "splice test" << endl;
//	it = list3.begin(); ++it; ++it;
//	list3.splice(it, list4);
//
//	cout << "list3.splice(list4): "; print_list(list3);
//	cout << "list4              : "; print_list(list4);
//
//	// merge
//	cout << "Merge test" << endl;
//	list<int> list5;
//	list<int> list6;
//
//	list5.push_back(1);
//	list5.push_back(10);
//	list5.push_back(3);
//	list5.push_back(30);
//	list5.push_back(8);
//
//	list6.push_back(2);
//	list6.push_back(11);
//	list6.push_back(5);
//	list6.push_back(58);
//	list6.push_back(80);
//
//	list5.sort();
//	list6.sort();
//	cout << "list5 (��������): "; print_list(list5);
//	cout << "list6 (��������): "; print_list(list6);
//
//	// merge ����ϱ� // �� ����Ʈ�� ���� ���ĵǾ� �־�� �Ѵ�. ***
//	list5.merge(list6);
//
//	cout << "list5 : "; print_list(list5);
//	cout << "list6 : "; print_list(list6);
//
//	return 0;
//}