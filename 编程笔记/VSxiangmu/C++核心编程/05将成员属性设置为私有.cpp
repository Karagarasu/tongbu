#include<iostream>
#include<string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ��������Ч��
//����
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//�������䣨0~150��
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "����"<<age<<"�������󣬸�ֵʧ��" << endl;
			return;
		}
		m_Age = age;
	}
	//����ż��
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;//���� �ɶ���д
	int m_Age=18;//���� ֻ�� Ҳ����д�����������0��150֮�䣩
	string m_Idol;//ż�� ֻд
};
int main() {
	Person p;
	//����������
	p.setName("����");
	//��ȡ����
	cout << "������" << p.getName() << endl;
	//��������
	p.setAge(160);
	//p.m_Age = 20;
	//��ȡ����
	cout << "���䣺" << p.getAge() << endl;
	//ż������
	p.setIdol("С��");//ֻд
	//cout << "ż��" << p.m_Idol; ֻд״̬ ����޷�����
	system("pause");
	return 0;
}