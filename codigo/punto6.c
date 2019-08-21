#include <stdio.h>
#include <stdlib.h>
int main (){
    int *data = malloc(100 * sizeof(int));
        free(data);
        printf("El valor de data es :%d\n", *(data+100));
    return  EXIT_SUCCESS;
}