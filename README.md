Ret_M Arduino Library
===========================================
Small library to simplify applying delays utilizing the millis() function.
Ideal for time sensitive projects, debouncing, or for those who want to avoid utilizing delay(), delayMicroseconds(), or other of the kind that halts the program.

### Usage
- Include Ret_M.h:  #include "Ret_M.h"
- Initialize a delay:  Ret_M name(interval);
- name.ret() returns true if the interval has passed.
