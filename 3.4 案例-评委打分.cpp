////#### 3.4.1 案例描述
////
////有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
////
////
////
////#### 3.4.2 实现步骤
////
////1. 创建五名选手，放到vector中
////2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
////3. sort算法对deque容器中分数排序，去除最高和最低分
////4. deque容器遍历一遍，累加总分
////5. 获取平均分
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
//		cout << (*it).name << "的得分为：";
//		for (size_t i = 0; i < 8; i++)
//		{
//			cout << "第" << i + 1 << "个评分:" << (*it).score[i] << endl;
//		}
//		cout << "***********************************" << endl;
//	}
//}
//void test()
//{
//	//创建五名选手，放到vector中
//	people p1("赵");
//	people p2("钱");
//	people p3("孙");
//	people p4("李");
//	people p5("周");
//
//	vector<people> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//遍历vector容器，取出来每一个选手，执行for循环，
//	//可以把10个评分打分存到deque容器中
//	default_random_engine e;
//	uniform_int_distribution<int> u(0, 10); // 左闭右闭区间
//	e.seed(time(0));
//	int score = 0;
//	for (vector<people> ::iterator it = v.begin(); it < v.end(); it++)
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//
//			score = u(e);
//			cout << "请输入" << (*it).name << "的第" << i + 1 << "个评分:" << score << endl;
//			
//			(*it).score.push_back(score);
//
//		}
//		cout << "***********************************" << endl;
//	}
//
//	//sort算法对deque容器中分数排序，去除最高和最低分
//	for (vector<people> ::iterator it = v.begin(); it < v.end(); it++)
//	{
//		sort((*it).score.begin(), (*it).score.end());
//		(*it).score.pop_front();
//		(*it).score.pop_back();
//	}
//	//deque容器遍历一遍，累加总分
//	for (vector<people> ::iterator it = v.begin(); it < v.end(); it++)
//	{
//		int sum = 0;
//		for (size_t i = 0; i < 8; i++)
//		{
//			sum=sum+(*it).score[i];
//
//		}
//		(*it).ave = sum / 8;
//		cout << (*it).name << "得分：" << (*it).ave;
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
