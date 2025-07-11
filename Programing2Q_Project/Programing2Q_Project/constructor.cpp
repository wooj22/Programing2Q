//생성자와 소멸자는 
//	   클래스 객체가 생성 및 소멸될 때 '자동으로 호출'되는 특별한 함수.

//생성자
//		객체가 생성될 때 자동으로 호출되는 함수. 
// 
//		함수 이름이 클래스 이름과 같다. 반환 형식이 없다. ***
//		클래스이름() { }
// 
//		별도 생성자를 만들지 않으면, 컴파일러가 알아서 만들어서 넣는다.(기본생성자)

//소멸자
//		소멸될 때 자동으로 호출되는 함수. 
//		~클래스이름() { }

//생성자는 객체 초기화, 소멸자는 객체 해제를 위해 사용한다.
//		생성자에 매개변수를 사용해 편리하게 초기화 

//기본생성자 ***
//		만들지 않아도 자동 생성 - 기본생성자
//		하나라도 만들면 자동생성 안 함 ***


//객체를 초기화 할 때, 특정 수치로 초기화 하고싶다면 ? -----------------------------

//생성자 오버로드
//		
//		생성자도 함수의 일종이므로, 오버로딩이 가능하고 디폴트 값 설정이 가능
//		소멸자는 오버로드 불가, 즉 하나 뿐. 



//연습) 생성자 추가하기, 소멸자 추가하기 -------------------------------------------
//		매개변수 하나인 생성자 추가로 초기화하기.
//		매개변수 두개인 생성자 추가로 초기화하기.

//#include <iostream>
//using namespace std;
//
//class SimpleClass
//{
//	int num1;
//	int num2;
//public:
//	void ShowData() { cout << num1 << ' ' << num2 << endl; }
//};

/*
class SimpleClass
{
	int num1;
	int num2;

public:
	SimpleClass()				//생성자
	{
		num1 = 0;	num2 = 0;
	}
	~SimpleClass()				//소멸자
	{
	}

	SimpleClass(int n)						//생성자 - 오버로딩이 가능하고 디폴트 값 설정이 가능
	{
		num1 = n;	num2 = 0;
	}
	SimpleClass(int n1, int n2)				//생성자 오버로딩
	{
		num1 = n1; num2 = n2;
	}

	//SimpleClass(int n1 = 0, int n2 = 0)	//디폴트 값 설정
	//{
	//	num1 = n1; num2 = n2;
	//}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};
*/

//int main(void)					//생성자 호출 확인하기 
//{
//	SimpleClass sc1;			//SimpleClass sc1(); 처럼 사용하지 않는다. ***
//	sc1.ShowData();
//
//	SimpleClass sc2(100);		//C++11 자료형의 초기화  ex) int a(1);
//	sc2.ShowData();
//
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//
//	return 0;
//}


/*
// Monster 클래스 작성해 보세요. -------------------------------------
//	  생성자와 소멸자를 정의하세요.
//	  생성시 hp 값을 설정하도록 생성자를 추가 구현하세요.
//	  monster 객체를 hp 100 으로 생성하세요.

class Monster {
public:
	int hp = 0;
	Monster()	{			//생성자 함수 (초기화)
	}
	~Monster()	{			//소멸자 함수 (종료)
	}
	Monster(int _hp) {		//생성자 함수 오버로딩
		hp = _hp;
	}
};

int main(void)
{
	Monster mon1;
	cout << mon1.hp << endl;

	Monster mon2(100);		//생성자() 사용
	cout << mon2.hp << endl;
}

//매개변수있는 생성자를 만들면, 기본생성자는 알아서 만들어지지 않는다. ***

*/
