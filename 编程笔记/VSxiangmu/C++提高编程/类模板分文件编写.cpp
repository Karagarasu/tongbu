#include<iostream>
//��һ�ֽ����ʽ ֱ�Ӱ��� Դ�ļ�
//#include"person.cpp"

//�ڶ��ֽ����ʽ ��.h��.cpp�е�����д��һ�� ����׺��Ϊ.hpp
#include"person.hpp"
using namespace std;
//��ģ����ļ���д�������Լ����
//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name, T2 age);
//	void showperson();
//	T1 m_name;
//	T2 m_age;
//};
//template<class T1,class T2>
//person<T1,T2>::person(T1 name,T2 age)
//{
//	m_name = name;
//	m_age = age;
//}
//template<class T1, class T2>
//void person<T1, T2>::showperson()
//{
//	cout << "������" << m_name << "���䣺" << m_age << endl;
//}
void test01()
{
	person<string, int>p("jerry", 19);
	p.showperson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}