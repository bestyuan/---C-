#ifndef REFACTORING_HIDEDELEGATE_CLASS_BEFORE_REFACTORING_H_
#define REFACTORING_HIDEDELEGATE_CLASS_BEFORE_REFACTORING_H_

#include <string>


// 在以下类中，如果客户希望知道某人的经理是谁，则需要先取得Department对象
// 如： manager = James.getDepartment().getManager()
// 这样就暴露了Department的工作原理。如果隐藏Department, 则可以减少耦合，
// 因此，可以在Person类中建立一个委托函数，详见refactored_class.h

class Person{
 public:
	Person();
	~Person(){};

	Department get_department();

	void set_department(Department arg);

 private:
	Department department_;

};

class Department{
 public:
	 Department(Person manager);

	 Person getManager();

private:
	std::string chargecode_;
	Person manager_;
};


#endif // REFACTORING_HIDEDELEGATE_CLASS_BEFORE_REFACTORING_H_