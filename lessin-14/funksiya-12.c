#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int SortInc(int A, int B, int C);

int main()
{
    int A, B, C, smallest, medium, largest;

    printf("Enter three integers : \n\nA = ");
    scanf("%d", &A);

    printf("\nB = ");
    scanf("%d", &B);

    printf("\nC = ");
    scanf("%d", &C);

    SortInc(A,B,C);

    return 0;
}

int SortInc(int A, int B, int C){

    int smallest, medium, largest;

    if((A<=B)&&(A<C)){
        smallest=A;
        if(B>C){
            largest=B; medium=C;}
        else{
            medium=B; largest=C;}

    } else if((B<=A)&&(B<C)){
        smallest=B;
        if(A>C){
            largest=A; medium=C;}
        else
            {medium=A; largest=C;}

    }else if((C<=A)&&(C<B)) {
        smallest=C;
        if(A>B){
            largest=A; medium=B;}
        else{
            medium=A; largest=B;}
    }
    return printf("\nA=%d < B=%d < C=%d\n", smallest, medium, largest);
}