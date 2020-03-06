#include "class_before_refactoring.h"

Department Person::get_department(){
	return department_;
}

void Person::set_department(Department arg){
	department_ = arg;
}

Department::Department(Person manager){
	manager_ = manager;
}

Person Department::getManager(){
	return manager_;
}