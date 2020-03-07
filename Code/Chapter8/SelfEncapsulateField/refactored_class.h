#ifndef REFACTORING_SELFENCAPSULATEFIELD_REFACTORED_CLASS_H_
#define REFACTORING_SELFENCAPSULATEFIELD_REFACTORED_CLASS_H_

// ��װlow_��high_�������ֶΣ����Զ������ú�ȡֵ����
// �����к�������ʱ����ô�����ع������ļ�ֵ�����ֳ�����
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