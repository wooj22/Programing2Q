////item class
////	user id, name, grade
////	setgrade, getgrade, gradeup, show 함수
//
////itemmanager class
////	item 목록을 관리하는 클래스
//// 	추가, 삭제, 검색, 출력 기능 구현
//
//// item* list(동적할당 활용)
//// 각각 필요에 따라 동적할당하여 클래스에서 관리하는 연습 
//// 추후-> vector<item> 활용
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
//		cout << gradetostring(grade) << "등급으로 업그레이드 되었습니다.\n";
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
//		cout << index << "번 아이템을 추가했습니다." << endl;
//	}
//
//	item* find(int targetindex)
//	{
//		for(size_t i = 0; i<size; i++)
//		{
//			if (itemlist[i].getindex() == targetindex) {
//				cout << targetindex << "번 아이템을 찾았습니다." << endl;
//				itemlist[i].show();
//				return &itemlist[i];
//			}
//		}
//
//		cout << targetindex << "번 아이템을 찾을 수 없습니다." << endl;
//		return nullptr;
//	}
//
//	void remove(int targetindex) 
//	{
//		if (size == 0) {
//			cout << targetindex << "번 아이템을 찾을 수 없습니다." << endl;
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
//		cout << targetindex << "번 아이템을 삭제했습니다." << endl;
//	}
//
//	void print() 
//	{
//		cout << "item list 목록을 출력합니다." << endl;
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