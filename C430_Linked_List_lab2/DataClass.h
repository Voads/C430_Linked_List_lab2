#pragma once
#include "Header.h"
#ifndef DATACLASS_H
#define DATACLASS_H

struct dataType {
	int i;
	char ch[10];
	//std::string str;
	//double db;
	float fl;

};

//template <class dataType>
class DataClass {

	dataType d;

public:
	//constructors
	DataClass() {
		//d = NULL;
	}

	DataClass(dataType data) : d(data)
	{
	}

	DataClass(DataClass &dc) {
		d = dc.getDt();
	}

	/*~DataClass() {
		if (d != NULL)
			delete[] d;
	}*/

	//accessors and mutators
	void setDc(dataType data) {
		d = data;
	}
	/*void setDc(DataClass data) {
		d = data.getDc();
	}*/

	dataType getDt() {
		return d;
	}

};


#endif 