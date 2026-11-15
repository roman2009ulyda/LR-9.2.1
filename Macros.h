#pragma once
#ifndef MACROS_H
#define MACROS_H
#include <iostream>
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#define ABS(a)     (((a) < 0) ? -(a) : (a))
#define SQR(a)     ((a) * (a))
#define IS_FIRST_BRANCH(z)  ((z) > 3)
#define PRINT_RESULT(w)  std::cout << #w << " = " << (w) << std::endl
#define PRINT_MSG(text)  std::cout << text << std::endl
#endif