//Item class
//	user id, name, grade 등 데이타 맴버를 추가하세요.
//	SetGrade, GetGrade, GradeUp, Show 함수를 구성하세요.
//	Show 함수는 각 아이템의 user id, name, grade 를 출력합니다.

//ItemManager class
//	목록을 관리하세요.
//	목록을 관리하는 맴버
// 	맴버 함수로는 추가, 삭제, 검색, 출력 기능을 구현하세요. ***

// Item* list(동적할당 활용)
// 각각 필요에 따라 동적할당하여 클래스에서 관리하는 연습 //추후-> vector<Item> 활용

#include <iostream>
#include <string>
using namespace std;

/*------- Grade enum -------*/
enum class Grade
{
	C, B, A, S
};

string GradeToString(Grade grade)
{
	switch (grade) {
	case Grade::C: return "C";
	case Grade::B: return "B";
	case Grade::A: return "A";
	case Grade::S: return "S";
	default: return "Unknown";
	}
}

/*------- Item class -------*/
class Item
{
private:
	string userId;
	string name;
	Grade grade;

public:
	Item(){}
	~Item(){}

	void SetUserId(string id) { userId = id; }
	void SetName(string name) { this->name = name; }
	void SetGrade(Grade grade) { grade = grade; }

	string GetUserId() { return userId; }
	string GetName() { return name; }
	Grade GetGrade() { return grade; }

	void Show();
	void GradeUp();
};

void Item::Show()
{
	cout << "[User ID :  " << userId << "] item : " << name << "  Grade - " << GradeToString(grade) << endl;
}

void Item::GradeUp()
{
	// upgrade
	switch (grade) {
	case Grade::C: grade = Grade::B; break;
	case Grade::B: grade = Grade::A; break;
	case Grade::A: grade = Grade::S; break;
	default:  break;
	}

	cout << GradeToString(grade) << "등급으로 업그레이드 되었습니다.\n";
}

/*------- ItemManager class -------*/
class ItemManager {
private:
	Item* itemList = nullptr;
	int size = 0;

public:
	ItemManager(int size) { itemList = new Item[size];  }
	~ItemManager() { delete[] itemList; }

	void Add();
	Item& Find();
	void Remove();
	void Print();
};

int main()
{
	/*ItemManager manager;
	manager.Add(1, "item1", 'A');
	manager.Add(2, "item2", 'B');
	manager.Add(3, "item3", 'C');
	manager.Print();


	Item* item = manager.Find(2);
	item->Print();

	manager.Remove(2);
	manager.Print();*/
}