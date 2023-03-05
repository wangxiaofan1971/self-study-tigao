#include<iostream>
using namespace std;
//案例描述:  实现一个通用的数组类，要求如下：
//	* 可以对内置数据类型以及自定义数据类型的数据进行存储
//	* 将数组中的数据存储到堆区
//	* 构造函数中可以传入数组的容量
//	* 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
//	* 提供尾插法和尾删法对数组中的数据进行增加和删除
//	* 可以通过下标的方式访问数组中的元素
//	* 可以获取数组中当前元素个数和数组的容量
template <class T>
class arr
{
public:
	arr(int max)
	{
		this->maxnum=max;//当前数组容量
		this->num=0;//当前数组大小
		this->indataarr = nullptr;
		indataarr=new T[this->maxnum];//开辟堆区
		if (indataarr==NULL)
		{
			cout << "垃圾指针";
		}
	}
	//拷贝构造
	arr(arr & arr)
	{
		this->maxnum = arr.maxnum;
		this->num = arr.num;
		this->indataarr = new T[this->maxnum];
		for (int i = 0; i < this->num; i++)
		{
			//如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值，
			// 普通类型可以直接= 但是指针类型需要深拷贝
			this->indataarr[i] = arr.indataarr[i];
		}
	}


	//重载[] 操作符  arr[0]
	T& operator [](int index)
	{
		return this->indataarr[index]; //不考虑越界，用户自己去处理
	}

	arr& operator=(const arr& myarray) {

		if (this->indataarr != NULL) {
			delete[] this->indataarr;
			this->maxnum = 0;
			this->num = 0;
		}

		this->maxnum = myarray.maxnum;
		this->num = myarray.num;
		this->indataarr = new T[this->maxnum];
		for (int i = 0; i < this->num; i++) {
			this->indataarr[i] = myarray[i];
		}
		return *this;
	}








	void addnum(T &indata)//尾插法
	{
		this->indataarr [num] = indata;
		this->num++;
	}
	void delnum()//尾删法
	{
		this->indataarr[num] = NULL;
		num--;
	}
	int infmen()//获取数组容量
	{
        //cout << "数组容量为：" << this->maxnum;
		return this->maxnum;
	}
	int infnum()//获取数组大小
	{
		//cout << "数组大小为：" << this->num+1;
		return this->num ;
	}
	void findnum(int choose)//访问下标数组
	{
		if (choose>0&choose<this->num+1)
		{
			cout << "您查询的元素为" << this->indataarr[choose] << endl;
		}
		else
		{
			cout << "请输入正确的下标" << endl;
		}
	}
	~arr()
	{

	}
	int maxnum;//当前数组容量
	int num;//当前数组大小
	T* indataarr;
	T indata;//传入数组数据
};