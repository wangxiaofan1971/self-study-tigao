//#include<iostream>
//using namespace std;
////�������κ�������
////*����ģ�����ùؼ��� template
////* ʹ�ú���ģ�������ַ�ʽ��**�Զ������Ƶ�����ʾָ������**
////* **ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����**
//void intswap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void doubleswap(double* a, double* b)
//{
//	double tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 1; 
//	int b = 2;
//	double A = 1.1;
//	double B = 2.2;
//	intswap(&a, &b);
//	doubleswap(&A, &B);
//	cout << a << "  " << b << endl;
//	cout << A << "  " << B << endl;
//	//����ģ��ʵ�ֽ���
//	//1���Զ������Ƶ�
//	mySwap(a, b);
//
//	//2����ʾָ������
//	mySwap<int>(a, b);
//	cout << a << "  " << b << endl;
//	mySwap(A, B);
//	cout << A << "  " << B << endl;
//	system("pause");
//	return 0;
//}