#include<iostream>
using namespace std;
//���캯���ĵ��ù���
//1������һ���࣬C++���������ÿ�����������3������
//Ĭ�Ϲ��죨��ʵ�֣�
// ������������ʵ�֣�
//�������죨ֵ������

//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��졣��Ȼ�ṩ��������
//�������д�˿������캯���������������ṩ������ͨ���캯��
class Person
{
public:
	int m_Age;
	/*Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}*/
	/*Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}*/
	Person(const Person& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
};
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
void test02()
{
	Person p;
	//Person p2(p);
	//cout << "p2������Ϊ��" << p2.m_Age << endl;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}