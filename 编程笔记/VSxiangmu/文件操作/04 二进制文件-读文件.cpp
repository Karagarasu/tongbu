#include<fstream>
#include<iostream>
using namespace std;
class Person
{
public:
	char m_Name[64];
	int m_age;
};
void test01()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;
	//3�����ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::binary | ios::in);
	if(!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4�����ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name<<"\n" << "���䣺" << p.m_age << endl;
	//5���ر��ļ�
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}