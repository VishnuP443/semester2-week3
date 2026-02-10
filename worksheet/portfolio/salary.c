
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Vishnu Pandaraparambath
 * ID: 201923075
 */

 int main( void ) {

   int salary = 14000;
   float ni = 10;
   float taxrate = 0;
   float tax_contribution = 0;

   float NI_contribution = salary*(ni/100);
   int new_salary = salary-NI_contribution; 
   tax_contribution = (new_salary-12500)*(taxrate/100);      
   int final_salary = salary - (NI_contribution + tax_contribution);

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%d\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%d\n",final_salary);

    return 0;
 }