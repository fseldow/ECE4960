#pragma once
#include <iostream>

using namespace std;
class Practice2 {
public:
	Practice2() {
		//
		
		

		
		
	}
	~Practice2() {

	}
	void printResult() {
		cout << "Practice2:\n";
		//NaN & INF in double
		double x = 0.0, y = 0.0, doubleResult1, doubleResult2;
		try {
			doubleResult1 = 1 / x;
			cout << "1/0.0=" << doubleResult1 << endl;
		}
		catch (exception &e) { cout << e.what() << endl; }
		try {
			doubleResult2 = x / y;
			cout << "1/0.0=" << doubleResult2 << endl;
		}
		catch (exception &e) { cout << e.what() << endl; }

		
		//Nan & INF in Integers
		/*
		long m = 0, n = 0,intResult1,intResult2;
		try {
			if (m == 0)throw(m);
			intResult1 = 1 / m;
			cout << "1/0=" << intResult1 << endl;
		}
		catch (exception &e) { cout << e.what() << endl; }

		try {
			if (n == 0)throw(n);
			intResult2 = m / n;
			cout << "0/0=" << intResult2 << endl;
		}
		catch (exception &e) { cout << e.what() << endl; }
		*/
		cout << "NaN & INF in Integers:  Unhandled exception at 0x742F08B2 in hacker practise.exe: Microsoft C++ exception: long at memory location 0x0075FB3C. occurred\n";

		cout << "Overflow handling:\n";
		long i = 1, intFractorial = 1;
		for (i = 2; i < 30; i++) {
			intFractorial *= i;
			cout << "i=" << i << '\t' << "intFactorial=" << intFractorial << endl;
		}
	}
private:

};
