////#include "List.h"
//
//template <class Item>
//int List<Item>::getCount() {
//	int count = 0;
//	ListEntry<Item> *lePtr;
//	//cycle through linkedlist and count each entry until: (le->getNext() == nullptr)
//	for (lePtr = head; lePtr->getNext() != nullptr; lePtr = lePtr->getNext()) {
//		count++;
//	}
//	return count;
//}
//template<class Item>
//void List<Item>::insertBeg(DataClass<Item> &data) {
//	ListEntry<Item> *lePtr;
//	lePtr = new ListEntry<Item>(data, nullptr, head);
//
//	if (!isEmpty()) {
//		//assign links from previous "head" node (moves to "2nd" place behind new head node)
//		head->setPrev(lePtr);
//	}
//	else
//		tail = lePtr;
//	head = lePtr;
//	delete lePtr;
//
//}
//
//template<class Item>
//void List<Item>::insertMid(DataClass<Item> &data) {
//	if (isEmpty()) {
//		insertBeg(data);
//	}
//	//insert into middle of list (total entries / 2)
//	else {
//		ListEntry<Item> *cursor; //navigates list
//		ListEntry<Item> *tempLe; //temporarly stores new node
//		cursor = head;
//
//		//find "middle" node/listEntry
//		int count = getCount()/2;
//		for (int i = 0; i < count; i++) {
//			cursor = cursor->getNext();
//		}
//		//insert between two entries
//		tempLe = new ListEntry<Item>(data, cursor, cursor->getNext());
//		cursor->getPrev()->setNext(tempLe);	//sets the prior node to point to new node
//		cursor->setPrev(tempLe);			//sets the next node to point to new node
//		delete tempLe;						
//
//	}
//
//}
//
//template <class Item>
//void List<Item>::insertEnd(DataClass<Item> &data) {
//	if (isEmpty()) {
//		insertBeg(data);
//		return;
//	}
//
//	ListEntry<Item> *lePtr;
//	lePtr = new ListEntry<Item>(data, nullptr, tail);
//	//tail pointer should already be set
//	if (getCount() > 1){
//		tail->setNext(lePtr);
//	}
//	//tail pointer should be null
//	tail = lePtr;
//
//	delete lePtr;
//}
