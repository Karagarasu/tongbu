#include<iostream>
using namespace std;
//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ�Ŵ���
class person1
{
public:
	void showperson1()
	{
		cout << "person1 show";
	}
};
class person2
{
public:
	void showperson2()
	{
		cout << "person2 show";
	}
};
template<typename T>
class myclass
{
public:
	T obj;
	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showperson1();
	}
	void func2()
	{
		obj.showperson2();
	}
};
void test01()
{
	myclass<person2>m;
	//m.func1();
	m.func2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}