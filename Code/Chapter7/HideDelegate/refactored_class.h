#ifndef REFACTORING_HIDEDELEGATE_REFACTORED_CLASS_H_
#define REFACTORING_HIDEDELEGATE_REFACTORED_CLASS_H_

#include <string>

// 添加委托函数后，调用方法如下：
// manager = James.getManager();
class Person{
public:
	Person();
	~Person();
	// 该函数可以遗弃
	// Department get_department();

	void set_department(Department arg);
	// 新添加的委托函数
	Person getManager();

private:
	Department department_;

};

class Department{
public:
	Department(Person manager){
		manager_ = manager;
	}

	Person getManager(){
		return manager_;
	}
private:
	std::string chargecode_;
	Person manager_;
};


#endif // REFACTORING_HIDEDELEGATE_REFACTORED_CLASS_H_