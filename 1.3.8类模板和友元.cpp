//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class T1, class T2> class Person;
//
//
//template<class T1, class T2>
//void print2(Person<T1, T2>&p)
//{
//	cout << p.mage << endl << p.mname;
//}
//
//
//template<class T1,class T2>
//class Person
//{
//	friend void print(Person<T1, T2>&p)
//	{
//		cout << p.mage << endl << p.mname;
//	}
//	friend void print2<>(Person<T1, T2>&p);//模板函数加一个空模板函数列表
//public:
//	Person(T1 name, T2 age)
//	{
//		this->mname = name;
//		this->mage = age;
//	}
//private:
//	T1 mname;
//	T2 mage;
//};
//
//
//int main()
//{
//	Person<string, int>p("tom", 999);
//	print(p);
//	print2(p);
//	system("pause");
//	return 0;
//}