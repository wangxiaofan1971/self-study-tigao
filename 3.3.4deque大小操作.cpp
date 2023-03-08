//#include<iostream>
//using namespace std;
//#include <deque>
//void printDeque(const deque<int>&q)
//{
//	for (deque<int>::const_iterator it = q.begin(); it < q.end(); it++)
//	{
//		cout << *it << "";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//判断容器是否为空
//	if (d1.empty()) {
//		cout << "d1为空!" << endl;
//	}
//	else {
//		cout << "d1不为空!" << endl;
//		//统计大小
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}