//// ���ø� �μ� ��ø ( ���ø� Ŭ������ ���ø� �μ��� ��� )
////	���ø� Ŭ������ �ϳ��� Ÿ���̴�.
////	���ø����� ��ø�� �����ϴ�
//
//// ���ø� ������ Ÿ�� �μ��� �� �ٸ� ���ø��� �� �� �ִ�.
//
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class PosValue
//{
//private:
//	int x, y;
//	T value;
//
//public:
//	PosValue() : x(0), y(0), value() {}
//	PosValue(int x, int y, T v) : x(x), y(y), value(v) {}
//	void outvalue()
//	{
//		cout << x << " " << y << " " << value << endl;
//	}
//};
//
//template <typename T>
//class Wrapper
//{
//private:
//	T member;
//public:
//	void set(T v) { member = v; }
//	T get() { return member; }
//};
//
//int main()
//{
//	//                   > > : ���� �����Ϸ��� ��� �����ڶ� �򰥷��ؼ� �� �����
//	Wrapper<PosValue<char> > wrap;				// ���ø� Ÿ�� ���
//	wrap.set(PosValue<char>(10, 10, 'a'));
//
//	PosValue<char> pc = wrap.get();
//	pc.outvalue();
//}
//
////���ø��� ��ø�Ҷ���
////�� ��ȣ ���̿� ������ �־� �����ڰ� �ƴ��� �и��� �ؾ��Ѵ�. > > 
////�ֽ� ����� ��Ʃ��������� 
////�̷� ������ ����༭ ������� �ٿ����� ������ ������ �ʴ´�.
//
////��ø�� �����Ϸ��� 
////�� Ŭ������ ���� Ÿ�Կ� ���� �� �۵��ϵ��� ����� �Ϲ�ȭ�Ǿ�� �ϸ� 
////������, ���� ������ �� ��� ��ġ�� ����� ���õǾ� �־�� �Ѵ�.
//
//
//// ���ø� ���ø� �Ķ���� -----------------------------------------------
////		���ø� �Ķ���ͷ� ���ø��� ����ϴ� ��
////		template<..., template<TemplateTypeParams> class ParameterName, ...>
