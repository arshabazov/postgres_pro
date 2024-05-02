#include <stdio.h>
#include <assert.h>
#include "quadratic_equation.h"

void test_no_roots() {
	solution sol = solve_equation(0, 0, 1);
	assert(sol.roots == 0);
	fprintf(stderr, "test_no_roots OK\n");
}

void test_linear_equation() {
	solution sol = solve_equation(0, 1, 1);
	assert(sol.roots == 1);
	assert(sol.x == -1);
	fprintf(stderr, "test_linear_equation OK\n");
}

void test_positive_discriminant() {
	solution sol = solve_equation(1, 7, -60);
	assert(sol.roots == 2);
	assert(sol.x1 == -12.0);
	assert(sol.x2 == 5.0);
	fprintf(stderr, "test_positive_discriminant OK\n");
}

void test_zero_discriminant() {
	solution sol = solve_equation(1, -6, 9);
	assert(sol.roots == 1);
	assert(sol.x == 3.0);
	fprintf(stderr, "test_zero_discriminant OK\n");
}

void test_negative_discriminant() {
	solution sol = solve_equation(-3, 2, -1);
	assert(sol.roots == 0);
	fprintf(stderr, "test_negative_discriminant OK\n");
}

void test_infinite_roots() {
	solution sol = solve_equation(0, 0, 0);
	assert(sol.roots == INFINITY);
	fprintf(stderr, "test_infinite_roots OK\n");
}

void test_order_of_roots() {
	solution sol = solve_equation(-5, 4, 1);
	assert(sol.x1 == -0.2);
	assert(sol.x2 == 1.0); 
	fprintf(stderr, "test_order_of_roots OK\n");
}

int main() {
	test_no_roots();
	test_linear_equation();
	test_positive_discriminant();
	test_zero_discriminant();
	test_negative_discriminant();
	test_infinite_roots();
	test_order_of_roots();

	return 0;
}
