#include<iostream>
using namespace std;
//��ģ���Ա��������ʵ��
template<typename T1,typename T2>
class person
{
public:
	person(T1 name, T2 age);
	
	void showperson();
	
	T1 m_name;
	T2 m_age;
};
//���캯������ʵ��
template<typename T1,typename T2>
person<T1,T2>::person(T1 name, T2 age)
{
	m_name = name;
	m_age = age;
}
//��Ա��������ʵ��
template<typename T1,typename T2>
void person<T1, T2>:: showperson()
{
	cout << "������" << m_name << "���䣺" << m_age << endl;
}
void test01()
{
	person<string, int>p("tom", 20);
	p.showperson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}