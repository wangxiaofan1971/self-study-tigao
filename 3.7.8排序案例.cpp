//#include<iostream>
//using namespace std;
//#include <list>
//#include <string>
////#### 3.7.8 排序案例
////
////案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
////
////排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
//
//class person
//{
//public:
//	person(string name, int age, int tall)
//	{
//		this->name = name;
//		this->age = age;
//		this->tall = tall;
//	}
//	string name;
//	int age;
//	int tall;
//};
//
//
//bool compare(person &p1, person &p2)
//{
//	if (p1.age == p2.age) {
//		return p1.tall  > p2.tall;
//	}
//	else
//	{
//		return  p1.age < p2.age;
//	}
//}
//
//
//void print(const list<person> &lp)
//{
//	for (list<person>::const_iterator it= lp.begin(); it != lp.end(); it++)
//	{
//		cout << (*it).age << (*it).name << (*it).tall << endl;
//	}
//	cout << "************************************" << endl;
//
//}
//void test()
//{
//	person p1("刘备", 35, 175);
//	person p2("曹操", 45, 180);
//	person p3("孙权", 40, 170);
//	person p4("赵云", 25, 190);
//	person p5("张飞", 35, 160);
//	person p6("关羽", 35, 200);
//	list<person> lp;
//	lp.push_back(p1);
//	lp.push_back(p2);
//	lp.push_back(p3);
//	lp.push_back(p4);
//	lp.push_back(p5);
//	lp.push_back(p6);
//	print(lp);
//	lp.sort(compare);
//	print(lp);
//
//
//
//}
//
//int main() {
//
//	test();
//
//	system("pause");
//
//	return 0;
//}
//
//
