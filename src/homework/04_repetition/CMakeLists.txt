add_library(hw_04_library "repetition.cpp" "repetition.h")
add_executable(hw_04_exe "main.cpp" "repetition.cpp")

// repetition.h 
#ifndef REPETITION_H
#define REPETITION_H

int factorial(int num);
int gcd(int num1, int num2);

#endif