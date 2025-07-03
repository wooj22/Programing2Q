//// 클래스 템플릿의 멤버가 제대로 초기화 위해 기본 생성자 정의 가능하다
//// 클래스 템플릿의 멤버 초기화 ------------------------------
//
//#include <iostream>
//constexpr int MAX = 500;
//
//template<class T>
//class List {
//private:
//    T data[MAX];
//    size_t size;
//public:
//    List() :size(0), data() {}      // data 가 기본으로 초기화됨
//
//    void InsertData(const T& d) { data[size++] = d; }
//    void InsertData(const T&& d) { data[size++] = d; }
//    void DisPlay() const {
//        for (size_t i = 0; i < size; ++i)
//            std::cout << data[i] << " ";
//        std::cout << "\n";
//    }
//
//};
//
//int main() {
//    List<int> list;
//    list.InsertData(5);
//    list.InsertData(6);
//    list.InsertData(8);
//    list.InsertData(9);
//    list.DisPlay();
//}