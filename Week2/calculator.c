#include <stdio.h>
int main(){
double revenue;
double expenses;
double balance;

printf("MUNICIPAL BUDGET CALCULATOR\n");
printf("---------------------------\n");

printf("Enter Revenue: ");
scanf("%lf", &revenue);

printf("Enter total Expenses");
scanf("%lf", &expenses);

balance = revenue - expenses;   

printf("\nRevenue: %.2f\n", revenue);
printf("Expenses: %.2f\n", expenses);

if (balance > 0) {
    printf("Balance: %.2f (Surplus)\n", balance);
} 
else if (balance < 0) {
    printf("Balance: %.2f (Deficit)\n", -balance);
}
 else {
    printf("The budget is balanced.\n");
}
return 0;

}