#ifndef MATHLIB_H
#define MATHLIB_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>


// dll macros
#ifdef MATHLIB_H_EXPORTS
#define MATHLIB_H_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif

extern "C" MATHLIB_API int add(int a, int b);
extern "C" MATHLIB_API void printId();

class MATHLIB_API Function {
private:
	Function();

public:
	void print();
	static Function generate();
};

#endif