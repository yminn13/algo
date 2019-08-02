#include <iostream>

#define STACK_SIZE  100

int stk[STACK_SIZE];
int top = -1;

int getSize (void) {
    return top + 1;
}

bool isEmpty(void) {
    if (top == -1) {
        std::cout << "stack is empty\n";
        return true;
    }
    return false;
}

int getTop(void) {
    if (isEmpty()) {
        return (1 << 30);
    }
    return stk[top];
}

bool pushS (int e) {
    if (top+1 == STACK_SIZE) {
        std::cout << "stack is full\n";
        return false;
    }
    stk[++top] = e;
    std::cout << e << " is pushed\n";
    return true;
}

void popS (void) {
    if (!isEmpty()) {
        top--;
        std::cout << "pop\n";
    }
}

void flushS (void) {
    std::cout << "flushed\n";
    top = -1;
}

int main (void) {
    popS();
    flushS();
    pushS(8);
    pushS(11);
    std::cout << "stack size: " << getSize() << "\n";
    std::cout << "top is " << getTop() << "\n";
    flushS();
    std::cout << "stack size: " << getSize() << "\n";

    return 0;
}