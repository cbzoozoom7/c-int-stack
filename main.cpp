//main.cpp
//Chris Bowman
//10 Feb 2023
#include "main.h"
int main(int argc, char const *argv[])
{
    Stack myStack;
    int trueCount = 0;
    int falseCount = 0;
    for (int i = 0; i < STACK_SIZE*10; i++) {
        if (myStack.push(i*3)) {
            trueCount++;
        } else {
            falseCount++;
        }
    }
    cout << "True: " << trueCount << ",\tFalse: " << falseCount << endl;
    int peekExceptionCount = 0;
    int popExceptionCount = 0;
    for (int i = 0; i < STACK_SIZE*10; i++) {
        try {
            cout << myStack.peek() << endl;
        } catch (int e) {
            peekExceptionCount++;
        }
        try {
            cout << myStack.pop() << endl;
        } catch (int e) {
            popExceptionCount++;
        }
    }
    cout << "Peek Exceptions: " << peekExceptionCount << "\tPop Exceptions: " << popExceptionCount << endl;
    return 0;
}