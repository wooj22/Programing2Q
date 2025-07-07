//// shared_ptr
////  �ϳ��� Ư�� ��ü�� �����ϴ� ����Ʈ �����Ͱ� �� �� �������� �����ϴ� ����Ʈ ������
////	���� ���� ����Ʈ �����Ͱ� �ϳ��� ��ü�� '���� ����' �ؾ� �ϴ� ���
////	Ư�� �ڿ��� �� ���� ��ü���� ����Ű������ ������ ������, 
////  �� ���� ���� 0 �� �Ǹ� ��μ� ������ �����ִ� ����� ������.
//
//// ���� Ƚ��(reference count)
////  �̷��� �����ϰ� �ִ� ����Ʈ �������� ������ ���� Ƚ��(reference count)��� �մϴ�.
////  ���� Ƚ���� Ư�� ��ü�� ���ο� shared_ptr�� �߰��� ������ 1�� �����ϸ�, ������ ���� ������ 1�� �����մϴ�.
////  ���� ������ shared_ptr�� ������ ���Ͽ� ���� Ƚ���� 0�� �Ǹ�, delete Ű���带 ����Ͽ� �޸𸮸� �ڵ����� �����մϴ�.
//
//#include <iostream>
//#include <memory>
//#include <vector>
//using namespace std;
//
//class A {
//    int* data;
//public:
//    A() {
//        data = new int[100];
//        std::cout << "����" << std::endl;
//    }
//    ~A() {
//        std::cout << "�Ҹ�" << std::endl;
//        delete[] data;
//    }
//
//    void func() {}
//};
//
//
//int main()
//{
//    shared_ptr<int> ptr1(new int(5));       // int�� shared_ptr�� ptr1�� �����ϰ� �ʱ�ȭ��.
//
//    cout << ptr1.use_count() << endl;       // 1  //���� Ƚ��
//
//    auto ptr2(ptr1);                        // ���� �����ڸ� �̿��� �ʱ�ȭ
//    cout << ptr1.use_count() << endl;       // 2
//
//    auto ptr3 = ptr1;                       // ������ ���� �ʱ�ȭ
//    cout << ptr1.use_count() << endl;       // 3
//
//
//    // use_count(), reset() -------------------------------------------------------
//
//    shared_ptr<A> p = make_shared<A>();
//    cout << "���� ������ �� : " << p.use_count() << endl; // 1
//    auto han = p;
//    cout << "���� ������ �� : " << p.use_count() << endl; // 2
//    han.reset();                                                // shared_ptr�� han�� ������.
//    cout << "���� ������ �� : " << p.use_count() << endl; // 1
//
//
//    // get() // �����ϴ� ��ü�� �ּҸ� ��ȯ -----------------------------------------
//
//    shared_ptr<A> spA(new A());
//    A* pA = spA.get();          // spA�� �����ϴ� ��ü�� �ּҸ� ��ȯ
//
//    spA.get()->func();          // spA�� �����ϴ� ��ü�� �޼��忡 ���� #1    
//    (*spA).func();              // spA�� �����ϴ� ��ü�� �޼��忡 ���� #2    
//    spA->func();                // spA�� �����ϴ� ��ü�� �޼��忡 ���� #3
//
//
//    // use_count() //���� ���� �������� ���� ��ȯ -----------------------------------
//
//    shared_ptr<A> p1(new A());
//    shared_ptr<A> p2(p1);               // p2 ���� ������ ��ü A �� ����Ų��.
//    cout << p1.use_count() << endl;     //??? 2
//    cout << p2.use_count() << endl;     //??? 2
//
//
//    //vector �Ҹ��� ȣ���� ���� �̷�������� ���캸�� -------------------------------
//
//    vector<shared_ptr<A>> vec;
//
//    vec.push_back(shared_ptr<A>(new A()));
//    vec.push_back(shared_ptr<A>(vec[0]));
//    vec.push_back(shared_ptr<A>(vec[1]));
//
//    cout << "ù ��° �Ҹ�!" << endl;
//    vec.erase(vec.begin());
//
//    cout << "���� ���� �Ҹ�!" << endl;
//    vec.erase(vec.begin());
//
//    cout << "������ ���� �Ҹ�!" << endl;
//    vec.erase(vec.begin());
//
//    cout << "���α׷� ����!" << endl;
//}
//
///*
//// make_shared ---------------------------------------------------------------------------------------
//
//    auto p1 = std::make_shared<A>();
//
//    //new �� ���� ��뿡 ����, make �Լ��� ����ϸ�
//    //�ҽ� �ڵ��� �ߺ��� �������� ���� �������� Ȯ���Ǹ�, std::make_shared�� ��� �� �۰� ���� �ڵ尡 ����ȴ�.
//
//    //std::shared_ptr�� ���ؼ��� make �Լ��� �������� ��찡 �ִµ�,
//    //  ù°��, Ŀ���� �޸� ������ ���� Ŭ������ �ٷ�� ����
//    //  ��°, �޸𸮰� �˳����� ���� �ý��ۿ��� ū ��ü�� �ٷ��,
//    //      std::weak_ptr���� �ش� std::shared_ptr���� ���� ��Ƴ��� ����̴�.
//
//    //make �Լ��� ����� �Ұ��� �Ǵ� �������� ���δ�
//    //  Ŀ���� �����ڸ� ���� �ؾ� �ϴ� ���� �߰�ȣ �ʱ�ġ�� �����ؾ� �ϴ� ��찡 �ִ�.
//
//
//// garbage collection �� ��
//
//    shared_ptr�� garbage collection ó��
//    ������ �����ϴ� �ڿ��� �� �̻� �ʿ���� �� �ڵ����� �������� �Ӹ� �ƴ϶�,
//    ��� ������ �����Ǵ����� �� �� �ִ�. ***
//
//
//// shared_ptr Ư¡
//    std::shared_ptr�� �Ϲ� �������� 2�� ũ�⸦ ���� �ȴ�.
//        - ���������� �ڿ��� ���� �����Ϳ� �ش� �������� ���۷��� ī��Ʈ �� ���� ����
//    ���۷��� ī��Ʈ�� �����ϱ� ���� �޸𸮴� �������� �Ҵ�ȴ�.
//        - �ش� ������Ʈ�� ������ �����ȴ�. (control block)
//    ���۷����� ������Ű�� ���ҽ�Ű�� ������ �ݵ�� ������(atomic)�̾�� �Ѵ�.
//        - ���� ���� �����忡�� ���ÿ� �а� ���� ������ �߻��� �� �ֱ� �����̴�.
//
//
//// control block ***
//
//    �����δ� ���۷��� ī��Ʈ ���� ���� ���� std::shared_ptr�� �����ϱ� ���� ������
//    control block �̶�� �ؼ� ���� �Ҵ��� ����,
//    �� ���� ����Ű�� �����͸� ��� �ִ� ������ �����ȴ�.
//
//// ��Ʈ�� ����� �������� ������ ���θ� �����ϴ� ���� �Ʒ��� ��Ģ�� ������.
//
//    std::make_shared �� �׻� ��Ʈ�� ����� �����Ѵ�.
//    std::shared_ptr�� std::unique_ptr �κ��� ������ ���.
//    std::shared_ptr�� �����ڰ� raw pointer�� ���ڷ� ȣ��Ǿ��� ���.
//
//    ������ ��Ģ ���� ***
//        ���� raw pointer�� �� ���� std::shared_ptr�� ���� ���, �ߺ� �����ϴ� ���� �߻�
//        �ٸ� ������ �����ؼ� �ѱ��� ����, new�� �ٷ� �ѱ�� ������ �ʱ�ȭ��
//        ���� ��ü�� ���� �� �� �̻��� ��Ʈ�� ����� ����� ������ ���� �� �ִ�.
//
//        // ���� �������� �ʰ� �ٷ� new�� �̿��� �ѱ�
//        std::shared_ptr<Widget> spw1(new Widget, loggingDel);
//        //spw2�� spw1�� ���� ��Ʈ�� ����� ��.
//        std::shared_ptr<Widget> spw2(spw1);
//
//
//// this ������ ---------------------------------------------------------------------------------------
//    �ڽ��� ����Ű�� �߰����� shared_ptr �ν��Ͻ��� ������ �� �ֵ��� �Ϸ���
//        std::enable_shared_from_this �� ��ӹް�,
//        shared_from_this()�� ����Ͽ� ���� ��ü�� ����Ű�� shared_ptr�� ����ϴ�.
//
//    this�� �߰��ϱ� ����, �̹� �ܺο��� �� ��ü�� ����Ű�� std::shared_ptr�� �־��ٸ�
//    �ϳ��� ��ü�� ���� �� ���� ��Ʈ�� ��� �����ϰ� �ǰ�, �ߺ� �����ϴ� ���� �߻�.
//    this �����ͷκ��� �����ϰ� std::shared_ptr�� ������ �� �ִ� ����� �ʿ��ϰ� ��
//
//// enable_shared_from_this -------------------------------------------
//
//    // shared_from_this() �Լ��� ���� ������Ʈ�� ���� ��Ʈ�� ����� �ִ��� �˻��� ��,
//    // �ش� ��Ʈ�� ����� ����Ű�� std::shared_ptr �����͸� �����Ѵ�.
//
//    #include <iostream>
//    #include <memory>
//
//    class A : public std::enable_shared_from_this<A>        //
//    {
//        int* data;
//    public:
//        A() {
//            data = new int[100];
//            std::cout << "�ڿ��� ȹ����!" << std::endl;
//        }
//        ~A() {
//            std::cout << "�Ҹ��� ȣ��!" << std::endl;
//            delete[] data;
//        }
//
//        //std::shared_ptr<type> getPtr() { return std::shared_ptr<type>(this); } //���ο�  ��Ʈ�� ��
//
//        std::shared_ptr<A> get_shared_ptr() { return shared_from_this(); }  //������ ��Ʈ�� �� ���
//
//
//    };
//
//    int main()
//    {
//        std::shared_ptr<A> pa1 = std::make_shared<A>();     //�̹� shared_ptr�� �����ϰ� ���� ��
//        std::shared_ptr<A> pa2 = pa1->get_shared_ptr();     //
//
//        std::cout << pa1.use_count() << std::endl;
//        std::cout << pa2.use_count() << std::endl;
//    }
//
//
//
//// custom deleter ---------------------------------------------------------------------------------------
//
//    std::unique_ptr�� ���������� �⺻������ �ڿ� �ı��� delete�� �̿�, ���� custom deleter�� �����Ѵ�.
//    �ٸ� ���� std::shared_ptr�� ���
//    custom deleter�� Ÿ���� ������ ��ü�� Ÿ�Կ� ������ ��ġ�� �ʴ´�.
//
//    // custom deleter.
//    auto loggingDel = [](Widget* pw) {
//        delete pw;
//    };
//
//    // unique_ptr�� deleter�� Ÿ���� �������� Ÿ�Կ� ������ ��ģ��
//    std::unique_ptr<Widget, decltype(loggingDel)> upw(new Widget, loggingDel);
//
//    // shared_ptr�� �׷��� �ʴ�
//    std::shared_ptr<Widget> spw(new Widget, loggingDel);
//
//// ����, ���� custom deleter�� �ٸ� std::shared_ptr���� �ϳ��� �����̳ʿ� �ٰ��� ��� ������ �� �ִ�.
//
//    //custom deleters.
//    auto customDeleter1 = [](Widget* pw) { ... };
//    auto customDeleter2 = [](Widget* pw) { ... };
//
//    std::shared_ptr<Widget> pw1(new Widget, customDeleter1);
//    std::shared_ptr<Widget> pw2(new Widget, customDeleter2);
//
//    //�� ���� ���� �� ����.
//    std::vector< std::shared_ptr<Widget> > vpw{ pw1, pw2 };
//*/
//
//
//// ��κ��� ���, std::shared_ptr�� ���� �ڿ��� lifetime�� �����ϱ⿡ ���� ���� �����̴�.
//// 
//// ������, ���� ��Ÿ�� �������� �� ��︰�ٴ� ������ �����̶� ��ٸ� 
//// std::unique_ptr�� ���� ������ �� �ִ�.
//// std::unique_ptr�� ������ raw pointer�� ���� �����ϸ�, std::shared_ptr�� �����ϱ⵵ ���� ����.
//
//// �� �� ���� std::shared_ptr�� �迭�� ���ؼ��� �������� �ʴ´�. (C++17 ����)
//// �迭�� ��� ��κ� std::vector, std::array, std::string ���� ���� ���� ���� �ξ� ����.
//
//
//
