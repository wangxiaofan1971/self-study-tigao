#include<iostream>
#include<string>
using namespace std;
#include"myArray.hpp"
//��������:  ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//
//
//
//	* ���Զ��������������Լ��Զ����������͵����ݽ��д洢
//	* �������е����ݴ洢��������
//	* ���캯���п��Դ��������������
//	* �ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
//	* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ����
//	* ����ͨ���±�ķ�ʽ���������е�Ԫ�ء�
//	* ���Ի�ȡ�����е�ǰԪ�ظ����������������
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
		cout << "������" << personArr.indataarr[i].m_Name << " ���䣺 " << personArr.indataarr[i].m_Age << endl;
	}

}

	void test02()
	{
		//��������
		arr<Person> arr3(10);
		Person p1("�����", 30);
		Person p2("����", 20);
		Person p3("槼�", 18);
		Person p4("���Ѿ�", 15);
		Person p5("����", 24);

		//��������
		arr3.addnum(p1);
		arr3.addnum(p2);
		arr3.addnum(p3);
		arr3.addnum(p4);
		arr3.addnum(p5);

		printPersonArray(arr3);

		cout << "pArray�Ĵ�С��" << arr3.infnum() << endl;
		cout << "pArray��������" << arr3.infmen() << endl;

	}

int main()
{
	arr<int> arr1(10);
	for (int i = 0; i < 10; i++)
	{
		arr1.addnum(i);
	}
	cout << "arr��ӡ�����" << endl;
	printIntArray(arr1);
	cout << "arr�Ĵ�С��" << arr1.infnum() << endl;
	cout << "arr��������" << arr1.infmen()<< endl;
	arr1.findnum(2);

	cout << "--------------------------" << endl;

	//�����Զ�����������
	test02();

	system("pause");
	return 0;
}