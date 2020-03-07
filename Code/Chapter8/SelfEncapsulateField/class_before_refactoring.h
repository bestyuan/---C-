#ifndef REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_
#define REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_


// ×Ô·â×°×Ö¶Î
class IntRange{
 public:
	bool Includes(int arg){
		return arg >= low_ && arg <= high_;
	}

	void Grow(int factor){
		high_ = high_*factor;
	}

	IntRange(int low, int high){
		low_ = low;
		high_ = high;
	}
 private:
	 int low_;
	 int high_;
};


#endif // REFACTORING_EXTRACTCLASS_CLASS_BEFORE_REFACTORING_H_