#include<stdio.h>

int main() {
    int i = 0;

    START:
        printf("Value of i: %d\n",i);

        i++;
        if(i<5){
            goto START;
        }
       return 0;

}