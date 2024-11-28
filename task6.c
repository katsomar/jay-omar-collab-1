#include <stdio.h>
#include <math.h>

int main(){

    //1 calculate the total sale price
    int originalPrice = 20000;
    float discountPercentage = 0.1;
    int salePrice = originalPrice - (originalPrice*discountPercentage);
    printf("\n\nThe total sale price is UGX%d\n\n", salePrice);

    //2 Calculate the final salary after tax
    int originalSalary = 5000000;
    int taxRate = 0.15;
    int salaryAfterTax = originalSalary - (originalSalary*taxRate);
    

    return 0;
}