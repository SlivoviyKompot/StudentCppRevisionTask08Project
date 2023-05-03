﻿#include "tasks.h"

/*	Task 03. Min Number [наименьшее число]
 *
 *	Даны четыре целых числа. Определите наименьшее число.
 *
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Должно быть возвращено наименьшее из заданных четырёх чисел.
 * 
 *	[ input 1]: 1 2 3 4
 *	[output 1]: 1
 *
 *	[ input 2]: 7 7 7 7
 *	[output 2]: 7
 * 
 *	[ input 3]: -1 -2 -3 -4
 *	[output 3]: -4
 */

int task03(int a, int b, int c, int d) {
	if (a >= b) {
		swap(a, b);
	}
	if (b >= c) {
		swap(b, c);
	}
	if (c >= d) {
		swap(c, d);
	}
	if (a >= b) {
		swap(a, b);
	}
	if (b >= c) {
		swap(b, c);
	}
	if (a >= b) {
		swap(a, b);
	}
	return a;
}