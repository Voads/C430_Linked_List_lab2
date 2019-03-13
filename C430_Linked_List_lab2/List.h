#pragma once
#ifndef LIST_H
#define LIST_H
#include "ListEntry.h"
#include "Iterator.h"


template <class Item>
class List {
	ListEntry<Item> *head;	//entry at beginning of list; first
	ListEntry<Item> *tail;	//entry at end; last
	//int count;		//number of list entries

public:
	Iterator<Item> iter(*this);
	List() {
		head = nullptr;
		tail = nullptr;
		//count = 0;
	}
	List(ListEntry<Item> *h, ListEntry<Item> *t) : head(h), tail(t)
	{
	}
	//////copy constructor 
	List(List &list){
		head = list.getHead();
		tail = list.getTail();
		//count = list.getCount();
	}

	~List() {
		if (head != nullptr)
			delete head;
		if (tail != nullptr)
			delete tail;
	}

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
	int getCount();

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
	void insertBeg(DataClass<Item> &data);
	void insertMid(DataClass<Item> &data);
	void insertEnd(DataClass<Item> &data);


};

#include "List.cpp"
#endif