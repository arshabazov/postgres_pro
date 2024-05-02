
#include "quadratic_equation.h"

solution solve_equation(double a, double b, double c) {
	solution sol;

	if (a == 0) {
		if (b != 0) {
			sol.roots = 1;
			sol.x = -c/b;
		} else if (c != 0) {
			sol.roots = 0;
		} else {
			sol.roots = INFINITY;
		}
	} else {
		double discriminant = (b * b) - 4 * a * c;

		if (discriminant == 0) {
			sol.roots = 1;
			sol.x = -b / (2 * a);
		} else if (discriminant > 0) {
			double x1 = (-b + sqrt(discriminant)) / (2 * a);
			double x2 = (-b - sqrt(discriminant)) / (2 * a);
			sol.roots = 2;
			if (x1 > x2) {
				sol.x1 = x2;
				sol.x2 = x1;
			} else {
				sol.x1 = x1;
				sol.x2 = x2;
			}
		} else {
			sol.roots = 0;
		}
	}
	return sol;
}
