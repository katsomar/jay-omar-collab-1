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
    printf("The final salary after tax is UGX%d", salaryAfterTax);

    //3 calculate the gross profit
    int salesRevenue = 15000000;
    int cogs = 9000000;
    int grossProfit = salesRevenue - cogs;
    printf("The gross profit is UGX%d\n\n", grossProfit);

    //4 calculate the return on investment
    int investment = 10000000;
    int profit = 12000000;
    int roi = (investment/profit) *100;
    printf("The return on investment is UGX%d\n\n", roi);

    //5 calculate the monthly loan payment
    int p = 50000000;
    float r = 0.05;
    int n = 5;
    float m = ((p * r) * (1 + r)) / (pow((1 + r), n) + 1);
    printf("The monthly loan payment is UGX%0.1f\n\n", m);

    //6 calculate the simple interest
    int p = 2000000;
    int r = 0.06;
    int t = 3;
    int simpleInterest = (p*r*t)/100;
    printf("The simple interest on the loan is UGX%d\n\n", simpleInterest);




    return 0;
}