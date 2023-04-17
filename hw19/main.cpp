#include <iostream>
#include "lisp.hpp"

int main() {
	LispExpression le("(   ( ) q  ( a ( b ) )  ) ( a )");
	std::cout << le.PrettyPrint();

	return 0;
}