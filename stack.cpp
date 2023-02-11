//stack.cpp
//Chris Bowman
//10 Feb 2023
#include "stack.h"
Stack::Stack() {
    top = -1;
}
bool Stack::push(int x) {
    bool result;
    if (top >= STACK_SIZE-1) {
        result = false;
    } else {
        data[++top] = x;
        result = true;
    }
    return result;
}
bool Stack::isEmpty() {
    bool result;
    if (top < 0) {
        result = true;
    } else {
        result = false;
    }
    return result;
}
int Stack::pop() {
    if (isEmpty()) {
        throw -1;
    }
    return data[top--];
}
int Stack::peek() {
    if (isEmpty()) {
        throw -1;
    }
    return data[top];
}