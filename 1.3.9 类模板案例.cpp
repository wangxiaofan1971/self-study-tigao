#include<iostream>
#include<string>
using namespace std;
#include"myArray.hpp"
//案例描述:  实现一个通用的数组类，要求如下：
//
//
//
//	* 可以对内置数据类型以及自定义数据类型的数据进行存储
//	* 将数组中的数据存储到堆区√
//	* 构造函数中可以传入数组的容量√
//	* 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
//	* 提供尾插法和尾删法对数组中的数据进行增加和删除√
//	* 可以通过下标的方式访问数组中的元素√
//	* 可以获取数组中当前元素个数和数组的容量√
void printIntArray(arr<int>& arr) {
	for (int i = 0; i < arr.infnum(); i++) {
		cout << arr.indataarr[i] << " ";
	}
	cout << endl;
}



class Person {
public:
	Person() {}
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;

};
	
	void printPersonArray(arr<Person>& personArr)
{
	for (int i = 0; i < personArr.num; i++) 
	{
		cout << "姓名：" << personArr.indataarr[i].m_Name << " 年龄： " << personArr.indataarr[i].m_Age << endl;
	}

}

	void test02()
	{
		//创建数组
		arr<Person> arr3(10);
		Person p1("孙悟空", 30);
		Person p2("韩信", 20);
		Person p3("妲己", 18);
		Person p4("王昭君", 15);
		Person p5("赵云", 24);

		//插入数据
		arr3.addnum(p1);
		arr3.addnum(p2);
		arr3.addnum(p3);
		arr3.addnum(p4);
		arr3.addnum(p5);

		printPersonArray(arr3);

		cout << "pArray的大小：" << arr3.infnum() << endl;
		cout << "pArray的容量：" << arr3.infmen() << endl;

	}

int main()
{
	arr<int> arr1(10);
	for (int i = 0; i < 10; i++)
	{
		arr1.addnum(i);
	}
	cout << "arr打印输出：" << endl;
	printIntArray(arr1);
	cout << "arr的大小：" << arr1.infnum() << endl;
	cout << "arr的容量：" << arr1.infmen()<< endl;
	arr1.findnum(2);

	cout << "--------------------------" << endl;

	//测试自定义数据类型
	test02();

	system("pause");
	return 0;
}