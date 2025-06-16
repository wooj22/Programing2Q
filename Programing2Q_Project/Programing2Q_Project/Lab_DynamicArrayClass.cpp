//Item class
//	user id, name, grade �� ����Ÿ �ɹ��� �߰��ϼ���.
//	SetGrade, GetGrade, GradeUp, Show �Լ��� �����ϼ���.
//	Show �Լ��� �� �������� user id, name, grade �� ����մϴ�.

//ItemManager class
//	����� �����ϼ���.
//	����� �����ϴ� �ɹ�
// 	�ɹ� �Լ��δ� �߰�, ����, �˻�, ��� ����� �����ϼ���. ***

// Item* list(�����Ҵ� Ȱ��)
// ���� �ʿ信 ���� �����Ҵ��Ͽ� Ŭ�������� �����ϴ� ���� //����-> vector<Item> Ȱ��

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

	cout << GradeToString(grade) << "������� ���׷��̵� �Ǿ����ϴ�.\n";
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