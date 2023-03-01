//#include<iostream>
//using namespace std;
//template<typename T>
//void sort(T *a,int b)
//{
//	T tmp;
//	cout << b << endl;
//	for (size_t i = 0; i < b-1; i++)
//	{
//		for (size_t j = 0; j < b-1-i; j++)
//		{
//			if (a[j] > a[j + 1])
//				{
//					tmp = a[j + 1];
//					a[j + 1] = a[j];
//					a[j] = tmp;
//				}
//		}
//	}
//}
//int main()
//{
//	int a[7] = { 1 ,3 ,9, 6, 7, 2, 4 };
//	char c[7] = { 'a' ,'j','k', 'v', 'd', 'e', 'f' };
//	int b = sizeof(a) / sizeof(a[0]);
//	//cout << b;
//	sort(a,b);
//	sort(c,b);
//	for (size_t i = 0; i < b; i++)
//	{
//		cout << a[i];
//	}
//	for (size_t i = 0; i < b; i++)
//	{
//		cout << c[i];
//	}
//	system("pause");
//	return 0;
//}