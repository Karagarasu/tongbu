#include<iostream>
using namespace std;
//������
class Person
{
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ����޸ĵ� thisָ�벻�����޸�ָ���ָ�� Person * const this;
	void showPerson() const
	//void showPerson()
	{
		this->m_B = 100;
		//m_A = 100;//�൱��this->m_A=100;
		//this->m_A = 100;
		//this=NULL; //��this�ں�����const����ʱthisָ��������ʽ��
		                   //const Person* const this���� ����ָ�룬Ҳ�� ָ�볣����
	}
	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸�ֵ,����mutable�ؼ���
};
void test01()
{
	Person p;
	p.showPerson();
}
//������
void test02()
{
	const Person p;//�ڶ���ǰ��const��Ϊ������
	//p.m_A = 100;
	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
	//������ֻ�ܵ�������
	p.showPerson();
	//p.func(); ������ �����Ե�����ͨ���� ��Ϊ��ͨ��Ա���������޸�����
}
int main()
{
	system("pause");
	return 0;
}