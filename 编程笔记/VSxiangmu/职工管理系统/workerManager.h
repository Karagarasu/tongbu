#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream>
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#define FILENAME "ְ��������ְλ��ְ��.txt"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExitSystem();
	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	Worker** m_EmpArray;
	//���ְ��
	void Add_Emp();
	//�����ļ�
	void save();
	//�ж��ļ��Ƿ�Ϊ�ձ�־
	bool m_FileIsEmpty;
	//ͳ���ļ�������
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();
	//��ʾְ��
	void Show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//�ж�ְ���Ƿ���� ������ڷ���ְ�����������е�λ�� �����ڷ���-1
	int IsExist(int id);
	//�޸�ְ������
	void Mod_Emp();
	//����ְ��
	void Find_Emp();
	//����ְ��
	void Sort_Emp();
	//����ļ�
	void Clean_File();
	~WorkerManager();
};