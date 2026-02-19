
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Mathew Carling
 * ID:201990775
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250.00;
    float NI = 0.08;
    float tax = 0.15;
    float nonTaxable = 12500.00;
    float NIContribution;
    float salaryAfterNI;
    float TaxContribution;
    float salaryAfterTax;

    // calculate the deductions and final take-home salary
    NIContribution = salary * NI;
    salaryAfterNI = salary - NIContribution;
    salaryAfterNI = salaryAfterNI - nonTaxable;
    TaxContribution = salaryAfterNI * tax;
    salaryAfterTax = salaryAfterNI - TaxContribution;

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    printf("Salary £...%.2f",salary);
    //printf("NI contribution £...",var_name);
    printf("NI contribution £...%.2f",NIContribution);
    //printf("Tax contribution £...",var_name);
    printf("Tax contribution £...%.2f",TaxContribution);
    //printf("Take home salary £...",var_name);
    printf("Take home salary £...%.2f",salaryAfterTax);

    return 0;
 }