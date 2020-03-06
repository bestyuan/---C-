#ifndef REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_
#define REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_

#include <string>

class Person{
 public:
	Person(std::string name,
				 std::string officeareacode,
				 std::string officenumber);

	~Person(){};

	std::string get_name();

	std::string GetTelephoneNumber();

	std::string get_officeareacode();

	void set_officeareacode(std::string arg);

	std::string get_officenumber();

	void set_officenumber(std::string arg);

 private:
	std::string name_;
	std::string officeareacode_;
	std::string officenumber_;
};

#endif // REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_