// 템플릿 매개변수의 디폴트 값
// 타입 매개변수도 변수이기 때문에 디폴트 값 지정이 가능하다.
//#include <iostream>
//using namespace std;
//
//template <typename T = int>		// 디폴트 템플릿 인수 int
//class MyClass
//{
//	T data;
//public:
//	MyClass(T a) : data(a) {}
//	void Prn() { cout << data << endl; }
//};
//
//int main()
//{
//	//MyClass obj1(1.5);		// 인수추론, C++17(난 아님..
//	MyClass<> obj2(1.5);		//<>	// 디폴트(기본값) 사용
//	obj2.Prn();
//}


// 템플릿[template] 매개변수의 디폴트 값 템플릿 매개변수로 초기화하기
//#include <iostream>
//#include <string>
//
//template <typename T>
//struct Compare {
//	bool operator()(const T& a, const T& b) const { return a < b; }
//};
//
//// typename Comp = Compare<T>
//// Comp 자료형은 T의 입력받은 템플릿 매개변수 T에 따라 Compare<T>자료형으로 결정된다.
//template <typename T, typename Comp = Compare<T>>  
//T Min(T a, T b) {
//	Comp comp;				// 원소 비교, Comp 라는 객체가 이를 수행 
//	if (comp(a, b)) {
//		return a;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 3, b = 5;
//	std::cout << "Min " << a << " , " << b << " :: " << Min(a, b) << std::endl;
//
//	//Min(a, b)로 인해 인스턴스화되는 템플릿 클래스를 작성해보세요.
//
//	std::string s1 = "abc", s2 = "def";
//	std::cout << "Min " << s1 << " , " << s2 << " :: "
//		<< Min(s1, s2) << std::endl;
//}
//
//

