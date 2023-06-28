/* source file for ptr11c13.c
 *
 * ptr11c13 is a demo program to show the use of pointers to arrays
 * in implementing a copy function.
*/

/* includes */

#include <stdio.h>



/* defines */








/* function declarations */

void copyString(char *to, char *from);










int main(int argc, char argv[]){
    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("%s\n", string2);

    copyString(string2, "So is this.");
    printf("%s\n", string2);

    return(0);
}

/* function definitions */

void copyString(char *to, char *from){

    for( ; *from != '\0'; ++from, ++to)
        *to = *from;

    *to = '\0';
}


















