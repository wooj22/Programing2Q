///// ������ �����ε�
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
//    // + ����
//    CMyData operator+() {
//        this->m_nData = std::abs(m_nData);
//        return CMyData(this->m_nData);
//    }
//
//    // + ����
//    CMyData operator+(const CMyData& obj) const {
//        return CMyData(m_nData + obj.m_nData);
//    }
//
//    // ++ ����
//    CMyData& operator++() {
//        ++m_nData;
//        return *this;
//    }
//
//    // ++ ����
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
////�ֿ� ������ �����ε忡 ���� ��뿹��
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
//	/* --------------- ������ �����ε� ------------------*/
//	// ��� ������ + - * %
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
//	// �� ������ < > <= >= == !=
//	bool operator<(const MyClass& rhs) const { return data < rhs.data; }
//	bool operator>(const MyClass& rhs) const { return data > rhs.data; }
//	bool operator<=(const MyClass& rhs) const { return data <= rhs.data; }
//	bool operator>=(const MyClass& rhs) const { return data >= rhs.data; }
//	bool operator==(const MyClass& rhs) const { return data == rhs.data; }
//	bool operator!=(const MyClass& rhs) const { return data != rhs.data; }
//
//	// ��ȣ ������ + -
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
//	// �Լ� ��ü ()
//	int operator()(int val) const {
//		return data * val;
//	}
//
//	// ��� ������ <<
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
//	/* --------------- ������ �����ε� ------------------*/
//	// �迭 ������ []
//	int& operator[](int index) {
//		if (index < 0 || index >= size) {
//			cout << "Invalid index: " << index << endl;
//			static int dummy = -1;
//			return dummy;
//		}
//		return arr[index];
//	}
//
//	// ��� ������ <<
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
//	// ������ ������ * ->
//	ArrayClass& operator*() const { return *arrPtr; } // ��ü ��ȯ
//	ArrayClass* operator->() const { return arrPtr; } // raw ������ ��ȯ
//};
//
//int main() 
//{
//	// MyClass �׽�Ʈ
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
//	// ArrayClass & SmartPrt �׽�Ʈ
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