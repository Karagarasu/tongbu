#include<iostream>
#include<string>
using namespace std;
class Student //���ѧ����
{
	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա����/����
public://����Ȩ��
	//����
	string m_Name; //����
	int m_Id;//ѧ��
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������" << m_Name <<"\t" << "ѧ�ţ�" << m_Id << endl;
	}
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(int id)
	{ 
		m_Id = id;
	}
};
int main() {
	Student s1;//����һ������ѧ�� ʵ�������� �������Ը�ֵ����
	//s1.m_Name = "����";
	s1.setName("����");
	//s1.m_Id = 1;
	s1.setId(1);
	//��ʾѧ����Ϣ
	s1.showStudent();
	Student s2;
	s2.m_Name = "����";
	s2.m_Id = 2;
	s2.showStudent();
	system("pause");
	return 0;
}