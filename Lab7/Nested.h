#pragma once


class NestedNode {
	int data;
	NestedNode* next;

public:
	NestedNode();

	NestedNode(int data);


	class NestedLinkedlist {
		NestedNode* head;

	public:

		NestedLinkedlist();

		void addNode(int data);


		void removeNode(int offset);

		void printList();
	};



};
