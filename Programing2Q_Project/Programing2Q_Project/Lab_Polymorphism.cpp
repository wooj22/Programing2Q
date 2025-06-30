//#include <iostream>
//using namespace std;
//
//// 상속과 다형성을 활용한 Item class
//// 기본 멤버 - id, name, level, grade
//// -> Weapon(+attack), Armor(+defence), Ring(magic), Shoes(moveSpeed)
//// 동적 Item배열을 관리하는 ItemManager class
//
///* Grade enum */
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
///* Item Name enum */
//enum class ItemName
//{
//	NONE, Weapon, Armor, Ring, Shoes
//};
//
//ItemName StringToItem(string& itemName) {
//	if (itemName == "Weapon") return ItemName::Weapon;
//	if (itemName == "Armor") return ItemName::Armor;
//	if (itemName == "Ring") return ItemName::Ring;
//	if (itemName == "Shoes") return ItemName::Shoes;
//	return ItemName::NONE;
//}
//
//string ItemToString(ItemName itemName)
//{
//	switch (itemName) {
//	case ItemName::Weapon: return "Weapon";
//	case ItemName::Armor: return "Armor";
//	case ItemName::Ring: return "Ring";
//	case ItemName::Shoes: return "Shoes";
//	default: return "Unknown";
//	}
//}
//
//
///*--------- Item class ---------*/
//class Item
//{
//public:
//	static int uniqueNumber;
//
//protected:
//	int id;
//	string name;
//	int level;
//	Grade grade;
//
//public:
//	Item(string name, int level, Grade grade) :
//		name(name), level(level), grade(grade) { id = ++uniqueNumber; };
//	virtual ~Item() {};
//
//	int GetId() { return id; }
//	string GetName() { return name; }
//	int GetLevel() { return level; }
//	Grade GetGrade() { return grade; }
//
//	void LevelUp() { level++; cout << "레벨이 상승했습니다." << endl; }
//
//	virtual void GradeUp()
//	{
//		switch (grade) {
//		case Grade::C: grade = Grade::B; break;
//		case Grade::B: grade = Grade::A; break;
//		case Grade::A: grade = Grade::S; break;
//		default:  break;
//
//			cout << GradeToString(grade) << "등급으로 업그레이드 되었습니다." << endl;
//		}
//	}
//
//	virtual void Show()
//	{
//		cout << "[" << id << "] " << name << ", Level : " << level << ", Grade : " << GradeToString(grade);
//	}
//};
//
//int Item::uniqueNumber = 0;
//
///* Weapon */
//class Weapon : public Item
//{
//private:
//	int attack;
//
//public:
//	Weapon(string name, int level, Grade grade, int attack) :
//		Item(name, level, grade), attack(attack) {
//	}
//	~Weapon() override {};
//
//	void GradeUp() override
//	{
//		__super::GradeUp();
//		attack += 5;
//		cout << "Weapon의 공격력이 5 상승했습니다." << endl;
//	}
//
//	void Show() override
//	{
//		__super::Show();
//		cout << ",  Attack : " << attack << endl;
//	}
//};
//
///* Armor */
//class Armor : public Item
//{
//private:
//	int defence;
//
//public:
//	Armor(string name, int level, Grade grade, int defence) :
//		Item(name, level, grade), defence(defence) {
//	}
//	~Armor() override {};
//
//	void GradeUp() override
//	{
//		__super::GradeUp();
//		defence += 10;
//		cout << "Armord의 방어력이 10 상승했습니다." << endl;
//	}
//
//	void Show() override
//	{
//		__super::Show();
//		cout << ",  Defence : " << defence << endl;
//	}
//};
//
///* Ring */
//class Ring : public Item
//{
//private:
//	int magic;
//
//public:
//	Ring(string name, int level, Grade grade, int magic) :
//		Item(name, level, grade), magic(magic) { }
//	~Ring() override {};
//
//	void GradeUp() override
//	{
//		__super::GradeUp();
//		magic += 10;
//		cout << "Ring의 마법력이 10 상승했습니다." << endl;
//	}
//
//	void Show() override
//	{
//		__super::Show();
//		cout << ",  Magic : " << magic << endl;
//	}
//};
//
///* Shoes */
//class Shoes : public Item
//{
//private: 
//	float moveSpeed;
//
//public:
//	Shoes(string name, int level, Grade grade, int moveSpeed) :
//		Item(name, level, grade), moveSpeed(moveSpeed) { }
//	~Shoes() override {};
//
//	void GradeUp() override
//	{
//		__super::GradeUp();
//		moveSpeed += 10;
//		cout << "Shoes의 속력이 10 상승했습니다." << endl;
//	}
//
//	void Show() override
//	{
//		__super::Show();
//		cout << ",  MoveSpeed : " << moveSpeed << endl;
//	}
//};
//
//
///*------- ItemManager class -------*/
//class Itemmanager {
//private:
//	Item** itemlist = nullptr;
//	int size = 0;
//
//public:
//	Itemmanager() {}
//	~Itemmanager() 
//	{
//		for (int i = 0; i < size; i++)
//			delete itemlist[i];
//
//		delete[] itemlist;
//	}
//
//
//	void Add(string name, int level, string grade, int elsePower)
//	{
//		// new item
//		Item* newItem = nullptr;
//		switch (StringToItem(name))
//		{
//		case ItemName::Weapon:
//			newItem = new Weapon(name, level, StringToGrade(grade), elsePower);
//			break;
//		case ItemName::Armor:
//			newItem = new Armor(name, level, StringToGrade(grade), elsePower);
//			break;
//		case ItemName::Ring:
//			newItem = new Ring(name, level, StringToGrade(grade), elsePower);
//			break;
//		case ItemName::Shoes:
//			newItem = new Shoes(name, level, StringToGrade(grade), elsePower);
//			break;
//		default:
//			break;
//		}
//
//		// new array
//		Item** newList = new Item * [size + 1];
//
//		// copy
//		for (int i = 0; i < size; i++)
//			newList[i] = itemlist[i];
//
//		// add
//		newList[size] = newItem;
//
//		// delete
//		delete[] itemlist;
//		itemlist = newList;
//		size++;
//	}
//
//	Item* Find(int id)
//	{
//		for (int i = 0; i < size; i++) {
//			if (itemlist[i]->GetId() == id)
//				return itemlist[i];
//		}
//		return nullptr;
//	}
//
//	void Remove(int id)
//	{
//		int index = -1;
//		for (int i = 0; i < size; i++) {
//			if (itemlist[i]->GetId() == id) {
//				index = i;
//				break;
//			}
//		}
//
//		if (index == -1) {
//			cout << "아이템을 찾을 수 없습니다." << endl;
//			return;
//		}
//
//		// 해당 아이템 삭제
//		delete itemlist[index];
//
//		// 새 배열 생성
//		Item** newList = new Item * [size - 1];
//
//		// 삭제한 인덱스를 제외하고 복사
//		for (int i = 0, j = 0; i < size; i++) {
//			if (i == index) continue;
//			newList[j++] = itemlist[i];
//		}
//
//		// 기존 배열 삭제
//		delete[] itemlist;
//
//		// 새 배열로 교체
//		itemlist = newList;
//		size--;
//	}
//
//	void Show()
//	{
//		cout << "----- Item List -----" << endl;
//		for (int i = 0; i < size; i++)
//			itemlist[i]->Show();
//	}
//
//	void LevelUp(int id) 
//	{
//		Find(id)->LevelUp();
//	}
//
//	void GradeUp(int id) 
//	{
//		Find(id)->GradeUp();
//	}
//
//	void Enhance(int id1, int id2) 
//	{
//		Item* item1 = Find(id1);
//		Item* item2 = Find(id2);
//
//		if (item1->GetName() != item2->GetName()) {
//			cout << "재료가 같지 않습니다\n";
//			return;
//		}
//
//		if(item1->GetLevel() != item2->GetLevel()) {
//			cout << "등급이 같지 않습니다\n";
//			return;
//		}
//
//		// enhance
//		string name = item1->GetName();
//		int level = item1->GetLevel() > item2->GetLevel()? item1->GetLevel(): item2->GetLevel();
//		string grade =
//			item1->GetGrade() > item2->GetGrade() ? GradeToString(item1->GetGrade()) : GradeToString(item2->GetGrade());
//		int power = 0;
//
//		Remove(id1); Remove(id2);
//		Add(name, level, grade, power);
//		cout << "강화에 성공했습니다!\n";
//	}
//	
//	Item* operator[](int index)
//	{
//		if (index < 0 || index >= size)
//			return nullptr;
//		return itemlist[index];
//	}
//};
//
//int main()
//{
//	Itemmanager itemManager;
//	bool isLoop = true;
//
//	int num;
//	string input_name;	int input_level; string input_grade; int input_else;
//	int id;
//	int num1;
//	int num2;
//
//	while(isLoop)
//	{
//		cout << "1. 아이템 추가  2, 삭제  3. 레벨업  4. 합성  5. 목록보기  (0. 나가기)" << endl;
//		cin >> num;
//
//		switch (num)
//		{
//		case 1:
//			cout << "추가할 아이템을 입력해주세요(Weapon, Armor, Ring, Shoes) : ";
//			cin >> input_name;
//			cout << "아이템의 레벨을 입력해주세요(1~10) : "; cin >> input_level;
//			cout << "아이템의 등급을 입력해주세요(S, A, B, C) : "; cin >> input_grade;
//			cout << "아이템의 기타 속성력을 입력해주세요 : "; cin >> input_else;
//			itemManager.Add(input_name, input_level, input_grade, input_else);
//			break;
//
//		case 2:
//			cout << "삭제할 아이템의 ID를 입력해주세요 : ";
//			cin >> id;
//			itemManager.Remove(id);
//			break;
//
//		case 3:
//			cout << "레벨업 시킬 아이템 ID를 입력해주세요 : ";
//			cin >> id;
//			itemManager.LevelUp(id);
//			break;
//
//		case 4:
//			cout << "합성 재료의 ID를 입력해주세요 : ";
//			cin >> num1 >> num2;
//			itemManager.Enhance(num1, num2);
//			break;
//
//		case 5:
//			itemManager.Show();
//			break;
//
//		case 0:
//			isLoop = false;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	cout << "시스템 종료" << endl;
//}