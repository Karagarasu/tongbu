#include<iostream>
using namespace std;
//��̬
//������
class Animal
{
public:
    virtual	void speak() //�麯��
	{
		cout << "������˵��" << endl;
	}
};
//è��
class Cat :public Animal
{
public:
	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ ����� ��д/дvirtual
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};
//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//��̬�������
class ��̬����� :public Animal
{
	void speak()
	{
		cout << "��̬�������˵������Ҫ�Ը����Ϲ���ˮ��Ϻ�ȣ���������������" << endl;
	}
};
//ִ��˵���ĺ���
//��ַ��� �ڱ���׶ξ�ȷ��������ַ
//�����ִ����è˵�� ��ô���������ַ�Ͳ�����ǰ�� ��Ҫ�����н׶ν��а� ��ַ���

//��̬��̬��������
//1���м̳й�ϵ
//2������Ҫ��д������麯��

//��̬��̬ʹ��
//�����ָ��������� ָ���������
void doSpeak(Animal &animal)//Animal &animal=cat;
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
	��̬����� bt;
	doSpeak(bt);
}
int main()
{
	test01();
	system("pause");
	return 0;
}