#include<iostream>
using namespace std;
//��ͨ�����뺯��ģ����ù���
//1���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2������ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
//3������ģ����Է�����������
//4���������ģ����Բ�������ƥ�� ���ȵ��ú���ģ��
void myprint(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}
template<typename T>
void myprint(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}
template<typename T>
void myprint(T a, T b,T c)
{
	cout << "�������ص�ģ��" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	//myprint(a, b);
	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	//myprint<>(a, b);
	//myprint(a, b, 100);
	//�������ģ��������õ�ƥ�� ���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}