#ifndef REFACTORING_HIDEDELEGATE_REFACTORED_CLASS_H_
#define REFACTORING_HIDEDELEGATE_REFACTORED_CLASS_H_

#include <string>

// ���ί�к����󣬵��÷������£�
// manager = James.getManager();
class Person{
public:
	Person();
	~Person();
	// �ú�����������
	// Department get_department();

	void set_department(Department arg);
	// ����ӵ�ί�к���
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