#include <stdio.h>
int main(){
    int preunit, currentunit, cost, now, bill ;

    printf("Enter your pre-unit: ");
    scanf("%d", &preunit);

    printf("Enter current unit: ");
    scanf("%d", &currentunit);

    printf("per unit electricity cost: ");
    scanf("%d", &cost);

    now= currentunit-preunit;
    bill=now*cost;
    printf("Your electricity bill =%d .rs",bill);

    return 0;
}