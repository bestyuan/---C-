#include "class_before_refactoring.h"

Person::Person(std::string name,
	std::string officeareacode,
	std::string officenumber)
	:name_(name),
	officeareacode_(officeareacode),
	officenumber_(officenumber){
}

std::string Person::get_name() { 
	return name_; 
}

std::string Person::GetTelephoneNumber(){
	return ("(" + officeareacode_ + ")" + officenumber_);
}

std::string Person::get_officeareacode(){
	return officeareacode_;
}

void Person::set_officeareacode(std::string arg){
	officeareacode_ = arg;
}

std::string Person::get_officenumber(){
	return officenumber_;
}

void Person::set_officenumber(std::string arg){
	officenumber_ = arg;
}