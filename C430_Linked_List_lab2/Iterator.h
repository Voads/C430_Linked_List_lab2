#pragma once
#ifndef ITERATOR_H
#define ITERATOR_H
#include "List.h"

template <class Item>
class Iterator {
private:
	ListEntry<Item> *cursor;
	List<Item> *list;

public:
	Iterator() {
		cursor = nullptr;
		list = nullptr;
	}
	Iterator(List<Item> &l) {
		list = l;
		cursor = list->getHead();
	}
	/*~Iterator() {
		if (list != nullptr)
			delete list;
		if (cursor != nullptr)
			delete cursor;
	}*/

	//set cursor to start of data structure 
	void start() {
		cursor = list->getHead();
	}

	void getNext() {
		if (cursor->getNext() != nullptr)
			cursor = cursor->getNext();
		else
			std::cout << "Iterator::getNext(): cursor at end of list... \n";
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

