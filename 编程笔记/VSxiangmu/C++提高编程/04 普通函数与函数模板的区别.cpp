#include<iostream>
using namespace std;
//��ͨ�����뺯��ģ�������

//1����ͨ��������ʱ���Է�����ʽ����ת��

//2������ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת��

//3������ģ�� ����ʽָ������ ���Է�����ʽ����ת��

//��ͨ����
int myadd01(int a,int b)
{
	return a + b;
}
//����ģ��
template<typename T>
T myadd02(T a, T b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c'; //a - 97  c - 99
	cout<<myadd01(a,c)<<endl;
	//�Զ������Ƶ� ���ᷢ����ʽ����ת�� 
	//cout<<myadd02(a,c)<<endl; ����
	//��ʽָ������
	cout << myadd02<int>(a, c);
}
int main()
{
	test01();
	system("pause");
	return 0;
}