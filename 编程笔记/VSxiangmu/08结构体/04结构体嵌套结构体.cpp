#include<iostream>
#include<string>
using namespace std;
//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	float score;//����
};
//������ʦ�ṹ��
struct teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//����
	struct student stu;//������ѧ��
};
int main() {
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << " ��ʦ������ " << t.name << " ��ʦ��ţ� " << t.id << " ���䣺 " << t.age
		<< " ��ʦ������ѧ�������� " << t.stu.name << " ���䣺 " << t.stu.age
		<< " ѧ���ķ����� " << t.stu.score << endl;
	system("pause");
	return 0;
}