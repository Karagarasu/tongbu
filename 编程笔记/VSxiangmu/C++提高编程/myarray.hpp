//�Լ���ͨ�õ�������
#pragma once
#include<iostream>
using namespace std;
template<class T>
class myarray
{
public:
	myarray(int capacity)//�вι��� ��������
	{
		//cout << "myarray�вι������" << endl;
		m_capacity = capacity;
		m_size = 0;
		paddress = new T[m_capacity];
	}
	//��������
	myarray(const myarray& arr)
	{
		//cout << "myarray�����������" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//this->paddress = arr.paddress;
		this->paddress=new T[arr.m_capacity];//���
		//��aa�е����ݶ�����
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}
	//operator=��ֹǳ���� a=b=c
	myarray& operator=(const myarray& arr)
	{
		//cout << "myarrayoperator=����" << endl;
		//���ж�ԭ�������Ƿ������� ��������ͷ�
		if (this->paddress != NULL)
		{
			delete[]this->paddress;
			this->paddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
			
         }
		//���
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];//���
		//��aa�е����ݶ�����
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}
	//β�巨
	void push_back(const T&val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_capacity == this->m_size)
		{
			cout << "��С�ﵽ�������ޣ�����ʧ��" << endl;
			return;
		}
		this->paddress[this->m_size] = val;//������ĩβ��������
		this->m_size++;//���������С
	}
	//βɾ��
	void pop_back()
	{
		//���û����ʲ������һ��Ԫ�� ��Ϊβɾ
		if (this->m_size == 0)
		{
			cout << "Ŀǰ������" << endl;
		}
		this->m_size--;
	}
	//ͨ���±귽ʽ���������е�Ԫ��
	T& operator[](int index)
	{
		return this->paddress[index];
	}
	//������������
	int getcapacity()
	{
		return m_capacity;
	}
	//���������С
	int getsize()
	{
		return m_size;
	}
	//��������
	~myarray()
	{
		if(paddress!=NULL)
		{
			//cout << "myarray��������" << endl;
			delete[]paddress;
			paddress = NULL;
		}
	}
private:
	T* paddress;//ָ��ָ��������ٵ���ʵ����
	int m_capacity;//��������
	int m_size;//�����С
};