#include<iostream>
using namespace std;
//��ģ����̳�
template<typename T>
class base
{

	T m;
};
//class son :public base //���� ����Ҫ֪��������T���� ���ܼ̳и�����
class son:public base<int>
{

};
void test01()
{
	son s1;
}
//��������ָ��������T���� ����Ҳ��Ҫ�����ģ��
template<typename T1,typename T2>
class son2 :public base<T2>
{
public:
	son2()
	{
		cout << "T2:" << typeid(T2).name() << endl;
		cout << "T1:" << typeid(T1).name() << endl;
	}
	T1 obj;
};
void test02()
{
	son2<int, char>s2;
}
int main()
{
	test02();
	system("pause");
	return 0;
}