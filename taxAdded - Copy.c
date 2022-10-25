// Lab 3 Tuesday 12:30pm -02:20pm
// ENGG*1410
// Prepared by: Shilpa Shankar
// 4/10/2022

/*Question: 
Write a program that asks the user to enter a dollars-and-cents amount, then displays
the amount with 13% taxes added
*/

 #include<stdio.h>
 int main(void)
{ 
    
    float amount, tax_percent, tax_added; 
    printf("Please enter the amount: ");
    scanf("%f", &amount);

    printf("Please enter the tax percentage you want to add (eg: 13): ");
    scanf("%f", &tax_percent);
    // claculate the final amount after adding tax
    tax_added=(amount* (tax_percent/100))+amount; 
    printf("The final amount after adding the tax is: %f", tax_added);

    return 0;

}