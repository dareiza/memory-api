#include <stdio.h>
#include <stdlib.h>
int main (){
    int *data = malloc(100 * sizeof(int));
        *(data+100) = 0;
        printf("El valor de data es :%d\n", *(data+100));
        free(data);
    return  EXIT_SUCCESS;
}