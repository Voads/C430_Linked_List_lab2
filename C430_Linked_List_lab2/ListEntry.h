#pragma once
#include "DataClass.h"
#ifndef LISTENTRY_H
#define LISTENTRY_H

template<class Item> 
class ListEntry {

	DataClass<Item> dc;
	ListEntry<Item> *prev;		//previous list entry ptr
	ListEntry<Item> *next;

public:
	ListEntry();

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