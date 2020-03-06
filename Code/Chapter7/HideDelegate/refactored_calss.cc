#include "refactored_class.h"

//Department Person::get_department(){
//	return department_;
//}

void Person::set_department(Department arg){
	department_ = arg;
}

Person Person::getManager(){
	return department_.getManager();
}

Department::Department(Person manager){
	manager_ = manager;
}

Person Department::getManager(){
	return manager_;
}