//stack.cpp
//Chris Bowman
//10 Feb 2023
#include "stack.h"
Stack::Stack() {
    top = -1;
}
bool Stack::push(int x) {
    bool result;
    if (top >= STACK_SIZE) {
        result = false;
    } else {
        data[++top] = x;
        result = true;
    }
    return result;
}