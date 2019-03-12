//#include "DataClass.h"
//#include "ListEntry.h"
#include "List.h"
//#include "Header.h"


//template<typename T>
//void instantiateArray() {
//
//
//};

int main() {
	int num = 23;
	DataClass<int> dc;
	dc.setDt(num);
	std::cout << dc.getDt() << "";
	
	//instantiate list
	//List<int> list;
	//ListEntry<int> le, le0;
	
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