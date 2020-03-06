#ifndef REFACTORING_HIDEDELEGATE_CLASS_BEFORE_REFACTORING_H_
#define REFACTORING_HIDEDELEGATE_CLASS_BEFORE_REFACTORING_H_

#include <string>


// ���������У�����ͻ�ϣ��֪��ĳ�˵ľ�����˭������Ҫ��ȡ��Department����
// �磺 manager = James.getDepartment().getManager()
// �����ͱ�¶��Department�Ĺ���ԭ���������Department, ����Լ�����ϣ�
// ��ˣ�������Person���н���һ��ί�к��������refactored_class.h

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