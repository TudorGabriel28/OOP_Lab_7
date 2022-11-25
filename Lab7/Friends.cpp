#include <iostream>
#include "Friends.h"
using namespace std;

FriendsNode::FriendsNode()
{
	data = 0;
	next = NULL;
};

FriendsNode::FriendsNode(int data)
{
	this->data = data;
	this->next = NULL;
};

FriendsNode* FriendsLinkedlist::getHead() {
	return head;
}


FriendsLinkedlist::FriendsLinkedlist() { head = NULL; };

void FriendsLinkedlist::addNode(int data)
{
	FriendsNode* newNode = new FriendsNode(data);

	if (head == NULL) {
		head = newNode;
		return;
	}

	FriendsNode* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = newNode;
};

void FriendsLinkedlist::removeNode(int offset)
{
	FriendsNode* temp1 = head, * temp2 = NULL;
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

void printList(FriendsNode* head)
{
	FriendsNode* temp = head;

	if (head == NULL) {
		cout << "List is empty" << endl;
		return;
	}

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
