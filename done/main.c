#include <stdio.h>
#include <stdbool.h>

#include <string.h> //? For using string functions

void variable()
{
    // variable =   Allocated space in memory to store a value.
    //              We refer to a variable's name to access the stored value.
    //              That variable now behaves as if it was the value it contains.
    //              BUT we need to declare what type of data we are storing.

    int x;          // declaration
    x = 3466;       // initialization
    int y = 334321; // declaration + initialization

    int age = 21;        // integer
    float gpa = 2.05;    // floating point number
    char grade = 'c';    // single character
    char name[] = "Bro"; // array of characters

    // % = format specifier
    printf("Hello %s\n", name);                  // %s > string
    printf("You are %d years old\n", age);       // %d > decimal value
    printf("Your average grade is %c\n", grade); // %c > character
    printf("Your gpa is %f\n", gpa);             // %f > float value
}

void data_type()
{
    char a = 'C';     // single character    %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.141592;           // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true; // 1 byte (true or false) %d

    char f = 120;          // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short h = 32767;          // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);   // char
    printf("%s\n", b);   // character array
    printf("%f\n", c);   // float
    printf("%lf\n", d);  // double
    printf("%d\n", e);   // bool
    printf("%d\n", f);   // char as numeric value
    printf("%d\n", g);   // unsigned char as numeric value
    printf("%d\n", h);   // short
    printf("%d\n", i);   // unsigned short
    printf("%d\n", j);   // int
    printf("%u\n", k);   // unsigned int
    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int
}

void format_specifier()
{
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: %8.2f$\n", item1);
    printf("Item 2: %8.2f$\n", item2);
    printf("Item 3: %8.2f$\n", item3);
}

void constant_variable()
{
    // PI = 420.69; YOU CAN'T CHANGE THIS
    const float PI = 3.14159;
    const char PATH[] = "./todo/calculator.c";

    printf("%f\n", PI);
}

void arithmetic_operators()
{
    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;

    // int z = x + y;
    // int z = x - y;
    // int z = x * y;
    // float z = x / (float) y;
    // int z = x % y;
    // x++;
    // y--;

    printf("%d\n", x);
    printf("%d\n", y);
}

void switch_statement()
{
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("YOU FAILED!\n");
        break;
    default:
        printf("Please enter only valid grades\n");
    }
}

void if_statement()
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up!\n");
    }
    else if (age == 0)
    {
        printf("You can't sign up! You were just born!\n");
    }
    else if (age < 0)
    {
        printf("You haven't been born yet!\n");
    }
    else
    {
        printf("You are too young to sign up!\n");
    }
}

void ternary_operator()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? true : false;

    int grade = 77;
    grade <= 60 ? printf("\nYou pass!\n") : printf("\nYou fail!\n");

    int number = 9;
    number % 2 ? printf("\nODD\n") : printf("\nEVEN\n");

    bool hungry = false;
    hungry ? printf("\nYou are hungry\n") : printf("\nYou are full\n");

    // if (true)
    // {
    // }
    // else
    // {
    // }

    // int hunger = 0;
    // hungry < 6 ? printf("\nYou can't run...\n") : printf("\nYeah Im Fast !!!\n");
}

void logical_operator_AND()
{
    // logical operators = && (AND) checks if two or more conditions are true

    float temp = 25.4;
    bool sunny = true;

    if (temp >= 0 && sunny)
    {
        printf("\nThe weather is good!\n");
    }
    else
    {
        printf("\nThe weather is bad!\n");
    }
}
void logical_operator_OR()
{
    // logical operators = || (OR) checks if at least one codition is true

    float temp = 25;

    if (temp <= 0 || temp >= 30)
    {
        printf("\nThe weather is bad!\n");
    }
    else
    {
        printf("\nThe weather is good!\n");
    }
}
void logical_operator_NOT()
{
    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = false;
    bool subscribed = true;

    if (!sunny)
    {
        printf("\nIt's cloudy outside!\n");
    }
    else
    {
        printf("\nIt's sunny outside!\n");
    }
}

void birthday()
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");
}

void functions()
{
    birthday();
}

void birthday_with_args(char x[], int y)
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!\n", y);
}

void arguments()
{
    char name[] = "iiiBag";
    int age = 21;

    birthday_with_args(name, age);
}

int return_statement(int x)
{
    int result = x * x;
    return result;
}

void string_functions()
{
    //? Need <string.h> include;
    char string1[] = "HELLO";
    char string2[] = "WORLD";

    strlwr(string1); // converts a string to lowercase
    strlwr(string2); // converts a string to lowercase
    // strupr(string1);                              // converts a string to uppercase
    // strcat(string1, string2);                     // appends string2 to end of string1
    // strncat(string1, string2, 1);                 // appends n characters from string2 to string1
    // strcpy(string1, string2);                     // copy string2 to string1
    // strncpy(string1, string2, 2);                 // copy n characters of string2 to string1

    // strset(string1, '?');     //sets all characters of a string to a given character
    // strnset(string1, 'x', 1); //sets first n characters of a string to a given character
    // strrev(string1);          //reverses a string

    // int result = strlen(string1);                 // returns string length as int
    // int result = strcmp(string1, string2);        // string compare all characters
    // int result = strncmp(string1, string2, 1);    // string compare n characters
    // int result = strcmpi(string1, string1);       // string compare all (ignore case)
    // int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)

    printf("\n%s %s\n", string1, string2);
}

void for_loops()
{
    // for loop = repeats a section of code a limited amount of times

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}

void while_loops()
{
    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0'; // "\n"
    }

    printf("Hello %s", name);
}

void do_while_loops()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    printf("sum: %d", sum);
}

void nested_loops()
{
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    getchar(); // clears \n from buffer

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
}

void arrays()
{
    // array = a data structure that can store many values of the same data type.

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    /* double */ prices[5];

    // prices[0] = 5.0;
    // prices[1] = 10.0;
    // prices[2] = 15.0;
    // prices[3] = 25.0;
    // prices[4] = 20.0;

    printf("\nIndex 0 : $%.2lf\n", prices[0]);
    printf("Index 1 : $%.2lf\n", prices[1]);
    printf("Index 2 : $%.2lf\n", prices[2]);
    printf("Index 3 : $%.2lf\n", prices[3]);
    printf("Index 4 : $%.2lf\n", prices[4]);
}

//* Not Shown
void twoD_arrays()
{
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data
    /*
    int numbers[2][3] = {
                         {1, 2, 3},
                         {4, 5, 6}
                        };
    */

    int numbers[2][3];

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
}

void arrays_loop()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0}; // double = 8 octets

    printf("\n%d bytes\n\n", sizeof(prices));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }
}

void arrays_of_string()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cars[0] = "Tesla";
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
}

//! Structure
struct Player
{
    char name[12];
    int score;
};

void structure()
{
    // struct = collection of related members ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1 = {"Spongebob", 12};
    struct Player player2 = {"Patrick", 4};

    printf("\n%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("\n%s\n", player2.name);
    printf("%d\n", player2.score);
}

//! Enum
enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

void enums()
{
    // enum = a user defined type of named integer identifiers
    //               helps to make a program more readable

    enum Day today;
    today = Sun;

    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("\nI have to work today :(");
    }
}

void memory_addresses()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory (house), used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    char a;
    char b[1];

    printf("\n%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("%p\n", &a);
    printf("%p\n", &b);
}

void printAge(int *pAge)
{
    printf("You are %d years old\n", *pAge); // dereference
}

void pointers()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)

    int age = 21;
    int *pAge = &age;

    printAge(pAge);

    printf("\naddress of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);
    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));
    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge); // dereferencing
}

void writing_files()
{
    // WRITE/APPEND A FILE
    FILE *pF = fopen(".\\test.txt", "w");

    fprintf(pF, "Spongebob Squarepants");
    printf("\nFile Written !\n");

    fclose(pF);

    // DELETE A FILE
    /*
    if(remove("test.txt") == 0)
    {
       printf("That file was deleted successfully!");
    }
    else
    {
       printf("That file was NOT deleted!");
    }
    */
}

void reading_files()
{
    FILE *pF = fopen("test.txt", "r");
    char buffer[255];

    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);
}

//? ---- ---- END OF FUNCTIONS ---- ----
int main()
{
    printf("\n--- Programmation Introduction ---\n");

    printf("\n--- Variables ---\n");
    variable();

    printf("\n--- Constant Variables ---\n");
    constant_variable();

    printf("\n--- Data Types ---\n");
    data_type();

    printf("\n--- Format Specifier ---\n");
    format_specifier();

    printf("\n--- Arithmetic Operators ---\n");
    arithmetic_operators();

    printf("\n--- If Statement ---\n");
    if_statement();

    printf("\n--- Ternary Operator ---\n");
    ternary_operator();

    printf("\n--- Switch Statement ---\n");
    switch_statement();

    printf("\n--- Logical Operator (&& - AND) ---\n");
    logical_operator_AND();

    printf("\n--- Logical Operator (|| - OR) ---\n");
    logical_operator_OR();

    printf("\n--- Logical Operator () ---\n");
    logical_operator_NOT();

    printf("\n--- Functions ---\n");
    functions();

    printf("\n--- Arguments ---\n");
    arguments();

    printf("\n--- Return Statement ---\n");
    int result = return_statement(3);
    printf("\nThe result of 3^3 is %d\n", result);

    printf("\n--- String Functions ---\n");
    string_functions();

    printf("\n--- For Loops ---\n\n");
    for_loops();

    printf("\n--- While Loops ---\n");
    while_loops();

    printf("\n--- Do While Loops ---\n");
    do_while_loops();

    printf("\n--- Nested Loops ---\n");
    nested_loops();

    printf("\n--- Arrays ---\n");
    arrays();

    printf("\n--- Get Through Arrays ---\n");
    arrays_loop();

    printf("\n--- Arrays Of String ---\n");
    arrays_of_string();

    printf("\n--- Structures ---\n");
    structure();

    printf("\n--- Enums ---\n");
    enums();

    printf("\n--- Memory Addresses ---\n");
    memory_addresses();

    printf("\n--- Pointers ---\n");
    pointers();

    printf("\n--- Writing File ---\n");
    writing_files();

    printf("\n--- Reading Files ---\n");
    printf("\n");
    reading_files();
    printf("\n");

    // ---

    printf("\n");
    return 0;
}

// TODO:
/*
    - Create a Temperature Conversion Program
    - Create a Calculator App
    - Create a Tik Tak Toe Game
*/