#include<iostream>
using namespace std;
int main() {
	//1�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	//2�ַ��ͱ�����ռ�ڴ��С
	cout <<"char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl; //1�ֽ�
	//3�ַ��ͱ�����������
	//char ch2 = "b";���󣬴����ַ��ͱ���������˫���ţ��õ�����
	//char ch2 = 'abcdef';���󣬴����ַ��ͱ���ʱ����������ֻ����һ���ַ�
	//4�ַ��ͱ�����ӦASCII����    a��Ӧ97 A��Ӧ65
	cout << (int)ch << endl;//���97
	char ch2 = 'b';
	cout << (int)ch2 << endl;//���98
	char ch3 = 'A';
	cout << (int)ch3 << endl;//���65
	system("pause");
	return 0;
}