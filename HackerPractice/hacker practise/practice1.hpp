#pragma once

#include<algorithm>
#include <utility>
#include<vector>
#include <iostream>

using namespace std;


template<class T>class Practice1
{
public:
	Practice1(T & _a, T & _b, T & _c) {
		a = _a;
		b = _b;
		c = _c;
		ret.clear();
		ret.push_back(method1());
		ret.push_back(method2());
		ret.push_back(method3());
	}
	~Practice1() {
		ret.clear();
		ret = vector<pair<T, T>>();
	}

	void printResult() {
		cout << "Practice1:"<<endl;
		for (int i = 0; i < 3; i++) {
			cout << i<<"th method:\t"<<"x1=" << ret[i].first << ",x2=" << ret[i].second << endl;
		}
	}

private:
	T a;
	T b;
	T c;
	vector<pair<T, T>>ret;

	pair<T, T> method1() {
		T x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		T x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
		return pair<T, T>(x1, x2);
	}
	pair<T, T> method2() {
		T x2 = (2 * c) / (-b + sqrt(b*b - 4 * a*c));
		T x1 = (2 * c) / (-b - sqrt(b*b - 4 * a*c));
		return pair<T, T>(x1, x2);
	}
	pair<T, T> method3() {
		T x1 = -c / b;
		T x2 = -b / a + c / b;
		return pair<T, T>(x1, x2);
	}
};


