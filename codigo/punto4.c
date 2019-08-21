#include <stdio.h>
#include <stdlib.h>
int main (){
    int *a = malloc(sizeof(int));
    for (int i = 8; i > 0; i--)
    {
        *(a) = i-1;
        printf("%d\n", *(a));
    }
    return  EXIT_SUCCESS;
}

    