//#include<iostream>
//using namespace std;
////��ģ����̳�
//template<class T>
//class Base
//{
//public:
//	T m;
//};
////class Son :public Base
////{
////
////};
////class Son:public Base  //����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
//class Son :public Base<int>
//{
//
//};
//
////��ģ��̳���ģ�� ,������T2ָ�������е�T����
//template<class T1, class T2, class T3>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//};
//void test02()
//{
//	Son2<int, char,string> child1;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}