#pragma once
#ifndef LISTENTRY_H
#define LISTENTRY_H
#include "DataClass.h"

//template<class dataType> 
class ListEntry {

	DataClass dc;
	ListEntry *prev;		//previous list entry ptr
	ListEntry *next;

public:
	ListEntry() {
		//dc = NULL;
		next = NULL;
		prev = NULL;
	}

	//data initializer
	ListEntry(DataClass data, ListEntry *n, ListEntry *p) : dc(data), next(n), prev(p)
	{
	}

	//copy constructor
	ListEntry(ListEntry &le) {
		dc = le.getData();
		prev = le.getPrev();
		next = le.getNext();
	}

	//~ListEntry() {
	//	if (prev != nullptr)
	//		delete[] prev;
	//	if (next != nullptr)
	//		delete[] next;
	//}

	//setters
	void setData(DataClass data) {
		dc = data.getDt();
	}
	void setPrev(ListEntry *p) {
		prev = p;
	}
	void setNext(ListEntry *n) {
		next = n;
	}

	//getters
	DataClass getData() {
		return dc;
	}
	ListEntry *getPrev() {
		return prev;
	}
	ListEntry *getNext() {
		return next;
	}
};


#endif