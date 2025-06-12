////�ٸ� Ŭ������ private �ɹ��� �����ϴ� ���
//
//// ������ �Լ� �����ϱ� ***
//
//// ������ �Լ�(friend function)�� 
////      C++���� Ư�� Ŭ������ ��� �Լ��� �ƴϸ鼭��, 
////      �ش� Ŭ������ private �Ǵ� protected ��� ������ �Լ��� 
////      ���� ������ �� �ֵ��� ���� �ܺ� �Լ��� �ǹ��մϴ�
//
//#include <iostream> 
//using namespace std;
//class Complex
//{
//private:
//    int real;
//    int image;
//public:
//    Complex(int r = 0, int I = 0);
//    void Show() const;
//
//	// �ܺ��Լ��� Complex Ŭ������ private ����� ������ �� �ֵ��� friend�� ���
//    friend Complex printAdd(Complex& c1, Complex& c2);
//    friend void printArr(Complex *pCom);
//};
//
//Complex::Complex(int r, int i) : real(r), image(i) { }
//void Complex::Show() const { cout << "( " << real << " + " << image << "i )" << endl; } 
//
//// �ܺ� �Լ�
//// real, image�� ComplexŬ������ private ��� -> �� �Լ��� ������� ����Ͽ� ����
//Complex printAdd(Complex& c1, Complex& c2)
//{
//    Complex obj (c1.real + c2.real, c1.image + c2.image);   //private �ɹ�����
//    return obj;
//}
//
//void printArr(Complex* pCom)
//{
//    for (int i = 0; i < 4; i++)
//        pCom[i].Show();
//}
//
//void main()
//{
//    Complex x(1, 1);
//    Complex y(2, 1);
//
//    Complex z = printAdd(x, y);
//    z.Show();
//
//
//    Complex arr[4] = {
//         Complex(2, 4),
//         Complex(4, 8),
//         Complex(8, 16),
//         Complex(16, 32),
//    };
//
//    printArr(arr);
//}
//
////������ �Լ��� ������ ���� ��Ȳ���� �ַ� ���˴ϴ�.
//// 
////  �ܺ� �Լ��� Ŭ������ ���� �����͸� ���� �����ؾ� �� ��
////  �� �� �̻��� Ŭ������ ������ private ����� �����ؾ� �� ��(��: ������ �����ε�, �� Ŭ������ ������ �ջ� ��)
////  Ŭ������ ��� �Լ��� �����ϱ⿡�� ������������, Ŭ������ ���� �����Ϳ� �����ؾ� �ϴ� ���
//
////������ �Լ��� Ư¡
////
////  Ŭ������ ��� �Լ��� �ƴϹǷ�, ��ü ���� ȣ���� �� ����
////  Ŭ������ private, protected ����� ���� ����
////  friend ������ Ŭ���� ���� ��𼭵� ����
////  friend�� ������ �Լ��� ���� ������ ������, ��ȣ��(friend�� friend)�̳� ��ӵ��� ����
////  ������ ����� ĸ��ȭ(���� ����) ��Ģ�� ��ĥ �� �����Ƿ� ���� �ʿ�