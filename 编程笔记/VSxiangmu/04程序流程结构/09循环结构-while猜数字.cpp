#include<iostream>
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>
using namespace std;
int main() {
	//�����������ӣ��������õ�ǰϵͳʱ����������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1��ϵͳ���������
	int num=rand() % 100+1;//����0+1~99+1�����
	//2����ҽ��в²�
	cout << "������" << endl;
	int val = 0;//������������
	while(true)
	{
	cin >> val;
	//3���ж���ҵĲ²�
	//�´�����ʾ�µĽ���������С�����صڶ���
	if (val > num)
	{
		cout << "�²��ͷ" << endl;
	}
	else if (val < num)
	{
		cout << "�²��С" << endl;
	}
	else
	{
		cout << "��ϲ���¶���" << endl;
		//�¶����˳�
		break;
	}
	
	}
	system("pause");
	return 0;
}