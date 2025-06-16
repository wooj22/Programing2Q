//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
///*------- Grade enum -------*/
//enum class Grade 
//{
//	C, B, A, S
//};
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
///*------- Item class -------*/
//class Item 
//{
//public:
//	static int itemTotalCount;
//
//private:
//	int _index;
//	string name;
//	int _level;
//	Grade grade;
//
//public:
//	Item(string name, int level, Grade grade) :
//		name(name), _level(level), grade(grade) {	
//		++itemTotalCount; _index = itemTotalCount;
//	}
//
//	void Show();
//
//	int GetIndex() { return _index; }
//	string GetName() { return name; }
//	int GetLevel() { return _level; }
//	Grade GetGrade() { return grade; }
//	void SetGrade(Grade grade) { grade = grade; }
//	void GradeUp();
//};
//
//int Item::itemTotalCount = 0;  // static ��� �ʱ�ȭ
//
//void Item::Show() 
//{
//	cout << "Item " << _index << ". " << name << endl;
//	cout << "\tLevel - " << _level << "  Grade - " << GradeToString(grade) << endl;
//}
//
//void Item::GradeUp() 
//{ 
//	// upgrade
//	switch (grade) {
//	case Grade::C: grade = Grade::B; break;
//	case Grade::B: grade = Grade::A; break;
//	case Grade::A: grade = Grade::S; break;
//	default:  break;
//	}
//
//	cout << GradeToString(grade) << "������� ���׷��̵� �Ǿ����ϴ�.\n";
//}
//
//
///*------- Enhance class -------*/
//class EnhanceSystem 
//{
//public:
//	Item* Enhance(Item** itemList) {
//		int item1Index, item2Index;
//		cout << "�ռ� ��Ḧ �Է��ϼ���\n";
//		cout << "�ռ� ���1 �Է� : "; cin >> item1Index;
//		cout << "�ռ� ���2 �Է� : "; cin >> item2Index;
//		item1Index--; item2Index--;	   // �ε��� ����
//
//		// ����� ���� �ʴٸ� return
//		if (itemList[item1Index]->GetGrade() != itemList[item2Index]->GetGrade()) {
//			cout << "����� ����� ���� �ʽ��ϴ�\n\n";
//			return nullptr;
//		}
//
//		// ��ȭ
//		Item* newItem = new Item(itemList[item1Index]->GetName(), 1, 
//			itemList[item1Index]->GetGrade());
//		newItem->GradeUp();
//		cout << "�ռ� ��� : "; newItem->Show();
//
//		delete itemList[item1Index]; itemList[item1Index] = nullptr;
//		delete itemList[item2Index]; itemList[item2Index] = nullptr;
//		return newItem;
//	}
//};
//
///*------- Main Program -------*/
//int main() 
//{
//	// Item List
//	const int itemListSize = 10;
//	Item* itemList[itemListSize] = {
//		new Item("Weapon", 1, Grade::B),
//		new Item("Armor", 1, Grade::B),
//		new Item("Ring", 1, Grade::C),
//		new Item("Bow", 1, Grade::C),
//		new Item("Glove", 1, Grade::C)
//	};
//
//	// show
//	for (int i = 0; i < itemListSize; i++) {
//		if (itemList[i] == nullptr) continue;
//		itemList[i]->Show();
//	}
//	cout << endl;
//
//	// ��ȭ
//	EnhanceSystem enhanceSystem;
//	itemList[Item::itemTotalCount] = enhanceSystem.Enhance(itemList);
//
//	// show
//	for (int i = 0; i < itemListSize; i++) {
//		if (itemList[i] == nullptr) continue;
//		itemList[i]->Show();
//	}
//}