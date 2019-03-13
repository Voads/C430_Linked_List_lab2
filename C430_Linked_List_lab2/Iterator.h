#pragma once
#ifndef ITERATOR_H
#define ITERATOR_H
#include "List.h"

template <class Item>
class Iterator {
private:
	ListEntry<Item> *cursor;
	const List<Item> *list;

public:
	//Iterator();
	Iterator(List<Item> &l) {
		list = l;
	}
	~Iterator() {
		if (list != nullptr)
			delete list
		if (cursor != nullptr)
			delete cursor;
	}

	//set cursor to start of data structure 
	void start() {
		cursor = list->getHead();
	}

	void getNext() {
		if (cursor->getNext() != nullptr)
			cursor = cursor->getNext();
		return cursor;
	}

	bool hasNext() {
		if (cursor->getNext() != nullptr)
			return true;
		else
			return false;
	}

};


#endif

