#include<iostream>
using namespace std;
int main() {
	//���ͣ�short��2�ֽڣ� int��4�ֽڣ� long��4�ֽ�,linux64λ��8�ֽڣ�  long long��8�ֽڣ�
	//��������sizeof�����������ռ���ڴ��С
	//�﷨ sizeof����������/������
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "num1ռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) <<endl<< "num2ռ���ڴ�ռ�Ϊ��" <<sizeof(num2)<< endl;
	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl << "num3ռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;
	long long num4 = 10;
	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl << "num4ռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;
	/*
	���ͱȽϴ�С
	short<int<=long<=long long
	*/
	system("pause");
	return 0;
}