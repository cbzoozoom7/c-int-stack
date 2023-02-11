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
    return 0;
}
