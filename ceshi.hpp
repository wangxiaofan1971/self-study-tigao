////#include<iostream>
////using namespace std;
////学习目标：
////
////* 掌握类模板成员函数分文件编写产生的问题以及解决方式
////
////
////
////问题：
////
////* 类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
////
////
////解决：
////
////* 解决方式1：直接包含.cpp源文件
////* 解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
//#include<iostream>
//using namespace std;
//#include<string>
//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name, T2 age);
//	//{
//	//	this->age = age;
//	//	this->name = name;
//	//}
//	void show();
//	//{
//	//	cout << this->name << this->age;
//	//}
//	T1 name;
//	T2 age;
//};
//template<class T1, class T2>
//person<T1, T2>::person(T1 name, T2 age)
//{
//	this->age = age;
//	this->name = name;
//}
//
//template<class T1, class T2>
//void person<T1, T2>::show()
//{
//	cout << this->name << this->age;
//}
//
////int main()
////{
////	person<string,int> a("孙悟空", 16);
////	a.show();
////	system("pause");
////	return 0;
////}