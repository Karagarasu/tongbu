#include<iostream>
using namespace std;
//��ͨʵ��ҳ��

//Javaҳ��
//class Java
//{
//	public:
//		void header()
//		{
//			cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//		}
//		void footer()
//		{
//			cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//		}
//		void left()
//		{
//			cout << "Java��Python��C++��...�����������б�" << endl;
//		}
//		void content()
//		{
//			cout << "Javaѧ����Ƶ" << endl;
//		}
//		
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//
//};
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//
//};
// �̳�ʵ��ҳ��
//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "java��python��c++��...�����������б�" << endl;
	}
};
//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//�̳еĺô��������ظ��Ĵ���
//�﷨ class ���� ���̳з�ʽ ����
// ���� Ҳ��Ϊ ������
// ���� Ҳ��Ϊ ����
//Pythonҳ�� 
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};
void test01()
{
	cout << "java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "--------------------" << endl;
	cout << "python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;
	cout << "c++������Ƶҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main()
{
	test01();
	system("pause");
	return 0;
}