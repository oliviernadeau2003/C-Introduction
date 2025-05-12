#include <stdio.h>

int main()
{
    int val1 = 2001;   // Normal declaration of a variable
    int *val2 = &val1; // Declaration of a pointer variable with '*' (&... => get the address of the variable)

    printf("Value of val1 : %d\n", val1);
    printf("Address of val1 : %p\n", &val1);
    printf("Value of val2 : %p\n\n", val2);

    //* Here, the +1 doesn't mean +1, but next address slot based on the pointer type (Integer)
    printf("Address next to [%p] is : %p\n\n", val2, val2 + 1); //* Based of the type of pointer (INT in this case)
    printf("Size of a Interger : %d bytes", sizeof(int));       //? Make them do the address calculation

    return 0;
}
