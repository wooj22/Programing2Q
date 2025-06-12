//#include <iostream>
//#include <string>
//
//// static�� ��ġ�� ���� �����ڿ� �Ҹ����� ȣ�� ������ �ٸ���. => �����ϱ� �����
//
//struct Logger {
//    static int counter;   // ��ü ���� ī����
//    int id;               // �ν��Ͻ� ���� ID
//    std::string name;
//
//    Logger(const std::string& n)
//        : id(++counter), name(n)
//    {
//        std::cout << "Construct [" << id << "]: " << name << "\n";
//    }
//    Logger(const Logger& other)
//        : id(++counter), name(other.name)
//    {
//        std::cout << "Copy-construct [" << id << "] from [" << other.id << "]: " << name << "\n";
//    }
//    Logger(Logger&& other) noexcept
//        : id(++counter), name(std::move(other.name))
//    {
//        std::cout << "Move-construct [" << id << "] from [" << other.id << "]: " << name << "\n";
//    }
//    ~Logger() {
//        std::cout << "Destruct  [" << id << "]: " << name << "\n";
//    }
//};
//
//// static ��� �ʱ�ȭ
//int Logger::counter = 0;
//
//// ���� ����
//Logger global_logger("Global");
//
//Logger byValueFunc(Logger param) {
//    std::cout << "  inside byValueFunc()\n";
//
//    // �Ű����� param(id�� ����/�̵� ���� �� �ڵ� ����)
//    Logger local("Local");
//
//    // static ���� ����
//    static Logger static_local("StaticLocal");
//
//    std::cout << "  returning local\n";
//    return local;
//}
//
//int main() {
//    std::cout << "--- main ���� ---\n";
//
//    // 1) �Ϲ� ��������
//    Logger stack_var("StackVar");
//
//    // 2) �Լ� �Ķ����, ���ϰ� �׽�Ʈ
//    std::cout << "\n--- byValueFunc ȣ�� ---\n";
//    Logger ret = byValueFunc(stack_var);
//
//    std::cout << "\n--- main �� ---\n";
//    return 0;
//}