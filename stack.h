//stack.h
//Chris Bowman
//Created 10 Feb 2023
#ifndef INTSTACK_STACK
    #define INTSTACK_STACK
    class Stack {
        public:
            Stack(); //makes a new int Stack, a first in, last out data structure.
            bool push(int x); //pushes x onto the top of the Stack.
            int pop(); //returns the last value added to the Stack & removes it.
            int peek(); //returns the last value added to the Stack, without removing it.
            bool isEmpty();
        private:
            int top; //tracks where the top of the Stack is. -1 is empty.
            int data[10]; //stores the data in the Stack.
    };
#endif //INTSTACK_STACK