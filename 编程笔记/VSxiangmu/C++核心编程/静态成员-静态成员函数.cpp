#include<iostream>
using namespace std;
//��̬��Ա����
//���ж��󹲷���ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	static void func()//��̬��Ա����
	{
		m_A = 100;//��̬��Ա�������Է��� ��̬��Ա����
		//m_B = 200;��̬��Ա���� ������ ���ʷǾ�̬��Ա���� �޷����ֵ������Ǹ������m_B����
		cout << "static void func����" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����
	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2�ĵ���" << endl;
	}
};
int Person::m_A=0;
//�����ַ��ʷ�ʽ
void test01()
{
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();
	//Person::func2(); �����޷�����˽�о�̬��Ա����
}
int main() {
	test01();
	system("pause");
	return 0;
}