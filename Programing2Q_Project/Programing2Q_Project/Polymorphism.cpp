//#include <iostream>
//using namespace std;
//
//class Player {
//public:
//	virtual void Move() { cout << "Playr Move" << endl; }
//};
//
//class Enemy : public Player {
//	void Move() override { cout << "Enemy Move" << endl; }
//};
//
//class Npc : public Player {
//	void Move() override { cout << "Npc Move" << endl; }
//};
//
//int main(void) 
//{
//	const size_t size = 3;
//	Player* player[size] = { new Player(), new Enemy(), new Npc() };
//
//	player[0]->Move();
//	player[1]->Move();
//	player[2]->Move();
//
//	for (size_t i = 0; i < size; i++) delete player[i];
//	return 0;
//}