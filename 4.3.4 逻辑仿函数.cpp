#include <vector>
#include <functional>
#include <algorithm>
#include <functional>
#include<string>
#include<iostream>
using namespace std;
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�߼���  ��v�������˵�v2�У���ִ���߼�������
	vector<bool> v2;
	v2.resize(v.size());//Ŀ������������ͬ���Ŀռ�
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}