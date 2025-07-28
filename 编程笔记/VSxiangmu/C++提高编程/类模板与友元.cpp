#include<iostream>
using namespace std;
//ͨ��ȫ�ֺ�����ӡ person��Ϣ
template<class T1,class T2>
class person;
//����ʵ��
template<class T1, class T2>
void printperson2(person<T1, T2>& p)
{
	cout << "����ʵ�֣�������" << p.m_name << "���䣺" << p.m_age << endl;
}

template<class T1,class T2>
class person
{//ȫ�ֺ�������ʵ��
	friend void printperson(person<T1,T2> &p)
	{
		cout << "������" << p.m_name << "���䣺" << p.m_age << endl;
	}
	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ�������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printperson2<>(person<T1, T2>& p);
public:
	person(T1 name,T2 age)
	{
		m_name = name;
		m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

//1��ȫ�ֺ���������ʵ��
void test01()
{
	person<string, int>p("tom", 20);
	printperson(p);
}
//2��ȫ�ֺ���������ʵ�ֲ���
void test02()
{
	person<string, int>p("jerry", 20);
	printperson2(p);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}