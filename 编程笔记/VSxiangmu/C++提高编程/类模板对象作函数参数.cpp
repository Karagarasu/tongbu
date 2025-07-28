#include<iostream>
using namespace std;
//��ģ���������������
template<typename T1,typename T2>
class person
{public:
	person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
	void showperson()
	{
		cout << "������" << m_name << endl;
		cout << "���䣺" << m_age << endl;
		}
	T1 m_name;
	T2 m_age;
};
//1��ָ����������
void printperson1(person<string, int>&p)
{
	p.showperson();
}
void test01()
{
	person<string, int>p("�����", 100);
	printperson1(p);
}
//2������ģ�廯
template<typename T1, typename T2>
void printperson2(person<T1, T2>&p)
{
	p.showperson();
	cout << "T1:" << typeid(T1).name() << endl;
	cout << "T2:" << typeid(T2).name() << endl;
}
void test02()
{
	person<string, int>p("��˽�", 90);
	printperson2(p);
}
//3��������ģ�廯
template<typename T>
void printperson3(T&p)
{
	p.showperson();
	cout << "T:" << typeid(T).name()<< endl;
}
void test03()
{
	person<string, int>p("��ɮ", 30);
	printperson3(p);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}