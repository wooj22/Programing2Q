////String Ŭ������ �����ϼ���. ( Ư���ɹ��Լ�, ������ �����ε� )
//
//// ������	
//// ���� ������
//// ���� ���� ������
//// ������ �Լ� + == <<
//
//#include <iostream>
//using namespace std;
//
//class String {
//private:
//	char* string = nullptr;
//public:
//    // constructor
//	String(const char* s)   // ��ȯ ������
//	{
//		string = new char[strlen(s) + 1];
//		strcpy_s(string, strlen(s) + 1, s);
//	}
//    ~String() { if (string != nullptr) delete[] string; }
//
//    String(const String& obj) {
//
//    }
//
//    String& operator=(const String& obj) {
//
//    }
//
//    operator char* () { return string; }        // ��ȯ �Լ�
//
//    // operator overload
//    String& operator+(const String& obj) {
//        // this�� obj�� string�� ��ģ �� String ��ü�� ��ȯ
//    }
//
//    void operator+=(const String& obj) {
//        // this�� string�� obj�� string�� ��ħ
//    }
//
//    bool operator==(const String& obj) {
//        // this�� string�� obj�� string == ��
//    }
//
//    // function
//    char* GetString() { return nullptr; }
//};
//
//int main(void)
//{
//    String s1 = "abc";
//    String s2 = "def";
//
//    String s3 = s1 + s2;
//
//    String s4 = ""; 
//    s4 += s3;
//
//    cout << s1 << " " << s2 << " " << s3 << " " << s4 << endl;
//    cout << (s1 == s4) << endl;
//
//    return 0;
//}