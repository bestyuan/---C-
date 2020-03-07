#ifndef REFACTORING_SELFENCAPSULATEFIELD_REFACTORED_CLASS_H_
#define REFACTORING_SELFENCAPSULATEFIELD_REFACTORED_CLASS_H_

// 封装low_和high_这两个字段，可以定义设置和取值函数
// 当类中含有子类时，那么这种重构方法的价值就体现出来了
class IntRange{
 public:
	 bool Includes(int arg){
		 return arg >= get_low() && arg <= get_high();
	 }

	 void Grow(int factor){
		 set_high(get_high()*factor);
	 }

	 int get_low(){
		 return low_;
	 }

	 int get_high(){
		 return high_;
	 }

	 int set_low(int arg){
		 low_ = arg;
	 }

	 int set_high(int arg){
		 high_ = arg;
	 }
 private:
	 int low_;
	 int high_;
};









#endif // REFACTORING_EXTRACTCLASS_REFACTORED_CLASS_H_