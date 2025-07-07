//// weak_ptr 
////
////  ��ȯ ���� ������ �ذ��ϱ� ���� ��Ÿ�� ���� �ٷ� weak_ptr (���ΰ� ������ ����Ű�� shared_ptr�� ������ ���)
////  weak_ptr�� �ϳ� �̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü�� ���� ������ ����������,
////  �������� ������ ���Ե��� �ʴ� ����Ʈ �����ʹ�.
////
////  weak_ptr �� �����ڷ� shared_ptr �� �ٸ� weak_ptr �� �޽��ϴ�. 
////  ���� shared_ptr ���� �ٸ���, �̹� ���� ����� ������� ��ü���� �ǹ̸� ������ ������, 
////  ����� ������ �ּҰ����� weak_ptr �� ������ �� �� �����ϴ�.
//
//#include <iostream>
//#include <memory>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Player {
//public:
//    Player() : name("") {}
//    Player(std::string n) : name(n) {}
//    std::string name;
//};
//
//int main()
//{
//    //std::weak_ptr<Player> player(new Player("A"));              //error
//
//    std::shared_ptr<Player> owner = std::make_shared<Player>("p");     //���� ����
//    std::weak_ptr<Player> weakOwner = owner;                           //���� ���� (shared_ptr�� ����)
//
//    std::cout << owner.use_count() << '\n';     //???
//    //shared_ptr�� ��ü�� ������ ��, shared_ptr�� reference count�� �ø��� �ʴ´�. 
//
//    std::shared_ptr<Player> owner2(owner);
//    std::cout << weakOwner.use_count() << '\n';  //shared_ptr �� reference count
//
//    //���� ������ Ȯ���ϱ�. -----------------------------------------------  
//    auto ptr = weakOwner.lock();    // shared_ptr ��ȯ�޾� ��� ***
//    if (ptr != nullptr)             // nullptr Ȯ���� �����ϴ�.
//    {
//        std::cout << "!nullptr" << '\n';
//    }
//
//    owner = nullptr;
//    //ptr = nullptr;
//    //weakOwner.reset();
//    if (weakOwner.expired())        // ���� Ȯ�� // bool ��ȯ
//    {
//        std::cout << "expired" << '\n';
//    }
//
//
//    // weak_ptr ����ϱ� -----------------------------------------------
//
//    //���� �����ͷ� ���� ������ ����� 
//    std::shared_ptr<Player> lockedOwner = weakOwner.lock();
//
//    //get() ���� //���������� ����� �� ����. *** 
//    //      �����Ϳ� �������� ���ϸ� lock() ���� shared_ptr�� convert �� ��, 
//    //      shared_ptr�� get() �� ����ؾ� �Ѵ�.
//
//
//    //���� weak_ptr �Ǵ� shared_ptr�κ��͸� ���� ���� / ���� ������ �����ϸ�,
//    //shared_ptr �θ� convert�� �����ϴ�.
//    // 
//    //��� weak_ptr�� shared_ptr�� ������ �� shared_ptr�� weak reference count�� ������Ų��.
//    //��ü�� ���� �ֱ⿡ �����ϴ� strong reference count�� �ø��� �ʴ� �� ���̴�.
//
//
//}
//
////---------------------------------------------------------------------------------------
//// ������ sharedptr �� ��۸��� ���
//
//#include <iostream>
//#include <memory>
//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//class Player {
//public:
//    Player() : name("") {}
//    Player(std::string n) : name(n) {}
//    std::string name;
//};
//
//int main()
//{
//    auto spw = std::make_shared<Player>();
//    std::weak_ptr<Player> wpw(spw);
//
//    //���⼭ reference count�� 0�� �ǰ� Player�� �ı��ȴ�.  //wpw�� ��۸�(dangling)��.
//    spw = nullptr;
//
//
//    //���� wpw�� �̹� ��۸��Ǿ��ٸ�, spw1�� null�� �ȴ�.
//    std::shared_ptr<Player> spw1 = wpw.lock();
//    auto spw2 = wpw.lock(); //��������. auto�� ���� ��
//
//
//    //�̷��� �������� ���ڷ� �ѱ� ���, wpw�� ��۸��ƴٸ� std::bad_weak_ptr ���ܸ� ������. ***
//    std::shared_ptr<Player> spw3(wpw);
//}
//
////---------------------------------------------------------------------------------------
////weak_ptr�� ������ ���� ��쿡 ����ϸ� �����ϴ�. 
////    ��� ��ü�� �����ϵ�, ��ü�� ���� ������ �ְ� ���� ���� ���
////    �׸��� �Ź� Ư�� ��ü�� ID�� �÷��ǿ��� �˻��ϰ� ���� ���� ���
////    �׷��鼭 dangling pointer�� ���� ���輺�� ���ְ� ���� ��
//
//
//// vector ���� ��� -------------------------------------------
//
//#include <iostream>
//#include <memory>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Player {
//public:
//    Player() : name("") {}
//    Player(const std::string& s) : name(s) {}
//    std::string name;
//    std::weak_ptr<Player> other;        //
//
//
//    void set_other(std::weak_ptr<Player> o) {
//        other = o;
//    }
//    void access_other() {
//        std::shared_ptr<Player> o = other.lock();   //lock
//        if (o) { std::cout << "���� : " << this->name << " -> " << o->name << std::endl; }
//        else { std::cout << "�̹� �Ҹ��" << std::endl; }
//    }
//};
//
//int main()
//{
//    std::vector<std::shared_ptr<Player>> vec;
//    vec.push_back(std::make_shared<Player>("Player1"));
//    vec.push_back(std::make_shared<Player>("Player2"));
//
//    vec[0]->set_other(vec[1]);          //��ȣ ����
//    vec[1]->set_other(vec[0]);          //��ȣ ����
//
//    // pa �� pb �� ref count �� �״�δ�.
//    std::cout << "vec[0] ref count : " << vec[0].use_count() << std::endl;
//    std::cout << "vec[1] ref count : " << vec[1].use_count() << std::endl;
//
//    // weak_ptr �� �ش� ��ü �����ϱ�    //lock()
//    vec[0]->access_other();
//
//
//    // ���� ������ ���� ���� (vec[1] �Ҹ�)
//    vec.pop_back();
//    vec[0]->access_other();  // ���� ����!
//}
