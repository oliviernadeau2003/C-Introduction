#include <stdio.h> // Standard Input Output

//? Supposons que l'on recois un username et un mot de passe

int main(int argc, char const *argv[])
{
    //* Step 01 : Try with 0, 1. Make them do the remark
    const char *username = argv[1];
    const char *password = argv[2];

    //* Step 02 : Demonstrate that the program path is always the first argument passed
    printf("\nNumber of argument : %d\n\n", argc);

    // Make a loop to iterate through all argument
    printf("List of argument(s) :\n\n");
    for (int i = 0; i < argc; i++)
    {
        printf("%d. %s\n", i + 1, argv[i]);
    }

    //* Step 03 : Verify if the given user / password is valid
    verify_password(/* ??? */);

    //* Step ~ : (Out of context) Show them that the return keyword of the main function is always for the
    //*           operating system to know the "Exit Status" of the program. So if it worked or failed.
    // return 1;

    //*
    //*
    //* Step 00 : Grant access or not. Usually, an API will return code like 200, 201, 203 or 404.

    printf("\n");
    return 0;
}

int verify_password(/* ??? */) {}