#include <stdio.h>

int main(int argc, char *argv[]){
    //Pointer
    char *name1 = "Arun";

    printf("%s\n\n",name1);

    char *name2 = name1;

    printf("name1 --> %p\n",name1);
    printf("name2 --> %p\n\n",name2);
    //%p address location

    name2 += 2;

    //move pointer over by 2 char spaces (2 bytes)

    printf("name1 --> %p\n",name1);
    printf("name2 --> %p\n\n",name2);

    *name2 = 'i';
    //dereferncing the pointer

    printf("%s\n",name1);
}