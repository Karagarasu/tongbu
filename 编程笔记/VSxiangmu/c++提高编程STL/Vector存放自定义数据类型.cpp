#include<iostream>
#include<vector>
using namespace std;
//vector�����д���Զ�����������
class person
{
public:
person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	vector<person>v;
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);
	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//��������������
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "������" << (*it).m_name << "���䣺" << (*it).m_age << endl;
		cout << "������" << it->m_name << "���䣺" << it->m_age << endl;

	}
}
//����Զ����������͵�ָ��
void test02()
{
	vector<person*>v;
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);
	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "������" << (*(*it)).m_name << "���䣺" << (*(*it)).m_age << endl;
		cout << "������" << (*it)->m_name << "���䣺" << (*it)->m_age << endl;
	}

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}