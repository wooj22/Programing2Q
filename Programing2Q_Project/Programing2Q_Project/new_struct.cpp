//#include <iostream>
//using namespace std;
//
//struct Person {
//    char name[30];
//    int age;
//    char gender;
//};
//
//int main()
//{
//    // 1. ����ü ���� �Ҵ�
//    Person* ps = new Person;
//    strcpy_s(ps->name, "Jake");
//    ps->age = 17;
//    ps->gender = 'M';
//
//    // �������� �ϸ� ��Ʈ������ ��밡��
//    cout << "- name  : " << (*ps).name << endl;
//    cout << "- age   : " << (*ps).age << endl;
//    cout << "- gender: " << (*ps).gender << endl;
//
//    delete ps;
//
//    // 2. ����ü ���� �迭 �ʱ�ȭ. Reuse
//    ps = new Person[3]{
//        {"Mike", 15, 'M'},
//        {"Jinn", 16, 'F'},
//        {"Waldo", 17, 'M'}
//    };
//
//    for (size_t i = 0; i < 3; i++)
//    {
//        cout << "\n-----------------------";
//        cout << " name  : " << (ps + i)->name << endl;
//        cout << " age   : " << (ps + i)->age << endl;
//        cout << " gender: " << (ps + i)->gender << endl;
//    }
//
//    delete[] ps;    // �̹��� �迭�̴ϱ� []�� �迭 �޸� ��ȯ
//
//    return 0;
//}