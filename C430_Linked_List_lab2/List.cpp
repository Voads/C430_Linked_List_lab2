#include "List.h"
void List::insertBeg(DataClass data) {
	//ListEntry newLE;
	//CASE 1: Empty list
	if (isEmpty()) {
		ListEntry newLE(data, nullptr, nullptr);
		head = &newLE;
		tail = &newLE;
	}
	else {
		ListEntry newLE(data, nullptr, head);
		head = &newLE;
	}

}
void List::insertMid(DataClass data) {
	if (isEmpty()) {
		ListEntry newLE(data, nullptr, nullptr);
		head = &newLE;
		tail = &newLE;
	}
	//insert into middle of list (count / 2)
	else {

	}
}
void List::insertEnd(DataClass data) {
	if (isEmpty()) {
		ListEntry newLE(data, nullptr, nullptr);
		head = &newLE;
		tail = &newLE;
	}
	else {
		ListEntry newLE(data, nullptr, tail);
		tail = &newLE;
	}
}
