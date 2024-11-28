#include <stdio.h>
#include <math.h>

int main(){
/*
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
*/
     /*
     //7 calculate the break-even point
    int fixedCost = 10000000;
    int variableCost = 50000;
    int pricePerUnit = 100000;
    int breakEvenPoint = fixedCost/(pricePerUnit-variableCost);
    printf("The break-even point is UGX%d\n\n", breakEvenPoint);

    //8 calculate the flat interest
    int investmentAmount = 1000000;
    float rate = 0.04;
    int time = 2;
    int flatInterest = (investmentAmount*time*rate);
    printf("The flat interest is UGX%d\n\n", flatInterest);

    //9 Calculate the profit margin
    int salesRevenue = 30000000;
    int profit = 9000000;
    int profitMargin = (profit/salesRevenue)*100;
    printf("The profit margin is UGX%d\n\n", profitMargin);

    //10 calculate the depreciation using straight line method
    int cost = 10000000;
    int usefulLife = 5;
    int residualValue = 2000000;
    int annualDepreciation = (cost - residualValue)/usefulLife;
    printf("The annual depreciation is UGX%d\n\n", annualDepreciation);
    */
     
    //11. Discounted price
    int price;
    float discount_rate;
    int discounted_price, final_price;

    // Prompt for price
    printf("Please enter a price below:\n");
    scanf("%d", &price);

    // Prompt for discount rate
    printf("Please enter a discount rate (e.g., 20 for 20%%):\n");
    scanf("%f", &discount_rate);

    // Calculate the discounted price and final price
    discounted_price = (int)(discount_rate / 100 * price); // Casting to int
    final_price = price - discounted_price;

    // Output the result
    printf("The discount will be %d\n",discounted_price);
    printf("The discounted price is = UGX %d\n", final_price);
    return 0;
}