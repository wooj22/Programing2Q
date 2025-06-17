////Item class
////	user id, name, grade
////	SetGrade, GetGrade, GradeUp, Show 함수
//
////ItemManager class
////	Item 목록을 관리하는 클래스
//// 	추가, 삭제, 검색, 출력 기능 구현
//
//// Item* list(동적할당 활용)
//// 각각 필요에 따라 동적할당하여 클래스에서 관리하는 연습 
//// 추후-> vector<Item> 활용
//
//#include <iostream>
//#include <string>
//using namespace std;
//
///*------- Grade enum -------*/
//enum class Grade
//{
//	NONE, C, B, A, S
//};
//
//Grade StringToGrade(string& grade) {
//	if (grade == "C") return Grade::C;
//	if (grade == "B") return Grade::B;
//	if (grade == "A") return Grade::A;
//	if (grade == "S") return Grade::S;
//	return Grade::NONE;
//}
//
//string GradeToString(Grade grade)
//{
//	switch (grade) {
//	case Grade::C: return "C";
//	case Grade::B: return "B";
//	case Grade::A: return "A";
//	case Grade::S: return "S";
//	default: return "Unknown";
//	}
//}
//
//
///*------- Item class -------*/
//class Item
//{
//private:
//	int index;
//	string name;
//	Grade grade;
//
//public:
//	Item() {};
//	~Item() {}
//
//	void DataSetting(int index, string name, Grade grade) 
//	{
//		this->index = index; this->name = name; this->grade = grade;
//	}
//
//	void SetIndex(int index) { index = index; }
//	void SetName(string name) { this->name = name; }
//	void SetGrade(Grade grade) { grade = grade; }
//
//	int GetIndex() { return index; }
//	string GetName() { return name; }
//	Grade GetGrade() { return grade; }
//
//	void Show() 
//	{
//		cout << index << ". " << name << "  Grade : " << GradeToString(grade) << endl;
//	}
//
//	void GradeUp() 
//	{
//		// upgrade
//		switch (grade) {
//		case Grade::C: grade = Grade::B; break;
//		case Grade::B: grade = Grade::A; break;
//		case Grade::A: grade = Grade::S; break;
//		default:  break;
//		}
//
//		cout << GradeToString(grade) << "등급으로 업그레이드 되었습니다.\n";
//	}
//};
//
//
///*------- ItemManager class -------*/
//class ItemManager {
//private:
//	Item* itemList = nullptr;
//	int size = 0;
//
//public:
//	ItemManager() {}
//	~ItemManager() { if(itemList != nullptr) delete[] itemList; }
//
//	void Add(int index, string name, string grade) 
//	{
//		// new item list
//		Item* itemList_new = new Item[size + 1];
//		
//		// copy
//		for (size_t i = 0; i < size; i++) itemList_new[i] = itemList[i];
//		
//		// new item data init
//		itemList_new[size].DataSetting(index, name, StringToGrade(grade));
//
//		// memory update
//		delete[] itemList;
//		itemList = itemList_new;
//		size++;
//
//		cout << index << "번 아이템을 추가했습니다." << endl;
//	}
//
//	Item* Find(int targetIndex)
//	{
//		for(size_t i = 0; i<size; i++)
//		{
//			if (itemList[i].GetIndex() == targetIndex) {
//				cout << targetIndex << "번 아이템을 찾았습니다." << endl;
//				itemList[i].Show();
//				return &itemList[i];
//			}
//		}
//
//		cout << targetIndex << "번 아이템을 찾을 수 없습니다." << endl;
//		return nullptr;
//	}
//
//	void Remove(int targetIndex) 
//	{
//		if (size == 0) {
//			cout << targetIndex << "번 아이템을 찾을 수 없습니다." << endl;
//			return;
//		}
//
//		// new item list
//		Item* itemList_new = new Item[size - 1];
//
//		// copy
//		for (size_t i = 0, j = 0; i < size; i++) {
//			if (i == (targetIndex - 1)) continue;
//			itemList_new[j++] = itemList[i];
//		}
//
//		// memory update
//		delete[] itemList;
//		itemList = itemList_new;
//		size--;
//
//		cout << targetIndex << "번 아이템을 삭제했습니다." << endl;
//	}
//
//	void Print() 
//	{
//		cout << "Item List 목록을 출력합니다." << endl;
//		for (size_t i=0; i < size; i++) itemList[i].Show();
//	}
//
//	Item* operator[](int index) 
//	{ 
//		if (size == 0)return nullptr; 
//		return &itemList[index];
//	}
//};
//
//int main()
//{
//	ItemManager manager;
//
//	// add
//	manager.Add(1, "item1", "A");
//	manager.Add(2, "item2", "B");
//	manager.Add(3, "item3", "C");
//	manager.Print();
//
//	// find
//	Item* item = manager.Find(2);
//
//	// remove
//	manager.Remove(2);
//	manager.Print();
//
//	// [] operator overloading
//	manager[0]->GradeUp();
//	manager[0]->Show();
//}