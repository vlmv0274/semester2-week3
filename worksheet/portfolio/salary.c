
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
    float taxableAmount;
    float TaxContribution;
    float salaryAfterTax;

    // calculate the deductions and final take-home salary
    NIContribution = salary * NI;
    salaryAfterNI = salary - NIContribution;
    taxableAmount = salaryAfterNI - nonTaxable;
    TaxContribution = taxableAmount * tax;
    salaryAfterTax = salary - TaxContribution - NIContribution;

    // required print statements
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", NIContribution);
    printf("Tax contribution £%.2f\n", TaxContribution);
    printf("Take home salary £%.2f\n", salaryAfterTax);

    return 0;
}
