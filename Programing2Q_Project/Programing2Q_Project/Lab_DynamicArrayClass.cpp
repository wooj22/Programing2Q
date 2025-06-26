////item class
////	user id, name, grade
////	setgrade, getgrade, gradeup, show �Լ�
//
////itemmanager class
////	item ����� �����ϴ� Ŭ����
//// 	�߰�, ����, �˻�, ��� ��� ����
//
//// item* list(�����Ҵ� Ȱ��)
//// ���� �ʿ信 ���� �����Ҵ��Ͽ� Ŭ�������� �����ϴ� ���� 
//// ����-> vector<item> Ȱ��
//
//#include <iostream>
//#include <string>
//using namespace std;
//
///*------- grade enum -------*/
//enum class grade
//{
//	none, c, b, a, s
//};
//
//grade stringtograde(string& grade) {
//	if (grade == "c") return grade::c;
//	if (grade == "b") return grade::b;
//	if (grade == "a") return grade::a;
//	if (grade == "s") return grade::s;
//	return grade::none;
//}
//
//string gradetostring(grade grade)
//{
//	switch (grade) {
//	case grade::c: return "c";
//	case grade::b: return "b";
//	case grade::a: return "a";
//	case grade::s: return "s";
//	default: return "unknown";
//	}
//}
//
//
///*------- item class -------*/
//class item
//{
//private:
//	int index;
//	string name;
//	grade grade;
//
//public:
//	item() {};
//	~item() {}
//
//	void datasetting(int index, string name, grade grade) 
//	{
//		this->index = index; this->name = name; this->grade = grade;
//	}
//
//	void setindex(int index) { index = index; }
//	void setname(string name) { this->name = name; }
//	void setgrade(grade grade) { grade = grade; }
//
//	int getindex() { return index; }
//	string getname() { return name; }
//	grade getgrade() { return grade; }
//
//	void show() 
//	{
//		cout << index << ". " << name << "  grade : " << gradetostring(grade) << endl;
//	}
//
//	void gradeup() 
//	{
//		// upgrade
//		switch (grade) {
//		case grade::c: grade = grade::b; break;
//		case grade::b: grade = grade::a; break;
//		case grade::a: grade = grade::s; break;
//		default:  break;
//		}
//
//		cout << gradetostring(grade) << "������� ���׷��̵� �Ǿ����ϴ�.\n";
//	}
//};
//
//
///*------- itemmanager class -------*/
//class itemmanager {
//private:
//	item* itemlist = nullptr;
//	int size = 0;
//
//public:
//	itemmanager() {}
//	~itemmanager() { if(itemlist != nullptr) delete[] itemlist; }
//
//	void add(int index, string name, string grade) 
//	{
//		// new item list
//		item* itemlist_new = new item[size + 1];
//		
//		// copy
//		for (size_t i = 0; i < size; i++) itemlist_new[i] = itemlist[i];
//		
//		// new item data init
//		itemlist_new[size].datasetting(index, name, stringtograde(grade));
//
//		// memory update
//		delete[] itemlist;
//		itemlist = itemlist_new;
//		size++;
//
//		cout << index << "�� �������� �߰��߽��ϴ�." << endl;
//	}
//
//	item* find(int targetindex)
//	{
//		for(size_t i = 0; i<size; i++)
//		{
//			if (itemlist[i].getindex() == targetindex) {
//				cout << targetindex << "�� �������� ã�ҽ��ϴ�." << endl;
//				itemlist[i].show();
//				return &itemlist[i];
//			}
//		}
//
//		cout << targetindex << "�� �������� ã�� �� �����ϴ�." << endl;
//		return nullptr;
//	}
//
//	void remove(int targetindex) 
//	{
//		if (size == 0) {
//			cout << targetindex << "�� �������� ã�� �� �����ϴ�." << endl;
//			return;
//		}
//
//		// new item list
//		item* itemlist_new = new item[size - 1];
//
//		// copy
//		for (size_t i = 0, j = 0; i < size; i++) {
//			if (i == (targetindex - 1)) continue;
//			itemlist_new[j++] = itemlist[i];
//		}
//
//		// memory update
//		delete[] itemlist;
//		itemlist = itemlist_new;
//		size--;
//
//		cout << targetindex << "�� �������� �����߽��ϴ�." << endl;
//	}
//
//	void print() 
//	{
//		cout << "item list ����� ����մϴ�." << endl;
//		for (size_t i=0; i < size; i++) itemlist[i].show();
//	}
//
//	item* operator[](int index) 
//	{ 
//		if (size == 0)return nullptr; 
//		return &itemlist[index];
//	}
//};
//
//int main()
//{
//	itemmanager manager;
//
//	// add
//	manager.add(1, "item1", "a");
//	manager.add(2, "item2", "b");
//	manager.add(3, "item3", "c");
//	manager.print();
//
//	// find
//	item* item = manager.find(2);
//
//	// remove
//	manager.remove(2);
//	manager.print();
//
//	// [] operator overloading
//	manager[0]->gradeup();
//	manager[0]->show();
//}