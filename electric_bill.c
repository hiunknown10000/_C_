#include <stdio.h>
int main(){
    int preunit, currentunit, cost, now, bill ;

    printf("Enter your pre-unit: ");
    scanf("%d", &preunit);

    printf("Enter current unit: ");
    scanf("%d", &currentunit);

    now= currentunit-preunit;

    if(now<=75){
        printf("Do not need to pay bill");
    }
    else{
    printf("per unit electricity cost: ");
    scanf("%d", &cost);

    bill=now*cost;
    printf("Your electricity bill = %d .rs",bill);
    }

    return 0;
}