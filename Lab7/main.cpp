#include <iostream>
#include "Friends.h"
#include "Nested.h"

using namespace std;


int main()
{
	NestedNode::NestedLinkedlist nestedlinkedList;

	nestedlinkedList.addNode(1);
	nestedlinkedList.addNode(2);
	nestedlinkedList.addNode(3);
	nestedlinkedList.addNode(4);

	nestedlinkedList.printList();
	cout << endl;

	nestedlinkedList.removeNode(2);

	nestedlinkedList.printList();

	cout << endl;


	FriendsLinkedlist friendsLinkedList;

	friendsLinkedList.addNode(1);
	friendsLinkedList.addNode(2);
	friendsLinkedList.addNode(3);
	friendsLinkedList.addNode(4);

	printList(friendsLinkedList.getHead());
	cout << endl;

	friendsLinkedList.removeNode(2);

	printList(friendsLinkedList.getHead());
	cout << endl;

	return 0;
}