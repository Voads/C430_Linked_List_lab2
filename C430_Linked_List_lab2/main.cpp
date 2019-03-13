//#include "DataClass.h"
//#include "ListEntry.h"
#include "List.h"
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
	//dc.setDt(str);
	std::cout << dc.getDt() << "\n";
	
	//instantiate list
	List<int> list;
	ListEntry<int> le;
	num = 10;
	dc.setDt(num);
	le.setData(dc);

	std::cout << le.getDc().getDt() << std::endl;
	
	//list.insertBeg(d);

	//dt.fl = 21.2f;
	//d.setDt(dt);
	//list.insertEnd(d);

	//dt.fl = 00.8f;
	//d.setDt(dt);
	//list.insertEnd(d);

	//dt.fl = 1.1f;
	//d.setDt(dt);
	//list.insertMid(d);

	//std::cout << "\nlist head:" << list.getHead()->getDc().getDt().fl << "\n";
	//std::cout << "list tail:" << list.getTail()->getDc().getDt().fl << "\n";

	std::cin.get();
	return 0;
}