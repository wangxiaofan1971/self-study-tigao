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
//	bool operator==(const person&p)
//	{
//		if (this->name==p.name && this->age==p.age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string name;
//	int age;
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
//	person p5("li", 19);
//	vector<person>::iterator it=find(v1.begin(), v1.end(), p5);
//	if (it==v1.end())
//	{
//		cout << "û?ҵ???~" << endl;
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
