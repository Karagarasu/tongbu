#include<iostream>
using namespace std;
//�̳���ͬ����Ա����
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func()����" << endl;
	}
	void func(int a)
	{
		cout << "Base - func(int a)����" << endl;
	}

	int m_A;
};
class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	int m_A;
	void func()
	{
		cout << "Son - func()����" << endl;
	}

};
void test01()//ͬ����Ա����
{
	Son s;
	cout << "Son �� m_A=" << s.m_A << endl;
	//���ͨ��������� ���ʵ�������ͬ����Ա ��Ҫ��������
	cout << "Base �� m_A=" << s.Base::m_A << endl;
}
//ͬ����Ա����
void test02()
{
	Son s;
	s.func(); //ֱ�ӵ��� �����������е�ͬ����Ա

	//��ε��ø�����ͬ����Ա����
	s.Base::func();

	s.Base::func(100);//��������г��ֺ͸���ͬ���ĳ�Ա���� �����ͬ����Ա�����ص�����������ͬ����Ա����
	            //�������ʸ����б����ص�ͬ����Ա���� Ҫ��������
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}