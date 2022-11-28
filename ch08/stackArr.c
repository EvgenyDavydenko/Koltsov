#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int stack[SIZE] = {0};
int top = 0;

void push(int val) {
    if (top >= SIZE) {
        puts("Стек заполнен!");
        return;
    }
    stack[top] = val;
    top++;
}

int pop(void) {
    if (top <= 0) {
        puts("Стек пуст!");
        return 0;
    }
    top--;    
    return stack[top];
}

void display(void) {
    int j;
    puts("Содержимое стека:");
    for(j = 0; j < top; j++)
        printf("%d: %d\n", j+1, stack[j]);
}

// инструкция пользователя программы
void instructions( void ) { 
   puts( "Выберите действие:\n"
      "   1 to push an element into the stack.\n"
      "   2 to pop an element from the stack.\n"
      "   3 to end." );
}

int main(){
    int choice = 0; // действие пользователя
    int item; // значение в\из стека

    // loop while user does not choose 3
    while ( choice != 3 ) {
        switch ( choice ) { 
            case 1:
                system("clear");
                puts("Введите значение для помещения в стек: ");
                scanf( "\n%d", &item );
                push (item);
                display();
                instructions();
                break;
            case 2:
                system("clear");
                item = pop ();
                printf("Из стека вернулось значение: %d\n", item);
                display();
                instructions();
                break;
            default:
                system("clear");
                instructions();
                break;
        }
        scanf( "%d", &choice );
    }    
    puts( "Програма завершена!" );
    return 0;
}