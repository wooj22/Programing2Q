//// ������ Ŭ���� �����ϱ�
//// �� Ŭ������ �ٸ� Ŭ������ private �� protected ����� ���� ������ �� �ֵ��� ����ϴ� Ư���� ����
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Girl;
//
//class Boy
//{
//private:
//	int height;
//
//public:
//	Boy(int len) : height(len) {}
//	void ShowYourFriendInfo(Girl* frn);
//
//	// friend ���
//	friend class Girl;
//};
//
//class Girl
//{
//private:
//	char phNum[20];
//public:
//	Girl(char* num) { strcpy_s(phNum, num); }
//	void ShowYourFriendInfo(Boy& frn);
//
//	// friend ���
//	friend class Boy;
//};
//
//void Boy::ShowYourFriendInfo(Girl* frn)
//{
//	cout << "Her phone number: " << frn->phNum << endl;
//}
//
//void Girl::ShowYourFriendInfo(Boy& frn)
//{
//	cout << "His height: " << frn.height << endl;
//}
//
//int main(void)
//{
//	char number[] = "010-1234-5678";
//	Boy boy(170);
//	Girl girl(number);
//
//	boy.ShowYourFriendInfo(&girl);
//	girl.ShowYourFriendInfo(boy);
//	return 0;
//}
