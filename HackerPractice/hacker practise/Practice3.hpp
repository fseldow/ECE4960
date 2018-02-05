#pragma once
#include<iostream>
#include"helper_practice3.hpp"

using namespace std;


class Practice3 {
public:
	Practice3() {
	}
	~Practice3() {
	}
	template<typename T> bool isPostiveZero(T a) {
		if (a != 0)return false;
		return !getSign(a);
	}
	template<typename T> bool isNegativeZero(T a) {
		if (a != 0)return false;
		return getSign(a);
	}


	template<typename T>void test(T a) {
		cout << "is+0:" << isPostiveZero(a) << endl;
		cout << "is-0:" << isNegativeZero(a) << endl;
		cout << "isINF:" << judgeINF(a) << endl;
		cout << "isNINF:" << judgeNINF(a) << endl;
		cout << "isNaN:" << judgeNaN(a) << endl;
		cout << endl;
	}
	void getReport() {
		cout << "Practice3:\n";
		cout << "testing for +0\n";test(+0);
		cout << "testing for -0\n"; test(-0);
		cout << "testing for +1.0\n"; test(+1.0);
		cout << "testing for -1.0\n"; test(-1.0);
		cout << "testing for DBL_MAX\n"; test(DBL_MAX);
		cout << "testing for -1.0 * DBL_MAX\n"; test(-1.0 * DBL_MAX);
		cout << "testing for +0.0\n"; test(+0.0);
		cout << "testing for -0.0\n"; test(-0.0);
		cout << "testing for INF\n"; test(INFINITY);
		cout << "testing for NINF\n"; test(-1*INFINITY);
	}
private:
};


