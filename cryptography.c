#include <stdio.h>

#include "./lib/md5.c"
#include "./lib/rot-13.c"
#include "./lib/sha256.c"

//                               (Full name, Phone Number,...)
//  username:encrypted_password:UID:GID:additionnal_info:home_directory:default_shell
//? sara:x:1000:1000:Sara Z:/home/sara:/bin/bash
struct user
{
    char username[32];
    char password[256];
    int UID;
    int GID;
    char info[128];
    char home_directory[64];
    char default_shell[64];
};

void orot13() {}

void omd5() {}

void osha256() {}

void verify() {}

int main()
{
    char text[] = "Hello World";
    printf("%s\n", text);

    rot13(text);
    printf("%s", text);

    return 0;
}