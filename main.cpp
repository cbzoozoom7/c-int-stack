//main.cpp
//Chris Bowman
//TEST_SCALE Feb 2023
#include "main.h"
int main(int argc, char const *argv[])
{
    srand(time(0));
    Stack myStack;
    Stack randStack;
    try {
        cout << myStack.peek() << endl;
    } catch (int e) {
        cout << "Pass: Peeking an fresh stack threw " << e << endl;
    }
    try {
        cout << myStack.pop() << endl;
    } catch (int e) {
        cout << "Pass: popping an empty stack threw " << e << endl;
    }
    int trueCount = 0;
    int falseCount = 0;
    for (int i = 0; i < STACK_SIZE * TEST_SCALE; i++) {
        if (myStack.push(i*FIZZ)) {
            trueCount++;
        } else {
            falseCount++;
        }
    }
    cout << "True: " << trueCount << ",\tFalse: " << falseCount << endl;
    trueCount = 0;
    falseCount = 0;
    for (int i = 0; i < STACK_SIZE * TEST_SCALE * (rand() % int(pow(TEST_SCALE, 10)) + 1); i++) {
        if (randStack.push(rand())) {
            trueCount++;
        } else {
            falseCount++;
        }
    }
    cout << "True: " << trueCount << ",\tFalse: " << falseCount << endl;
    int peekExceptionCount = 0;
    int popExceptionCount = 0;
    for (int i = 0; i < STACK_SIZE * TEST_SCALE; i++) {
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
    peekExceptionCount = 0;
    popExceptionCount = 0;
    for (int i = 0; i < STACK_SIZE * TEST_SCALE * (rand() % (int(pow(TEST_SCALE, 10)) - STACK_SIZE + 1) + STACK_SIZE); i++) {
        try {
            cout << randStack.peek() << endl;
        } catch (int e) {
            peekExceptionCount++;
        }
        try {
            cout << randStack.pop() << endl;
        } catch (int e) {
            popExceptionCount++;
        }
    }
    cout << "Peek Exceptions: " << peekExceptionCount << "\tPop Exceptions: " << popExceptionCount << endl;
    return 0;
}