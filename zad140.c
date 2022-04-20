// Program treba dinamicki napravit 2d matricu.

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int r, s, i, j, brojac;
 	
 	printf("Unesi broj redaka i stupaca:");
 	scanf("%d %d",&r,&s);
 	
    int* arr[r];
    for (i = 0; i < r; i++)
        arr[i] = (int*)malloc(s * sizeof(int));
 
    //  arr[i][j] jes isto kao *(*(arr+i)+j)
    brojac = 0;
    for (i = 0; i < r; i++)
        for (j = 0; j < s; j++)
            arr[i][j] = ++brojac; // Ili *(*(arr+i)+j) = ++brojac popunjavamo matricu.
 
    for (i = 0; i < r; i++)
        for (j = 0; j < s; j++)
            printf("%d ", arr[i][j]);
 
    // Oslobadjanje dinamkicki zauzete memorije.
 
    for ( i = 0; i < r; i++)
        free(arr[i]);
 
    return 0;
}
