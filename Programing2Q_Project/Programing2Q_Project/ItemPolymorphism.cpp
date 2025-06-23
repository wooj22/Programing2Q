//#include <iostream>
//using namespace std;
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
///* Item */
//class Item
//{
//protected:
//	int index;
//	string name;
//	Grade grade;
//
//public:
//	Item(int index, string name, Grade grade) : 
//		index(index), name(name), grade(grade) {};
//	virtual ~Item() {};
//
//	void SetGrade(Grade _grade) { grade = _grade; }
//	Grade Getrade() { return grade; }
//
//	virtual void GradeUp() 
//	{
//		switch (grade) {
//		case Grade::C: grade = Grade::B; break;
//		case Grade::B: grade = Grade::A; break;
//		case Grade::A: grade = Grade::S; break;
//		default:  break;
//
//		cout << GradeToString(grade) << "등급으로 업그레이드 되었습니다." << endl;
//		}
//	}
//
//	virtual void Show() 
//	{
//		cout << "[" << index << "] " << name << ", Grade : " << GradeToString(grade);
//	}
//};
//
///* Weapon */
//class Weapon : public Item
//{
//private:
//	int attack;
//
//public:
//	Weapon(int index, string name, Grade grade, int attack) : 
//		Item(index, name, grade), attack(attack) { }
//	~Weapon() override {};
//
//	void GradeUp() override
//	{
//		__super::GradeUp();
//		attack += 5;
//		cout << "attack력이 5 상승했습니다." << endl;
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
//	Armor(int index, string name, Grade grade, int defence) :
//		Item(index, name, grade), defence(defence) {
//	}
//	~Armor() override {};
//
//	void GradeUp() override 
//	{
//		__super::GradeUp();
//		defence += 10;
//		cout << "defence력이 10 상승했습니다." << endl;
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
//	Ring(int index, string name, Grade grade, int magic) :
//		Item(index, name, grade), magic(magic) {
//	}
//	~Ring() override {};
//
//	void GradeUp() override 
//	{
//		__super::GradeUp();
//		magic += 10;
//		cout << "magic력이 10 상승했습니다." << endl;
//	}
//
//	void Show() override
//	{
//		__super::Show();
//		cout << ",  Magic : " << magic << endl;
//	}
//};
//
//int main() {
//	const size_t size = 3;
//	Item* itemList[size] = { new Weapon(1, "Weapon", Grade::C, 5),
//							new Armor(2, "Armor", Grade::C, 10),
//							new Ring(3, "Ring", Grade::B, 20) };
//
//	cout << ">> 아이템 목록을 출력합니다." << endl;
//	for (int i = 0; i < size; i++) itemList[i]->Show();
//
//	cout << endl << ">> 아이템 등급 업그레이드를 진행합니다" << endl;
//	for (int i = 0; i < size; i++) itemList[i]->GradeUp();
//
//	cout << endl << ">> 아이템 목록을 출력합니다." << endl;
//	for (int i = 0; i < size; i++) itemList[i]->Show();
//
//	for (int i = 0; i < size; i++) delete itemList[i];
//	return 0;
//}