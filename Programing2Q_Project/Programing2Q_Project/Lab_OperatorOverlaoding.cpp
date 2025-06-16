///// 연산자 오버로딩
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class CMyData {
//public:
//    int m_nData = 0;
//
//public:
//    CMyData(int nParam = 0) : m_nData(nParam) {}
//
//    // + 단항
//    CMyData operator+() {
//        this->m_nData = std::abs(m_nData);
//        return CMyData(this->m_nData);
//    }
//
//    // + 이항
//    CMyData operator+(const CMyData& obj) const {
//        return CMyData(m_nData + obj.m_nData);
//    }
//
//    // ++ 선행
//    CMyData& operator++() {
//        ++m_nData;
//        return *this;
//    }
//
//    // ++ 후행
//    CMyData operator++(int) {
//        CMyData temp = *this;
//        m_nData++;
//        return temp;
//    }
//
//    // <
//    bool operator<(const CMyData& obj) const {
//        return m_nData < obj.m_nData;
//    }
//
//    // >
//    bool operator>(const CMyData& obj) const {
//        return m_nData > obj.m_nData;
//    }
//};
//
//void main()
//{
//	CMyData a(-10);
//	CMyData b(5);
//
//	CMyData c = a + b;
//	c = +a;
//	c = ++a;
//	c = a++;
//
//	cout << (a > b) << endl;
//}
//
////-------------------------------------------------------------------------------- -
////주요 연산자 오버로드에 대한 사용예시
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class MyClass {
//private:
//	int data;
//public :
//	MyClass(int val = 0) : data(val) {};
//	~MyClass() = default;
//
//	/* --------------- 연산자 오버로딩 ------------------*/
//	// 산술 연산자 + - * %
//	MyClass operator+(const MyClass& rhs) const {
//		return MyClass(data + rhs.data);
//	}
//
//	MyClass operator-(const MyClass& rhs) const {
//		return MyClass(data - rhs.data);
//	}
//
//	MyClass operator*(const MyClass& rhs) const {
//		return MyClass(data * rhs.data);
//	}
//
//	MyClass operator%(const MyClass& rhs) const {
//		if (rhs.data == 0) {
//			cout << "Mod by zero!" << endl;
//			return MyClass(0);
//		}
//		return MyClass(data % rhs.data);
//	}
//
//	// 비교 연산자 < > <= >= == !=
//	bool operator<(const MyClass& rhs) const { return data < rhs.data; }
//	bool operator>(const MyClass& rhs) const { return data > rhs.data; }
//	bool operator<=(const MyClass& rhs) const { return data <= rhs.data; }
//	bool operator>=(const MyClass& rhs) const { return data >= rhs.data; }
//	bool operator==(const MyClass& rhs) const { return data == rhs.data; }
//	bool operator!=(const MyClass& rhs) const { return data != rhs.data; }
//
//	// 부호 연산자 + -
//	MyClass operator+() {
//		data = std::abs(data);
//		return MyClass(data);
//	}
//
//	MyClass operator-() {
//		data = -data;
//		return MyClass(data);
//	}
//
//	// 함수 객체 ()
//	int operator()(int val) const {
//		return data * val;
//	}
//
//	// 출력 연산자 <<
//	friend ostream& operator<<(ostream& os, const MyClass& obj) {
//		os << obj.data;
//		return os;
//	}
//};
//
//class ArrayClass {
//private:
//	int* arr;
//	int size;
//
//public:
//	ArrayClass(int size = 1, int val = 0) : size(size) {
//		arr = new int[size];
//		for (int i = 0; i < size; ++i) arr[i] = val;
//	}
//
//	~ArrayClass() {
//		delete[] arr;
//	}
//
//	ArrayClass(const ArrayClass& other) : size(other.size) {
//		arr = new int[size];
//		for (int i = 0; i < size; ++i)
//			arr[i] = other.arr[i];
//	}
//
//	int* GetArr() { return arr; }
//	
//	/* --------------- 연산자 오버로딩 ------------------*/
//	// 배열 연산자 []
//	int& operator[](int index) {
//		if (index < 0 || index >= size) {
//			cout << "Invalid index: " << index << endl;
//			static int dummy = -1;
//			return dummy;
//		}
//		return arr[index];
//	}
//
//	// 출력 연산자 <<
//	friend ostream& operator<<(ostream& os, const ArrayClass& ac) {
//		os << "[ ";
//		for (int i = 0; i < ac.size; ++i)
//			os << ac.arr[i] << " ";
//		os << "]";
//		return os;
//	}
//};
//
//class SmartPrt {
//private:
//	ArrayClass* arrPtr;
//
//public:
//	SmartPrt(ArrayClass* ptr) : arrPtr(ptr) {}
//	~SmartPrt() { delete arrPtr; }
//
//	// 포인터 연산자 * ->
//	ArrayClass& operator*() const { return *arrPtr; } // 객체 반환
//	ArrayClass* operator->() const { return arrPtr; } // raw 포인터 반환
//};
//
//int main() 
//{
//	// MyClass 테스트
//	MyClass a(5), b(10);
//	cout << "a + b = " << a + b << endl;
//	cout << "a - b = " << a - b << endl;
//	cout << "a * b = " << a * b << endl;
//	cout << "a % b = " << a % b << endl;
//
//	cout << "+a = " << +a << ", -a = " << -a << endl;
//	cout << "a == b? " << (a == b) << endl;
//	cout << "a < b? " << (a < b) << endl;
//
//	cout << "a(5) = " << a(5) << endl;
//
//	// ArrayClass & SmartPrt 테스트
//	ArrayClass arr(3, 7);  // [7 7 7]
//	cout << "arr: " << arr << endl;
//
//	arr[1] = 42;
//	cout << "arr after arr[1] = 42: " << arr << endl;
//
//	SmartPrt ptr(new ArrayClass(2, 9));
//	cout << "ptr->: " << *ptr << endl;
//	ptr->GetArr()[0] = 88;
//	cout << "ptr->: " << *ptr << endl;
//}