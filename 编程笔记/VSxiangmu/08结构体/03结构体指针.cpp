#include<iostream>
#include<string>
using namespace std;
//�ṹ��ָ��
struct Student//����ѧ���ṹ��
{
	string name; //����
	int age; //����
	float score;//����
};
int main() {
	//1������ѧ���ṹ�����
	struct Student s = { "����",18,100 };
	//2��ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s;
	//3��ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ������� �� ��->��
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score << endl;
	system("pause");
	return 0;
}