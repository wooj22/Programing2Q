#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

// 함수 타입 : 함수 원형에서 함수 이름이랑 매개변수 이름 빼면 됨
// void(int) type
void print(int n)
{
	cout << n << " ";
}

struct Print {
	// void(int) type
	void operator()(int n) { cout << n << " "; }
};


int main()
{
	int arr[] = { 2,4,1,2,4 };
	vector<int> v(arr, arr+5);


	// sort
	sort(v.begin(), v.end());

	// print
	for (auto& it : v)
	{
		cout << it << " ";
	}

	// for each
	for_each(v.begin(), v.end(), print);
	for_each(v.begin(), v.end(), Print());

	// 함수 객체
	function<void(int)> p = print;
	function<void(int)> ps = Print();

	// 람다
	[]() {cout << "heollo" << endl; };
	[](int x) {cout << x << endl; };
	[](int x) {return x % 2; };
	[](int x, int y) {return x + y; };

	return 0;
}