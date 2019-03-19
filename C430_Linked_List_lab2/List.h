#pragma once
#ifndef LIST_H
#define LIST_H
#include "ListEntry.h"
//#include "Iterator.h"


template <class Item>
class List {
	ListEntry<Item> *head;	//entry at beginning of list; first
	ListEntry<Item> *tail;	//entry at end; last
	//int count;		//number of list entries

public:
//	Iterator<Item> iter(*this);
	List() {
		head = nullptr;
		tail = nullptr;
		//count = 0;
	}
	List(ListEntry<Item> *h, ListEntry<Item> *t) : head(h), tail(t)
	{
	}
	//////copy constructor 
	List(List<Item> &list){
		head = list.getHead();
		tail = list.getTail();
		//count = list.getCount();
	}

	//~List() {
	//	if (head != nullptr)
	//		delete head;
	//	if (tail != nullptr)
	//		delete tail;
	//}

	//setters
	void setHead(ListEntry<Item> *newHead) {
		head = newHead;
	}
	void setTail(ListEntry<Item> *newTail) {
		tail = newTail;
	}

	//getters
	ListEntry<Item> *getHead() {
		return head;
	}
	ListEntry<Item> *getTail() {
		return tail;
	}

	//helper functions
	//ListEntry *search(dataclass &dc) {
		//for (int i = 0; i < count; i++)
	//}

	//isFull();	//currently no cap to List size
	//checks if a list is empty
	bool isEmpty() {
		if (head == nullptr)
			return true;
		else
			return false;
	}

	//other 
	/*void insertBeg(DataClass<Item> &data);
	void insertMid(DataClass<Item> &data);
	void insertEnd(DataClass<Item> &data);*/

	//int getCount();
	int getCount() {
		int count = 0;
		ListEntry<Item> *lePtr;
		//cycle through linkedlist and count each entry until: (le->getNext() == nullptr)
		for (lePtr = head; lePtr != nullptr; lePtr = lePtr->getNext()) {
			count++;
		}
		return count;
	}
	
	void insertBeg(DataClass<Item> &data) {
		ListEntry<Item> *lePtr;
		lePtr = new ListEntry<Item>(data, head, nullptr);

		if (!isEmpty()) {
			//assign links from previous "head" node (moves to "2nd" place behind new head node)
			head->setPrev(lePtr);
		}
		else {
			tail = lePtr;
			//tail should already point to a node if List is not empty
		}

		head = lePtr;
		//delete lePtr

	}

	void insertMid(DataClass<Item> &data) {
		if (isEmpty()) {
			insertBeg(data);
		}
		//insert into middle of list (total entries / 2)
		else {
			ListEntry<Item> *cursor; //navigates list
			ListEntry<Item> *tempLe; //temporarly stores new node
			cursor = head;

			//find "middle" node/listEntry
			int count = getCount() / 2;
			for (int i = 0; i < count; i++) {
				cursor = cursor->getNext();
			}
			tempLe = new ListEntry<Item>(data, cursor, cursor->getNext());
			//if cursor still equals head
			if (count == 0) {
				//simply set new node behind head node
				head->setPrev(tempLe);
			}
			else {
				//insert between two entries
				cursor->getPrev()->setNext(tempLe);	//sets the prior node of the "middle node" to point to new node
				cursor->setPrev(tempLe);			//sets the next node to point to new node
			}
			//delete tempLe;

		}

	}

	void insertEnd(DataClass<Item> &data) {
		if (isEmpty()) {
			insertBeg(data);
			return;
		}

		ListEntry<Item> *lePtr;
		lePtr = new ListEntry<Item>(data, nullptr, tail);
		//tail pointer should already be set
		if (getCount() > 1) {
			tail->setNext(lePtr);
		}
		//tail pointer should be null
		tail = lePtr;

		//delete lePtr;
	}



};

//#include "List.cpp"
#endif