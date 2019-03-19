//#include "DataClass.h"
//#include "ListEntry.h"
#include "List.h"
#include "Iterator.h"
//#include "Header.h"
//using namespace list_entry_6A;

//template<typename T>
//void instantiateArray() {
//
//
//};

int main() {
	int num = 23;
	std::string str("hi");
	DataClass<int> dc(num);
	List<int> list;
	Iterator<int> listIter(list);
	//dc.setDt(str);
	//instantiate list
	list.insertBeg(dc);

	num = 10;
	DataClass<int> dc2(num);

	
	list.insertBeg(dc2);
	//list.insertMid(dc2);
	//dc.setDt(num);
	list.insertEnd(dc);
	list.insertMid(dc);

	std::cout << "\nlist head:" << list.getHead()->getDc().getDt() << "\n";
	std::cout << "list tail:" << list.getTail()->getDc().getDt() << "\n";
	std::cout << "list count:" << list.getCount() << "\n";

	std::cin.get();
	return 0;
}