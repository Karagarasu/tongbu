#include<iostream>
using namespace std;
int main() {
	//ָ����ռ�õ��ڴ�
	int a = 10;
	/*int * p;
	p = &a;*/
	int* p = &a;                                       
	cout << "sizeof (p) =" << sizeof(p) << endl;//����ʲô����ָ����32λϵͳ��ռ4�ֽ��ڴ� 
	cout << "sizeof (int *) =" << sizeof(int *) << endl;//����ʲô����ָ����64λϵͳ��ռ8�ֽ��ڴ�
	cout << "sizeof (float *) =" << sizeof(float*) << endl;
	cout << "sizeof (double *) =" << sizeof(double*) << endl;
	cout << "sizeof (char *) =" << sizeof(char*) << endl;
	system("pause");
	return 0;
}