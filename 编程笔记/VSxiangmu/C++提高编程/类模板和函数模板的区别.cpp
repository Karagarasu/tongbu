#include<iostream>
using namespace std;
//��ģ���뺯��ģ�������
template<typename nametype,typename agetype= int>
class person
{
public:
	person(nametype name, agetype age)
	{
		m_name = name;
		m_age = age;
	}
	void shwoperson()
	{
		cout << "name:" << m_name << "age:" << m_age<< endl;
	}
	nametype m_name;
	agetype m_age;

};
//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
	//person p("�����", 1000); ���� �޷����Զ������Ƶ�
	person<string, int>p("�����", 1000); //��ȷ ֻ������ʽָ������
	p.shwoperson();
}
//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
	person<string>p("��˽�", 999);
	p.shwoperson();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}