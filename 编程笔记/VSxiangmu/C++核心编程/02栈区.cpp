#include<iostream>
using namespace std;
//ջ������ע������ --- ��Ҫ���ؾֲ�������ַ
//ջ���������ɱ����������ٺ��ͷ�
int* func(int b)//�β�����Ҳ�����ջ��
{
	b = 100;
	int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;//���ؾֲ�������ַ
}
int main() {
	int *p=func(1);//����func�����ķ���ֵ
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}