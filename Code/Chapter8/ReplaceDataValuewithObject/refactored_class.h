#ifndef REFACTORING_REPLACEDATAVALUEWITHOBJECT_REFACTORED_CLASS_H_
#define REFACTORING_REPLACEDATAVALUEWITHOBJECT_REFACTORED_CLASS_H_
#include <string>

class Customer{
 public: 
	 Customer(std::string name){
		 name_ = name;
	 }
	 std::string get_name(){
		 return name_;
	 }
 private:
	 std::string name_;
};
class Order{
public:
	Order(std::string customer){
		customer_ = new Customer(customer);
	}
	~Order(){
		delete customer_;
	}
	std::string get_customer(){
		return customer_->get_name();
	}
	void set_customer(std::string arg){
		if (customer_ != NULL) delete customer_;
		customer_ = new Customer(arg);
	}
private:
	Customer* customer_;

};


#endif // REFACTORING_REPLACEDATAVALUEWITHOBJECT_REFACTORED_CLASS_H_