#pragma once
#ifndef LIST_H
#define LIST_H
#include "ListEntry.h"


//template <class dataType>
class List {
	ListEntry *head;	//entry at beginning of list; first
	ListEntry *tail;	//entry at end; last
	//int count;			//number of list entries

public:
	List() {
		head = nullptr;
		tail = nullptr;
		//count = 0;
	}
	List(ListEntry *h, ListEntry *t) : head(h), tail(t) 
	{
	}
	//////copy constructor 
	List(List &list){
		head = list.getHead();
		tail = list.getTail();
		//count = list.getCount();
	}

	~List() {
		delete[] head;
		delete[] tail;
	}

	//setters
	void setHead(ListEntry *newHead) {
		head = newHead;
	}
	void setTail(ListEntry *newTail) {
		tail = newTail;
	}

	//getters
	ListEntry *getHead() {
		return head;
	}
	ListEntry *getTail() {
		return tail;
	}
	//int getCount() {
	//	//cycle through linkedlist and count each entry until: (le->getNext() == nullptr)
	//	return count;
	//}

	//helper functions
	//ListEntry *search(dataclass &dc) {
		//for (int i = 0; i < count; i++)
	//}

	//isFull();	//currently no cap to List size
	//checks if a list is empty
	bool isEmpty() {
		if (getHead() == nullptr)
			return true;
		else
			return false;
	}

	//other 
	void insertBeg(DataClass data);
	void insertMid(DataClass data);
	void insertEnd(DataClass data);

};

#endif