#include<iostream>
using namespace std;
//1�����캯���ķ��༰����
//����
//���ղ������� ��Ϊ �޲ι��죨Ĭ�Ϲ��죩���вι���
//�������ͷ��� ��ͨ���� ��������
class Person {
public:
	Person() {
		cout << "Person�޲ι��캯���ĵ���" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person�вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		//��������������������ԣ�������������
		cout << "Person�������캯���ĵ���" << endl;
		age = p.age;
	}
	~Person() {
		cout << "Person��������������" << endl;
	}
	int age;
};
//����
void test01()
{
	//1�����ŷ�
	//Person p1;//Ĭ�Ϲ��캯������
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯��
	//ע������
	// ����Ĭ�Ϲ��캯��ʱ����Ҫ�ӣ���
	//Person p1();//��Ϊ���д��룬����������Ϊ�Ǻ�������,������Ϊ�ڴ�������
	//void func();
	//cout << "p2�����䣺" << p2.age << endl;
	//cout << "p3�����䣺" << p3.age << endl;
	//2����ʽ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);	//��������
	//Person(10); //�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "aaa" << endl;
	// ע������2 ��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ Person(p3)== Person p3; ��������
	//Person(p3);
	//3����ʽת����
	Person p4 = 10; //�൱��Person p4 = Person(10); �вι���
	Person p5 = p4;
}
int main() 
{
	test01();
	system("pause");
	return 0;
}