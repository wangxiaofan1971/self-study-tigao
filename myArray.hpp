#include<iostream>
using namespace std;
//��������:  ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//	* ���Զ��������������Լ��Զ����������͵����ݽ��д洢
//	* �������е����ݴ洢������
//	* ���캯���п��Դ������������
//	* �ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
//	* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//	* ����ͨ���±�ķ�ʽ���������е�Ԫ��
//	* ���Ի�ȡ�����е�ǰԪ�ظ��������������
template <class T>
class arr
{
public:
	arr(int max)
	{
		this->maxnum=max;//��ǰ��������
		this->num=0;//��ǰ�����С
		this->indataarr = nullptr;
		indataarr=new T[this->maxnum];//���ٶ���
		if (indataarr==NULL)
		{
			cout << "����ָ��";
		}
	}
	//��������
	arr(arr & arr)
	{
		this->maxnum = arr.maxnum;
		this->num = arr.num;
		this->indataarr = new T[this->maxnum];
		for (int i = 0; i < this->num; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬������Ҫ���� = ����������Ϊ����ȺŲ��� ���� ���Ǹ�ֵ��
			// ��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
			this->indataarr[i] = arr.indataarr[i];
		}
	}


	//����[] ������  arr[0]
	T& operator [](int index)
	{
		return this->indataarr[index]; //������Խ�磬�û��Լ�ȥ����
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








	void addnum(T &indata)//β�巨
	{
		this->indataarr [num] = indata;
		this->num++;
	}
	void delnum()//βɾ��
	{
		this->indataarr[num] = NULL;
		num--;
	}
	int infmen()//��ȡ��������
	{
        //cout << "��������Ϊ��" << this->maxnum;
		return this->maxnum;
	}
	int infnum()//��ȡ�����С
	{
		//cout << "�����СΪ��" << this->num+1;
		return this->num ;
	}
	void findnum(int choose)//�����±�����
	{
		if (choose>0&choose<this->num+1)
		{
			cout << "����ѯ��Ԫ��Ϊ" << this->indataarr[choose] << endl;
		}
		else
		{
			cout << "��������ȷ���±�" << endl;
		}
	}
	~arr()
	{

	}
	int maxnum;//��ǰ��������
	int num;//��ǰ�����С
	T* indataarr;
	T indata;//������������
};