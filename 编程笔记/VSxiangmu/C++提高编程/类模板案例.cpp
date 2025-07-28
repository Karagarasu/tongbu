#include<iostream>
#include"myarray.hpp"
using namespace std;
void printintarray(myarray<int>&arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << endl;;
	}
}
void test01()
{
	myarray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.push_back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	/*myarray<int> arr2(arr1);
	myarray<int> arr3(100);
	arr3 = arr1;*/
	printintarray(arr1);
	cout << "arr1������" << arr1.getcapacity() << endl;
	cout << "arr1��С��" << arr1.getsize() << endl;
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;

	myarray<int>arr2(arr1);
	printintarray(arr2);
	//βɾ
	arr2.pop_back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������" << arr2.getcapacity() << endl;
	cout << "arr2��С��" << arr2.getsize() << endl;


}
//�����Զ�����������
class person
{
public:
	person() {};
	person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
void printpersonarray(myarray<person>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "������" << arr[i].m_name << "���䣺" << arr[i].m_age << endl;
	}
}
void test02()
{
	myarray<person>arr(10);
	person p1("�����",999 );
	person p2("����",20 );
	person p3("槼�", 200);
	person p4("����",25);
	person p5("������",30 );
	//�����ݲ��뵽������
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);
	//��ӡ����
	printpersonarray(arr);

	//�������

	cout << "arr������" << arr.getcapacity() << endl;
	//�����С
	cout << "arr���£�" << arr.getsize() << endl;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}