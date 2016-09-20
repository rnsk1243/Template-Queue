#pragma once

template<typename T>
class CTemplateQueue
{
	/*
	���ø� �ڵ�� ������ ������ ���� ���Ͽ� �־���.
	�޸𸮿� �ö󰡴� �������� �ڵ尡 �����Ǳ� ����.
	*/
	struct node
	{
		T data;
		node* next;
	};

	node* m_head;
	node* m_tail;
	int m_count;
public:
	CTemplateQueue() :m_head(nullptr), m_tail(nullptr), m_count(0) {}
	~CTemplateQueue() {}

	bool isEmpty() { return m_head == nullptr; }

	bool inQueue(T data)
	{
		node* temp = new node();
		temp->data = data;
		temp->next = nullptr;

		if (isEmpty())
		{
			m_head = temp;
			m_tail = temp;
		}
		else
		{
			m_tail->next = temp;
			m_tail = temp;
		}
		m_count++;
		return true;
	}

	T deQueue()
	{
		T temp;
		node* delNode;

		if (isEmpty())
		{
			// T�� string���� ��� ������...
			return NULL;
		}
		else
		{
			temp = m_head->data;
			delNode = m_head;
			m_head = m_head->next;
			delete delNode;
		}
		m_count--;
		return temp;
	}
};