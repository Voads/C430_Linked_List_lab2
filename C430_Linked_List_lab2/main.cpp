//#include "DataClass.h"
//#include "ListEntry.h"
#include "List.h"
#include "Header.h"

//template<class dataType>
int main() {
	dataType dt;
	dt.fl = 4.44f;
	DataClass d(dt);
	std::cout << d.getDt().fl << "";

	ListEntry le;
	le.setData(d);
	std::cout << le.getData().getDt().fl << "\n";
	List list;
	list.insertBeg(d);

	std::cin.get();
	return 0;
}