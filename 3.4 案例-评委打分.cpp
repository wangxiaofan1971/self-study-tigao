////#### 3.4.1 ��������
////
////��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
////
////
////
////#### 3.4.2 ʵ�ֲ���
////
////1. ��������ѡ�֣��ŵ�vector��
////2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
////3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
////4. deque��������һ�飬�ۼ��ܷ�
////5. ��ȡƽ����
//#include<iostream>
//using namespace std;
//#include <deque>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <ctime>
//#include <random>
//class people
//{
//public:
//	people(string name)
//	{
//		this->name = name;
//	}
//	string name;
//	deque<int> score;
//	int ave;
//};
//
//void print(const vector<people> &p1)
//{
//	for (vector<people> ::const_iterator it = p1.begin(); it < p1.end(); it++)
//	{
//		cout << (*it).name << "�ĵ÷�Ϊ��";
//		for (size_t i = 0; i < 8; i++)
//		{
//			cout << "��" << i + 1 << "������:" << (*it).score[i] << endl;
//		}
//		cout << "***********************************" << endl;
//	}
//}
//void test()
//{
//	//��������ѡ�֣��ŵ�vector��
//	people p1("��");
//	people p2("Ǯ");
//	people p3("��");
//	people p4("��");
//	people p5("��");
//
//	vector<people> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ����
//	//���԰�10�����ִ�ִ浽deque������
//	default_random_engine e;
//	uniform_int_distribution<int> u(0, 10); // ����ұ�����
//	e.seed(time(0));
//	int score = 0;
//	for (vector<people> ::iterator it = v.begin(); it < v.end(); it++)
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//
//			score = u(e);
//			cout << "������" << (*it).name << "�ĵ�" << i + 1 << "������:" << score << endl;
//			
//			(*it).score.push_back(score);
//
//		}
//		cout << "***********************************" << endl;
//	}
//
//	//sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//	for (vector<people> ::iterator it = v.begin(); it < v.end(); it++)
//	{
//		sort((*it).score.begin(), (*it).score.end());
//		(*it).score.pop_front();
//		(*it).score.pop_back();
//	}
//	//deque��������һ�飬�ۼ��ܷ�
//	for (vector<people> ::iterator it = v.begin(); it < v.end(); it++)
//	{
//		int sum = 0;
//		for (size_t i = 0; i < 8; i++)
//		{
//			sum=sum+(*it).score[i];
//
//		}
//		(*it).ave = sum / 8;
//		cout << (*it).name << "�÷֣�" << (*it).ave;
//	}
//
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
//
