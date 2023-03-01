//#include<iostream>
//using namespace std;
////交换整形函数函数
////*函数模板利用关键字 template
////* 使用函数模板有两种方式：**自动类型推导、显示指定类型**
////* **模板的目的是为了提高复用性，将类型参数化**
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
//	//利用模板实现交换
//	//1、自动类型推导
//	mySwap(a, b);
//
//	//2、显示指定类型
//	mySwap<int>(a, b);
//	cout << a << "  " << b << endl;
//	mySwap(A, B);
//	cout << A << "  " << B << endl;
//	system("pause");
//	return 0;
//}