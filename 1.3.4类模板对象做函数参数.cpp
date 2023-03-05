//#include<iostream>
//#include<string>
//using namespace std;
////1. 指定传入的类型-- - 直接显示对象的数据类型
//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name,T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void show()
//	{
//		cout << this->age << endl;
//		cout << this->name << endl;
//	}
//	T1 name;
//	T2 age;
//};
//void test1(person<string, int>&a)
//{
//	a.show();
//}
//
//
////2. 参数模板化-- - 将对象中的参数变为模板进行传递
//template<typename T1,typename T2>
//void test2(person<T1,T2>&a)
//{
//	cout << typeid(T1).name();
//	cout << typeid(T2).name();
//	a.show();
//}
//
////3. 整个类模板化-- - 将这个对象类型 模板化进行传递
//template<typename T>
//void test3(T&a)
//{
//	cout << typeid(T).name();
//	a.show();
//}
//
//
//int main()
//{
//	string name = "孙悟空";
//	int age = 16;
//	person<string, int>a(name, age);
//	test1(a);
//	test2(a);
//	test3(a);
//	system("pause");
//	return 0;
//}