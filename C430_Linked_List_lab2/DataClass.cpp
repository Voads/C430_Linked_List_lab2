#include "DataClass.h"

template <class dataType>
DataClass<dataType>::DataClass(){
	d = NULL;
}
template <class dataType>
DataClass<dataType>::DataClass(dataType &data){
	d = data;
}
template <class dataType>
DataClass<dataType>::DataClass(DataClass<dataType> &dc){
	d = dc.getData();
}

//accessors and mutators
template <class dataType>
void DataClass<dataType>::setDt(dataType &data) {
	d = data;
}

template <class dataType> 
dataType DataClass<dataType>::getDt() {
	return d;
}

template <class dataType>
DataClass<dataType>* DataClass<dataType>::getDc() {
	return this;
}
