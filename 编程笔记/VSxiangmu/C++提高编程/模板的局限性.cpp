#include<iostream>
using namespace std;
//ģ��ľ�����
//ģ�岻������ ��Щ�ض��������� ��Ҫ�þ��廯��ʽ������ʵ��

class person
{
public:
	person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	//����
	string m_name;
	//����
	int m_age;
};
//�Ա����������Ƿ���Ⱥ���
template<typename T>
bool mycompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//���þ��廯person�İ汾ʵ�ִ��� ���廯���ȵ���
template<>bool mycompare(person& p1, person& p2)
{
	if(p1.m_name==p2.m_name&&p1.m_age==p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	bool ret = mycompare(a, b);
	if (ret)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
void test02()
{
	person p1("tom", 11);
	person p2("tom", 10);
	bool ret = mycompare(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}