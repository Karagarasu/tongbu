#include<iostream>
using namespace std;
//�������������
class Person
{
friend std::ostream& operator<<(ostream& out, Person& p);
public:
	Person(int a, int b)
	{
		int m_A = a;
		int m_B = b;
	}
private:
	//���ó�Ա�����������������
	//�������ó�Ա��������<<,��Ϊ�޷�ʵ��cout����
	/*void operator<<(cout)
	{

	}*/
	int m_A;
	int m_B;
};
//ֻ������ȫ�ֺ����������������
std::ostream& operator<<(ostream & out, Person& p)
{
	out << "m_A=" << p.m_A << " m_B=" << p.m_B;
	return out;
}
void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;
	cout << p << "hello world"<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}