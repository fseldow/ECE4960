// hacker practise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"practice1.hpp"
#include"Practice2.hpp"
#include"Practice3.hpp"


int main()
{
	//practice1
	double a= 1E-20, b=1E3, c=1E3;
	Practice1<double> p1(a,b,c);
	p1.printResult();
	cout << endl;

	//practice2
	Practice2 p2;
	p2.printResult();
	cout << endl;

	//practice3
	Practice3 p3;
	p3.getReport();
    return 0;
}

