#include<iostream>
#include<string>
#include"TemplateQueue.h"
using namespace std;



void main()
{
	//CTemplateQueue<int>* myQueue = new CTemplateQueue<int>;
	//CTemplateQueue<string>* myQueue = new CTemplateQueue<string>;
	CTemplateQueue<char*>* myQueue = new CTemplateQueue<char*>;
	//CTemplateQueue<float>* myQueue = new CTemplateQueue<float>;

	//myQueue->inQueue(0);
	//myQueue->inQueue(1);

	myQueue->inQueue("abc");
	myQueue->inQueue("123");

	//myQueue->inQueue('a');
	//myQueue->inQueue('b');

	//myQueue->inQueue(1.5f);
	//myQueue->inQueue(2.4f);
	myQueue->deQueue();
	myQueue->deQueue();

	myQueue->deQueue();
	myQueue->deQueue();
	myQueue->deQueue();
	myQueue->deQueue();


}