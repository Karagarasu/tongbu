//��ͨԱ���ļ�
#include "worker.h"
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee :public Worker
{
public:
	Employee(int id,string name,int dId);//���캯��
	//��ʾ������Ϣ
	void showInfo();
	//��ȡ��λ����
	string getDeptName();
};