#ifndef REFACTORING_REPLACEDATAVALUEWITHOBJECT_CLASS_BEFORE_REFACTORING_H_
#define REFACTORING_REPLACEDATAVALUEWITHOBJECT_CLASS_BEFORE_REFACTORING_H_
#include<string>

// ���˽�г�Ա�������࣬���Կ��ǽ���һ����
class Order{
 public:
	 Order(std::string customer){
		 customer_ = customer;
	 }
	 std::string get_customer(){
		 return customer_;
	 }
	 void set_customer(std::string arg){
		 customer_ = arg;
	 }
 private:
	 std::string customer_;

};

#endif // REFACTORING_REPLACEDATAVALUEWITHOBJECT_CLASS_BEFORE_REFACTORING_H_