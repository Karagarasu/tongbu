#include<iostream>
using namespace std;
//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ�ֵ
//��ǰ���߱����������Ĵ��ڣ��������ú���������
int bijiao(int a, int b);//���������� ��������д��Σ�����ֻ����һ�� ��ζ����򱨴�
int bijiao(int a, int b);
int bijiao(int a, int b);
//������������ main����{...}ǰ�����Բ�д����
int bijiao(int a, int b)//�������������main����{...}����δ�����������򱨴�
{
	return a > b ? a : b;
}

int main() {
	int a = 10;
	int b = 20;
	cout << bijiao(a, b) << endl;
	system("pause");
	return 0;
}
