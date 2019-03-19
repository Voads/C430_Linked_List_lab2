#pragma once
#ifndef LIST_ENTRY_H
#define LIST_ENTRY_H
#include "DataClass.h"

template<class Item>
class ListEntry
{
private:
	DataClass<Item> dc;
	ListEntry<Item> *prev;		//previous list entry ptr
	ListEntry<Item> *next;

public:
	ListEntry() {
		//dc = NULL;
		next = nullptr;
		prev = nullptr;

	}

	//data initializer
	ListEntry(DataClass<Item> &data, ListEntry<Item> *n, ListEntry<Item> *p) {
		dc = data;
		next = n;
		prev = p;
	}

	//copy constructor
	ListEntry(ListEntry<Item> &le) {
		dc = le.getDc();
		next = le.getNext();
		prev = le.getPrev();
	}


	~ListEntry() {
		if (prev != nullptr)
			delete prev;
		if (next != nullptr)
			delete next;
	}

	//setters
	void setData(DataClass<Item> &data);
	void setPrev(ListEntry<Item> *p);
	void setNext(ListEntry<Item> *n);

	//getters
	DataClass<Item> getDc();
	ListEntry<Item>* getPrev();
	ListEntry<Item>* getNext();
};

//#include "DataClass.cpp"
#include "ListEntry.cpp"
#endif