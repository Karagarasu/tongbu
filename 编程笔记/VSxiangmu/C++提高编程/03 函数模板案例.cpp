#include<iostream>
using namespace std;
//ʵ��ͨ�õ� �������������ĺ���
//���� �Ӵ�С �㷨 ѡ������
//���� char���� int����
// ����ģ��
template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//�����㷨
template<typename T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i; //�϶����ֵ���±�
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j]) //�϶������ֵ �� ����������ֵС ˵�� j�������������ֵ
				max = j;
		}
		if (max != i)
		{//����max��i
			myswap(arr[max], arr[i]);
		}
	}
}
//�ṩ��ӡ����ģ��
template<typename T>
void printarray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void test01()
{
	//����cahr����
	char chararr[] = "badcfe";
	int num = sizeof(chararr) / sizeof(char);
	mysort(chararr, num);
	printarray(chararr, num);
}
void test02()
{
	//����int����
	int intarr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intarr) / sizeof(int);
	mysort(intarr, num);
	printarray(intarr, num);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}