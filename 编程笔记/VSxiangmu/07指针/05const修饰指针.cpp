#include<iostream>
using namespace std;
int main() {
	//1��const����ָ�� ����ָ�� ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	int a = 10;
	int b = 10;
	const int* p = &a; 
	//*p = 20; ����
	p = &b;//��ȷ
	//2��const���γ��� ָ�볣�� ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	*p2 = 100; //��ȷ
	//p2 = &b; //����
	//3��const����ָ��ͳ���
	const int* const p3 = &a; //ָ���ָ���ָ��ָ���ֵ�������Ը�
	//*p3 = 100; ����
	//p3 = &b; ����
	system("pause");
	return 0;
}