#ifndef REFACTORING_EXTRACTCLASS_REFACTORED_CLASS_H_
#define REFACTORING_EXTRACTCLASS_REFACTORED_CLASS_H_

// 可以将与电话号码相关的行为分离到一个独立的类中
#include <string>

class TelephoneNumber{
 public:
	 TelephoneNumber(std::string officeareacode,
									 std::string officenumber);
	 ~TelephoneNumber();

	 std::string GetTelephoneNumber(){
		 return ("(" + officeareacode_ + ")" + officenumber_);
	 }

	 std::string get_officeareacode(){
		 return officeareacode_;
	 }

	 void set_officeareacode(std::string arg){
		 officeareacode_ = arg;
	 }

	 std::string get_officenumber(){
		 return officenumber_;
	 }

	 void set_officenumber(std::string arg){
		 officenumber_ = arg;
	 }

	private:
	 std::string officeareacode_;
	 std::string officenumber_;
};

class Person{
 public:
	 Person(std::string name,
					std::string officeareacode,
					std::string officenumber);
 	~Person();
 
 	std::string get_name() { return name_; }
 
 	std::string GetTelephoneNumber(){
 		return  officetelephone_->GetTelephoneNumber();
 	}
	
	TelephoneNumber* get_officetelephone(){
		return officetelephone_;
	}
 
 private:
 	std::string name_;
	 TelephoneNumber* officetelephone_;
};


Person::Person(std::string name,
							 std::string officeareacode,
							 std::string officenumber)
	:name_(name),
	 officetelephone_(new TelephoneNumber(officeareacode,officenumber)){};

Person::~Person(){
	delete officetelephone_;
	officetelephone_ = NULL;
}

TelephoneNumber::TelephoneNumber(std::string officeareacode,
																 std::string officenumber)
	:officeareacode_(officeareacode),officenumber_(officenumber){}


#endif // REFACTORING_EXTRACTCLASS_REFACTORED_CLASS_H_