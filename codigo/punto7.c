
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *data = malloc(100 * sizeof(int));
    data += 50;
    int *funny = data;
    data -=50;
    free(funny); 
    printf("El valor de data es: %d\n", *(data + 50));
    free(data);
    return  EXIT_SUCCESS;
}