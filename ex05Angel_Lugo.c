#include <stdio.h>

int main()
{
    int x,y,num;

    printf("Ingrese cualquier numero: ");
    scanf("%d",&num);

    for(x=0; x<num ; x++){
        for(y=0; y<num; y++)
            printf("*");
        printf("\n");
    }
    return 0;
}
