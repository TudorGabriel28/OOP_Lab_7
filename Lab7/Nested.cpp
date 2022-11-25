#include <iostream>
#include "Nested.h"
using namespace std;


NestedNode::NestedNode()
{
	data = 0;
	next = NULL;
}

NestedNode::NestedNode(int data)
{
	this->data = data;
	this->next = NULL;
}

NestedNode::NestedLinkedlist::NestedLinkedlist() { head = NULL; }

void NestedNode::NestedLinkedlist::addNode(int data)
{
	NestedNode* newNode = new NestedNode(data);

	if (head == NULL) {
		head = newNode;
		return;
	}

	NestedNode* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = newNode;
};


void NestedNode::NestedLinkedlist::removeNode(int offset)
{
	NestedNode* temp1 = head, * temp2 = NULL;
	int ListLen = 0;

	if (head == NULL) {
		cout << "List is empty" << endl;
		return;
	}

	while (temp1 != NULL) {
		temp1 = temp1->next;
		ListLen++;
	}

	if (ListLen < offset) {
		cout << "Index out of range"
			<< endl;
		return;
	}

	temp1 = head;

	if (offset == 1) {

		head = head->next;
		delete temp1;
		return;
	}

	while (offset-- > 1) {

		temp2 = temp1;
		temp1 = temp1->next;
	}
	temp2->next = temp1->next;

	delete temp1;
};

void NestedNode::NestedLinkedlist::printList()
{
	NestedNode* temp = head;

	if (head == NULL) {
		cout << "List is empty" << endl;
		return;
	}

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
