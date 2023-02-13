//main.cpp
//Chris Bowman
//TEST_SCALE Feb 2023
#include "main.h"
int main(int argc, char const *argv[])
{
    srand(time(0));
    Stack myStack;
    Stack randStack;
    int opCount = 0;
    try {
        cout << myStack.peek() << endl;
        opCount++;
    } catch (int e) {
        cout << "Pass: Peeking an fresh stack threw " << e << endl;
    }
    try {
        cout << myStack.pop() << endl;
        opCount++;
    } catch (int e) {
        cout << "Pass: popping an empty stack threw " << e << endl;
    }
    int emptyCount = 0;
    for (int i = 0; i < TEST_SCALE; i++) {
        if (myStack.isEmpty() && randStack.isEmpty()) {
            emptyCount++;
        }
        opCount += 2;
    }
    cout << "stacks empty: " << emptyCount << "/" << TEST_SCALE << endl;
    int trueCount = 0;
    int falseCount = 0;
    for (int i = 0; i < STACK_SIZE * TEST_SCALE; i++) {
        if (myStack.push(i*FIZZ)) {
            trueCount++;
        } else {
            falseCount++;
        }
        opCount++;
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
        opCount++;
    }
    cout << "True: " << trueCount << ",\tFalse: " << falseCount << endl;
    emptyCount = 0;
    for (int i = 0; i < TEST_SCALE; i++) {
        if (myStack.isEmpty()) {
            emptyCount++;
        }
        opCount++;
    }
    cout << "myStack empty: " << emptyCount << "/" << TEST_SCALE << endl;
    emptyCount = 0;
    for (int i = 0; i < TEST_SCALE; i++) {
        if (randStack.isEmpty()) {
            emptyCount++;
        }
        opCount++;
    }
    cout << "randStack empty: " << emptyCount << "/" << TEST_SCALE << endl;
    int peekExceptionCount = 0;
    int popExceptionCount = 0;
    for (int i = 0; i < STACK_SIZE * TEST_SCALE; i++) {
        try {
            cout << myStack.peek() << endl;
            opCount++;
        } catch (int e) {
            peekExceptionCount++;
        }
        try {
            cout << myStack.pop() << endl;
            opCount++;
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
            opCount++;
        } catch (int e) {
            peekExceptionCount++;
        }
        try {
            cout << randStack.pop() << endl;
            opCount++;
        } catch (int e) {
            popExceptionCount++;
        }
    }
    cout << "Peek Exceptions: " << peekExceptionCount << "\tPop Exceptions: " << popExceptionCount << endl;
    
    emptyCount = 0;
    for (int i = 0; i < TEST_SCALE; i++) {
        if (myStack.isEmpty()) {
            emptyCount++;
        }
        opCount++;
    }
    cout << "myStack empty: " << emptyCount << "/" << TEST_SCALE << endl;
    emptyCount = 0;
    for (int i = 0; i < TEST_SCALE; i++) {
        if (randStack.isEmpty()) {
            emptyCount++;
        }
        opCount++;
    }
    cout << "randStack empty: " << emptyCount << "/" << TEST_SCALE << endl;
    cout << "operations on stacks: " << opCount;
    return 0;
}