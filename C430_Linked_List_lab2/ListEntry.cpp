#include "ListEntry.h"
//#include "DataClass.h"
//using namespace list_entry_6A;

//namespace list_entry_6A {
	//template <class Item>
	//ListEntry<Item>::ListEntry() {
	//	dc = NULL;
	//	next = nullptr;
	//	prev = nullptr;
	//}

	////data initializer
	//template <class Item>
	//ListEntry<Item>::ListEntry(DataClass< &data, ListEntry *n, ListEntry *p) : dc(data)
	//{
	//	next = new ListEntry(*n);
	//	prev = new ListEntry(*p);
	//}
	//
	////copy constructor
	//template <class Item>
	//ListEntry<Item>::ListEntry(ListEntry &le) {
	//	dc = le.getDc();
	//	prev = le.getPrev();
	//	next = le.getNext();
	//}

	//setters
	template <class Item>
	void ListEntry<Item>::setData(DataClass<Item> &data) {
		dc = data;
	}
	template <class Item>
	void ListEntry<Item>::setPrev(ListEntry *p) {
		prev = p;
	}
	template <class Item>
	void ListEntry<Item>::setNext(ListEntry *n) {
		next = n;
	}

	//getters
	template <class Item>
	DataClass<Item> ListEntry<Item>::getDc() {
		return dc;
	}
	template <class Item>
	ListEntry<Item>* ListEntry<Item>::getPrev() {
		return prev;
	}
	template <class Item>
	ListEntry<Item>* ListEntry<Item>::getNext() {
		return next;
	}
//}