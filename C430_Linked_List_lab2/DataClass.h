#pragma once
#ifndef DATA_CLASS_H
#define DATA_CLASS_H
#include "Header.h"

template <class dataType>
class DataClass 
{
private:
	dataType d;
	//DataClass<dataType> * dt;
public:
	//constructors
	DataClass();
	//DataClass(std::string s) {
	//	d = s;
	//}
	DataClass(dataType &data);
	//copy con
	DataClass(DataClass<dataType> &dc);

	//~DataClass() {
	/*
		if (d != NULL)
			delete[] d;
	}*/

	//accessors and mutators
	void setDt(dataType &data);
	/*void setDc(DataClass data);
	}*/
	dataType getDt();
	DataClass<dataType>* getDc();
};

/*
	////template <class dataType>
	//class DataClass {
	//
	//	dataType d;
	//
	//public:
		////constructorsDataClass() {
		//	//d = NULL;
		//}
		//

		//DataClass(dataType &data) : d(data)
		//{
		//}

		////copy con
		//DataClass(DataClass &dc) {
		//	d = dc.getDt();
		//}

		///*~DataClass() {
		//	if (d != NULL)
		//		delete[] d;
		//}

		////accessors and mutators
		//void setDt(dataType &data) {
		//	d = data;
		//}
		///*void setDc(DataClass data) {
		//	d = data.getDc();
		//}

		//dataType getDt() {
		//	return d;
		//}

	//};
*/

#include "DataClass.cpp"
#endif 