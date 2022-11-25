#pragma once
class FriendsNode {
	int data;
	FriendsNode* next;

public:
	FriendsNode();
	

	FriendsNode(int data);

	friend class FriendsLinkedlist;
	friend void printList(FriendsNode*);
};

class FriendsLinkedlist {
	FriendsNode* head;

public:

	FriendsLinkedlist();

	void addNode(int data);


	void removeNode(int offset);

	FriendsNode* getHead();
};

void printList(FriendsNode* head);

