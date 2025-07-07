////��ȯ ����(circular reference) ����
//// 
////      std::shared_ptr�� ����� �� �߻��� �� �ִ� '�޸� ����(memory leak)'�� �ֿ� ���� �� �ϳ�
//
//#include <iostream>
//#include <memory>
//
//class A;
//
//class B {
//public:
//    std::shared_ptr<A> a;   //
//    ~B() { std::cout << "B destroyed\n"; }
//};
//
//class A {
//public:
//    std::shared_ptr<B> b;   //
//    ~A() { std::cout << "A destroyed\n"; }
//};
//
//int main() {
//    std::shared_ptr<A> a = std::make_shared<A>();
//    std::shared_ptr<B> b = std::make_shared<B>();
//
//    a->b = b;
//    b->a = a;  // ��ȯ ���� �߻�
//
//    // a�� b�� ��� ��� �� ���������, A�� B�� ������ �޸𸮿� ���� ����
//
//    return 0;
//}
//
////��ȯ ����(circular reference) ����
//
//#include <iostream>
//#include <memory>
//#include <vector>
//
//class Person;  // ���� ����
//
//class Group {
//public:
//    std::vector<std::shared_ptr<Person>> members;   //
//    ~Group() { std::cout << "Group destroyed\n"; }
//};
//
//class Person {
//public:
//    std::vector<std::shared_ptr<Group>> groups;     //
//    ~Person() { std::cout << "Person destroyed\n"; }
//};
//
//int main() {
//    // Person�� Group ��ü ����
//    std::shared_ptr<Person> p1 = std::make_shared<Person>();
//    std::shared_ptr<Person> p2 = std::make_shared<Person>();
//    std::shared_ptr<Group> g1 = std::make_shared<Group>();
//    std::shared_ptr<Group> g2 = std::make_shared<Group>();
//
//    // ���θ� �����Ͽ� ��ȯ ���� �߻�
//    p1->groups.push_back(g1);
//    p2->groups.push_back(g2);
//    g1->members.push_back(p1);
//    g2->members.push_back(p2);
//
//    // p1, p2, g1, g2�� �Ҹ�Ǿ�� ������, ��ȯ ������ ���� �޸� ���� �߻�
//
//    return 0;
//}
//
////��ȯ ����(circular reference) ����
//
//#include <iostream>
//#include <memory>
//#include <vector>
//
//class Light;  // ���� ����
//
//class Camera {
//public:
//    std::vector<std::shared_ptr<Light>> lights;     // ���� Light ��ü�� ����
//    ~Camera() { std::cout << "Camera destroyed\n"; }
//};
//
//class Light {
//public:
//    std::shared_ptr<Camera> camera;             // ���� Ȱ��ȭ�� Camera�� ����
//    ~Light() { std::cout << "Light destroyed\n"; }
//};
//
//int main() {
//    // Camera�� Light ��ü ����
//    std::shared_ptr<Camera> cam = std::make_shared<Camera>();
//    std::shared_ptr<Light> light1 = std::make_shared<Light>();
//    std::shared_ptr<Light> light2 = std::make_shared<Light>();
//
//    // ��ȯ ���� �߻�
//    cam->lights.push_back(light1);
//    cam->lights.push_back(light2);
//    light1->camera = cam;
//    light2->camera = cam;
//
//    // cam, light1, light2�� ��ȯ ������ ���� �Ҹ���� ����
//
//    return 0;
//}