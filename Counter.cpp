#include <iostream>
#include "Counter.h"


using namespace std;
	

	Counter::Counter() {
		num = 1;
	}
	Counter::Counter(int num) {
		this->num = num;
	}
	void Counter::add() {
		num++;
	}
	void Counter::sub() {
		num--;
	}
	void Counter::show() {
		cout << num << endl;
	}

