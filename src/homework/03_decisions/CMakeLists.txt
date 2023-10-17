add_library(hw_03_library "decisions.cpp" "decisions.h")
add_executable(hw_03_exe "main.cpp" "decisions.cpp")

#infndef DECISIONS_H
#define DECISIONS_H

#include <string>

std::string get_letter_grade_using_if(int grade);
std::string get_letter_grade_using_switch(int grade);

#endif
