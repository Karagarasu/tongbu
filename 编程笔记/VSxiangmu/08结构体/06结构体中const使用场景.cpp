#include<iostream>
#include<string>
using namespace std;
//const��ʹ�ó���
struct student
{
	string name;//����
	int age;//����
	float score;//����
};
void printStudent(const student *s) //�������е��βθ�Ϊָ�룬
                            //���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ���
{
	//s->age = 150; ����const��һ�����޸Ĳ����ͻᱨ�����Է�ֹ�����
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}
int main() {
	//�����ṹ�����
	struct student s = { "����",15,70 };
	//ͨ��������ӡ�ṹ���������Ϣ
	printStudent(&s);
	cout << "main����������Ϊ��" << s.age << endl;
	system("pause");
	return 0;
}