#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define RETURN(result) return (result);}
#define MYF1 char* myfunction1() {
#define MYF2 char* myfunction2() {
#define MYF3 void myfunction3() {
#define MAIN int main(void) {
#define MSTRING char* string = (char*)malloc(sizeof(char) * size);
#define WHELLO strcpy(string, "Hello ");
#define WWORLD strcpy(string, "World!\n");
#define SETSIZE(val) size = val;
#define PRINTSTR(string) printf("%s", string);
#define FREE free(str);
#define CMY1 myfunction1();
#define CMY2 myfunction2();
#define CMY3 myfunction3();


#define LOOP(upper, code) for(int i=0; i < upper; i++) {code}


int size = 0;
char* str = NULL;

MYF1
    SETSIZE(7)
    MSTRING
    WHELLO
    RETURN(string)

MYF2
    SETSIZE(9)
    MSTRING
    WWORLD
    RETURN(string)

MYF3
    str = CMY1
    PRINTSTR(str)
    FREE
    str = CMY2
    PRINTSTR(str)
    FREE}

MAIN LOOP(3, CMY3) RETURN(0)
