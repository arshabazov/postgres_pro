#ifndef QUADRATC_EQUATION_H
#define QUADRATC_EQUATION_H

#include <math.h>

typedef struct {
	double roots;
	union {
		double x;
		struct {
			double x1;
			double x2;
		};
	};
} solution;

/*
 * Функция возвращает в качестве ответа структуру solution
 * @roots - количество корней: 0, 1, 2, INFINITY
 * @x - в случае если уравнение имеет только один корень, то значение корня
 * присваивается переменной х
 * @x1, x2 - если уравнение имеет два корня, значение корней присваиваются
 * переменным x1 и x2
 **/
solution solve_equation(double a, double b, double c);

#endif // QUADRATC_EQUATION_H
