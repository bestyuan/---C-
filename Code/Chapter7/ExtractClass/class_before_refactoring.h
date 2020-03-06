#ifndef REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_
#define REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_

#include <string>

class Person{
 public:
	Person(std::string name,
				 std::string officeareacode,
				 std::string officenumber);

	~Person(){};

	std::string get_name() { return name_; }
	 
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
	std::string name_;
	std::string officeareacode_;
	std::string officenumber_;
};

Person::Person(std::string name,
							 std::string officeareacode,
							 std::string officenumber)
	:name_(name),
	 officeareacode_(officeareacode),
	 officenumber_(officenumber){}

#endif // REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_