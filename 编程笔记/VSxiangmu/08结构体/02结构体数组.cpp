#include<iostream>
#include<string>
using namespace std;
//�ṹ������
//1������һ���ṹ��
struct Student {
	//����
	string name;
	//����
	int age;
	//����
	float score;
};
int main() {
//2�������ṹ������
	struct Student stuArry[3] =
	{   {"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArry[2].name = "����";
	stuArry[2].age = 80;
	stuArry[2].score = 60;
//4�������ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << " ������ " 
			 << stuArry[i].name 
			 << " ���䣺 " << stuArry[i].age 
			 << " ������ " << stuArry[i].score << endl;
	}
	system("pause");
	return 0;
}