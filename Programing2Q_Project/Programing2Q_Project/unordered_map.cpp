////unordered_map
////  1. ���� �ڷḦ �����ؾ��մϴ�.�� ���� �˻� �ӵ��� ����� �Ҷ�. ***
////  2. �ʹ� ����ϰ� �ڷḦ ����, �������� ���� ��
////  ���ڿ��� ���̰� ��� �������� ũ�Ⱑ ũ�� ���� ���� map�� unordered_map���� Ž���� ����
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//template < typename T, typename U >
//void print(unordered_map<T, U>& hash)
//{
//	typename unordered_map<T, U>::iterator iter2;
//	for (iter2 = hash.begin(); iter2 != hash.end(); iter2++)
//		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
//	cout << endl << endl;
//}
//
//int main()
//{
//	unordered_map<int, float> hash1;
//
//	// insert case 1:
//	hash1.insert(unordered_map<int, float>::value_type(10, 10.5f));
//
//	// insert case 2:
//	hash1.insert(hash1.begin(), unordered_map<int, float>::value_type(20, 20.8f));
//
//	// insert case 3:
//	unordered_map<int, float> hash2;
//	hash2.insert(hash1.begin(), hash1.end());
//
//
//	// for�� Ȱ�� // iterator ���
//	cout << "hash1: ";
//	unordered_map<int, float>::iterator iter;
//	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
//		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
//	cout << endl << endl;;
//
//	cout << "hash2: ";
//	for (iter = hash2.begin(); iter != hash2.end(); ++iter)
//		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
//	cout << endl << endl;
//
//
//	// erase case 1:
//	hash1.erase(hash1.begin());
//	print(hash1);
//
//	// erase case 2:
//	hash1.erase(hash1.begin(), hash1.end());
//	print(hash1);
//
//	// erase case 3:
//	hash2.erase(10); // key�� 10�� ��Ҹ� �����Ѵ�.
//	print(hash2);
//
//
//	// search case 1:
//	unordered_map<int, float>::iterator findIter;
//
//	// ã���� �� ����� �ݺ��ڸ� ����, �ƴϸ� end()�� ����
//	findIter = hash2.find(20);
//	if (findIter != hash2.end()) { cout << "key�� 20�� ��Ұ� �־��." << endl << endl; }
//	else { cout << "�׷� ��Ҵ� ���׿�." << endl << endl; }
//
//
//	//----------------------------------------------------------------------
//	unordered_map<int, int> hash3;
//	for (int i = 0; i < 5; i++)
//		hash3.insert(unordered_map<int, int>::value_type(i, i + 10));
//	cout << "hash3: ";  print(hash3);
//
//	// �ٸ� ���·ε� insert�� �� �ֽ��ϴ�.
//	hash3[1000] = 200;
//	hash3[2000] = 300;
//	cout << "hash3: "; print(hash3);
//
//	// �̷� ���µ� �����Ǿ �־����ϴ�. default�� �־����ϴ�. int�� 0  ***
//	hash3[3000];
//	cout << "hash3: "; print(hash3);
//	cout << "hash3 size : " << hash3.size() << endl;
//
//	// string  -----------------------------------------------------------
//
//	unordered_map<int, string> hash4;
//	hash4[1] = "Apple";
//	hash4[2] = "Banana";
//	hash4[3] = "Cheeze";
//	cout << "hash4: "; print(hash4);
//
//	// hash[key]�� �̿��ϸ� ������ �����մϴ�. ***
//	hash4[3] = "Tomato";
//	cout << "hash4: "; print(hash4);
//
//	// insert�� �̹� key�� ����Ǿ� ������ ������ �Ұ��� �մϴ�. 
//	// ���� ������ ���� ������ ������ ���� �ʽ��ϴ�.
//
//	hash4.insert(unordered_map<int, string>::value_type(3, "Grape"));
//	hash4.insert(unordered_map<int, string>::value_type(4, "Grape"));
//	cout << "hash4: "; print(hash4);
//
//	// search ����� �� �ٸ� ����� �ֽ��ϴ� --------------------------------------
//
//	// count �Դϴ�.
//	if (hash4.count(4))
//	{
//		cout << hash4[4] << endl << endl;
//	}
//	else
//	{
//		cout << "ã�� ���� ��Ҵ� ��Ŷ�� ���׿�." << endl << endl;
//	}
//
//	// find  // �̷��� �̾Ƽ� ����� �� �� �ֽ��ϴ�.
//	auto item = hash4.find(3);
//	if (item != hash4.end()) {
//		cout << "[" << item->first << "," << item->second << "]" << endl << endl;
//	}
//	else {
//		cout << "ã�� ���� ��Ҵ� ��Ŷ�� ���׿�." << endl << endl;
//	}
//
//	// �Ʊ� hash[key]�� �ƹ��͵� �ȳ����� default�� �־�����. ***
//	// string�� Ȯ���غ��ô�.
//
//	hash4[5];
//
//	// �̰��� key�� �����ɱ��? // key�� ������ �ǳ׿�. value�� "".
//
//	auto item2 = hash4.find(5);
//	if (item2 != hash4.end()) {
//		cout << "[" << item2->first << "," << item2->second << "]" << endl << endl;
//		//if (item2->second == "") cout << "ssd";
//	}
//	else {
//		cout << "ã�� ���� ��Ҵ� ��Ŷ�� ���׿�." << endl << endl;
//	}
//	return 0;
//}
//
////Hash Map(unordered_map)
//
////https://woo-dev.tistory.com/106
////std::map�� ��Ұ� �ڵ����� ���� �������� ���ĵǴ� ���� Ž�� Ʈ��(BST) ����� map�̿���.
//// ��Ȯ�� ���ϸ� Red-black-tree ��� ������ ������ ���ߴ� ���� Ž�� Ʈ���� �����̴�.
////C++ 11���� std::unordered_map�̶�� �����̳ʰ� �����߰�, ������ std::map�� �޸� ���� Ž��Ʈ���� �ƴ� �ؽ� ���̺�� �����Ǿ� �ִ�. 
//// ������ ��Ҹ� �ڵ����� �������� ������ ����� �˻�, ����, ���� ������ ��������� ��� �ð��� �����ϴ�.
//
////�ؽ� ���̺�
//https://velog.io/@mooh2jj/Hash%EC%9D%98-%EA%B0%9C%EB%85%90-%EB%B0%8F-%EC%84%A4%EB%AA%85
//
//
