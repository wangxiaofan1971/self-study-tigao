//#include<iostream>
//using namespace std;
////调用规则如下：
////
////1. 如果函数模板和普通函数都可以实现，优先调用普通函数
////2. 可以通过空模板参数列表来强制调用函数模板
////3. 函数模板也可以发生重载
////4. 如果函数模板可以产生更好的匹配, 优先调用函数模板
//
//void myprint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<typename T>
//void myprint(T a, T b)
//{
//	cout << "调用的函数模板1" << endl;
//}
//
//template<typename T>
//void myprint(T a, T b,T c)
//{
//	cout << "调用的函数模板2" << endl;
//}
//void test1()
//{
//	int a = 10;
//	int b = 11;
//	myprint(a, b);
//}
//
//void test2()
//{
//	int a = 10;
//	int b = 11;
//	myprint<>(a, b);
//}
//
//void test3()
//{
//	int a = 10;
//	int b = 11;
//	myprint<>(a, b,100);
//}
//
//int main()
//{
//	//1、如果函数模板和普通函数都可以实现，优先调用普通函数
//	// 注意 如果告诉编译器  普通函数是有的，但只是声明没有实现，或者不在当前文件内实现，就会报错找不到
//	test1();
//	//2、可以通过空模板参数列表来强制调用函数模板
//	test2();
//	//3、函数模板也可以发生重载
//	test3();
//
//	//4、 如果函数模板可以产生更好的匹配,优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myprint(c1, c2); //调用函数模板
//	system("pause");
//	return 0;
//}