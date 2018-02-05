#pragma once
#include"stdafx.h"
#include<algorithm>

template<typename T>static inline bool getSign(T a);
inline bool getSign(float a) { return signbit(a); }
inline bool getSign(long double a) { return signbit(a); }
inline bool getSign(double a) { return signbit(a); }
inline bool getSign(int a) { return a >> 31 == 1; }

template<typename T>static inline bool judgeNaN(T a);
inline bool judgeNaN(int a) { return false; }
inline bool judgeNaN(long a) { return false; }
inline bool judgeNaN(float a) {
	unsigned int* ptr = (unsigned int*)&a;
	int e = *ptr & 0x7f800000;
	e >>= 23;
	int m = *ptr & 0x007fffff;
	return e == 255 && m != 0;
}
inline bool judgeNaN(double a) {
	unsigned int* ptr = (unsigned int*)&a;
	int e = *ptr & 0x7ff0000000000000;
	e >>= 52;
	int m = *ptr & 0x000fffffffffffff;
	return e == 2047 && m != 0;
}

template<typename T>static inline bool judgeINF(T a);
inline bool judgeINF(int a) { return false; }
inline bool judgeINF(long a) { return false; }
inline bool judgeINF(float a) {
	unsigned int* ptr = (unsigned int*)&a;
	int s = *ptr >> 31;
	int e = *ptr & 0x7f800000;
	e >>= 23;
	int m = *ptr & 0x007fffff;
	return e == 255 && m == 0 && s == 0;
}
inline bool judgeINF(double a) {
	unsigned int* ptr = (unsigned int*)&a;
	int s = *ptr >> 63;
	int e = *ptr & 0x7ff0000000000000;
	e >>= 52;
	int m = *ptr & 0x000fffffffffffff;
	return e == 2047 && m == 0 && s == 0;
}

template<typename T>static inline bool judgeNINF(T a);
inline bool judgeNINF(int a) { return false; }
inline bool judgeNINF(long a) { return false; }
inline bool judgeNINF(float a) {
	unsigned int* ptr = (unsigned int*)&a;
	int s = *ptr >> 31;
	int e = *ptr & 0x7f800000;
	e >>= 23;
	int m = *ptr & 0x007fffff;
	return e == 255 && m == 0 && s == 1;
}
inline bool judgeNINF(double a) {
	unsigned int* ptr = (unsigned int*)&a;
	int s = *ptr >> 63;
	int e = *ptr & 0x7ff0000000000000;
	e >>= 52;
	int m = *ptr & 0x000fffffffffffff;
	return e == 2047 && m == 0 && s == 1;
}