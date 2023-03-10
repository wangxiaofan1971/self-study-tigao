//#include <algorithm>
//#include <vector>
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class person
//{
//public:
//	person(string name, int age)
//	{
//		this->name = name; 
//		this->age = age;
//	}
//	bool operator()(const person&p)
//	{
//		return p.age > 17;
//	}
//	string name;
//	int age;
//};
//
//class greator
//{
//public:
//	bool operator()(const person&p)
//	{
//		return p.age > 17;
//	}
//};
//
//
//void test01()
//{
//	person p1("zhao", 15);
//	person p2("qian", 16);
//	person p3("sun", 17);
//	person p4("li", 18);
//
//	vector<person> v1;
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	//person p5("li", 19);
//	vector<person>::iterator it=find_if(v1.begin(), v1.end(), greator());
//	if (it==v1.end())
//	{
//		cout << "Ã»ÕÒµ½°¡~" << endl;
//	}
//	else
//	{
//		cout << (*it).name << endl;
//	}
//}
//
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}
