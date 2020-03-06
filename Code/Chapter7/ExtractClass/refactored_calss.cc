#include "refactored_class.h"


TelephoneNumber::TelephoneNumber(std::string officeareacode,
	std::string officenumber)
	:officeareacode_(officeareacode), officenumber_(officenumber){
}

std::string TelephoneNumber::GetTelephoneNumber(){
	return ("(" + officeareacode_ + ")" + officenumber_);
}

std::string TelephoneNumber::get_officeareacode(){
	return officeareacode_;
}

void TelephoneNumber::set_officeareacode(std::string arg){
	officeareacode_ = arg;
}

std::string TelephoneNumber::get_officenumber(){
	return officenumber_;
}

void TelephoneNumber::set_officenumber(std::string arg){
	officenumber_ = arg;
}


Person::Person(std::string name,
	std::string officeareacode,
	std::string officenumber)
	:name_(name),
	officetelephone_(new TelephoneNumber(officeareacode, officenumber)){
};

Person::~Person(){
	delete officetelephone_;
	officetelephone_ = NULL;
}

std::string Person::get_name() { 
	return name_; 
}

std::string Person::GetTelephoneNumber(){
	return  officetelephone_->GetTelephoneNumber();
}

TelephoneNumber* Person::get_officetelephone(){
	return officetelephone_;
}