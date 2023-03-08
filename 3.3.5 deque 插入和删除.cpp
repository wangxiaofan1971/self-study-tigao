//#include<iostream>
//using namespace std;
//#include <deque>
//void printDeque(const deque<int>&q)
//{
//	for (deque<int>::const_iterator it = q.begin(); it < q.end(); it++)
//	{
//		cout << *it << "**";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	d1.pop_back();
//	d1.pop_front();
//	printDeque(d1);
//}
//void test1()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	printDeque(d1);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//
//}
//
//void test03()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.erase(d.begin());
//	printDeque(d);
//
//	d.erase(d.begin(), d.end());
//	d.clear();
//	printDeque(d);
//}
//
//
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}