//#include<iostream>
//using namespace std;
////#include <set>
////#include <string>
////
////class MyCompare
////{
////public:
////	bool operator()(int v1, int v2) {
////		return v1 > v2;
////	}
////};
////void test01()
////{
////	set<int> s1;
////	s1.insert(10);
////	s1.insert(40);
////	s1.insert(20);
////	s1.insert(30);
////	s1.insert(50);
////
////	//Ĭ�ϴ�С����
////	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
////		cout << *it << " ";
////	}
////	cout << endl;
////
////	//ָ���������
////	set<int, MyCompare> s2;
////	s2.insert(10);
////	s2.insert(40);
////	s2.insert(20);
////	s2.insert(30);
////	s2.insert(50);
////
////	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////int main() {
////
////	test01();
////
////	system("pause");
////
////	return 0;
////}
//
//
//#include <set>
//#include <string>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//
//};
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person &p2)
//	{
//		//���������������  ����
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person, comparePerson> s;
//
//	Person p1("����", 23);
//	Person p2("����", 27);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
//	}
//}
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}