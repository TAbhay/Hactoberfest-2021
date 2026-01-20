#include <stdio.h> 
#include <stdlib.h> 
 
int top = -1, n; 
int stack[10]; 
 
void push() { 
    int x; 
 
    if (top == n - 1) 
        printf("E: Stack is full!"); 
    else { 
        printf("Enter the value of the element to be pushed into the stack: "); 
        scanf("%d", &x); 
        top += 1; 
        stack[top] = x; 
    } 
} 
 
void pop() { 
    if (top == -1) 
        printf("E: Stack is empty!"); 
    else { 
        printf("Popped element with value %d", stack[top]); 
        top -= 1; 
    } 
} 
 
void peek() { 
    if (top == -1) 
        printf("E: Stack is empty!"); 
    else 
        printf("The top-most element is: %d", stack[top]); 
} 
 
int main() { 
    int choice; 
 
    printf("Enter the size of the stack [max. 10]: "); 
    scanf("%d", &n); 
 
    while (1) { 
        printf("\nPlease choose an option from the following to proceed with:"); 

        printf("\n\t1. PUSH\n\t2. POP\n\t3. PEEK\n\t4. EXIT"); 
        printf("\n\nEnter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
            case 1: 
                push(); 
                break; 
 
            case 2: 
                pop(); 
                break; 
 
            case 3: 
                peek(); 
                break; 
 
            case 4: 
                exit(0); 
 
            default: 
                printf("\nE: Invalid choice!"); 
        } 
    } 
} 