#include <stdio.h>
#include <math.h>

int main(){
    /*
    //Total cost calculation
    int unit_price = 1500;
    int quantity = 2000;
    int total_cost = unit_price * quantity;
    printf("The total cost of items = UGX %d\n",total_cost);
    */
   /*
    //Monthly Salary Calculation
    int hourly_wage = 2500;
    int hours_worked = 16000;
    int monthly_salary = hourly_wage * hours_worked;
    printf("The monthly salary of the employee = UGX %d\n",monthly_salary);    
    */
    /*
    //Net salary calculation
    int gross_salary = 5000;
    float tax_rate = 0.1;
    int net_salary = gross_salary - (tax_rate * gross_salary);

    printf("The net salary = UGX %d\n",net_salary);
    */
    /*    
    //Total Revenue Calculation
    int price1 = 3000;
    int price2 = 4500;
    int price3 = 6000;
    
    int qty1 = 100;
    int qty2 = 150;
    int qty3 = 200;

    int total_revenue = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);

    printf("The total revenue = UGX %d\n",total_revenue);
    */
    /*
    //Profit & loss calculation 
    int cost_price = 200;
    int selling_price = 250;
    float profit_loss_percentage = ((float)(selling_price - cost_price)/cost_price) * 100;
    
    //Percentage Symbol: Added %% in the printf statement to display a % sign.
    printf("profit and loss percentage = %.2f%%\n" , profit_loss_percentage);
    */
    /*
    //Discounted amount calculation
    int original_amount =1200;
    float discount_rate = 0.2;

    int final_amount = original_amount - ((float)discount_rate * original_amount);

    printf("the final amount = UGX%d\n" ,final_amount);
    */
    /*
    //Simple interest calculation
    int principal = 10000;
    float rate = 0.05;
    int time = 3;

    float simple_interest = (principal * rate * time)/ 100;

    printf("simple interest = %.0f%%\n", simple_interest);
    */
    /*
    //Compound interest calculation
    int principal = 8000;      // Principal amount
    float rate = 0.04;         // Annual interest rate (in decimal)
    int time = 2;              // Time in years
    int n = 4;                 // Compounding quarterly

    // Correct usage of pow() for exponentiation
    float amount = principal * pow((1 + rate / n), n * time); 
    float compound_interest = amount - principal;

    // Use %.2f for formatted floating-point numbers
    printf("Compound Interest = Ugx %.2f\n", compound_interest);
    */
    /*
    //VAT calculation
    int base_price = 150;
    float VAT_rate = 0.18;
    int final_price = base_price + (VAT_rate*base_price);

    printf("The final price after VAT = UGX %d\n",final_price);
    */
/*
    //Discount & VAT calculation
    int original_price = 200;
    float discount_rate = 0.10;
    float VAT_rate = 0.18;
    int discounted_price = original_price - ((float)discount_rate*original_price);
    int final_price = discounted_price + ((float)VAT_rate*discounted_price);
    printf("The final price of product = UGX %d\n",final_price);

    //11 break-even point calculation
    int fixedCost = 2000;
    int variableCost = 15;
    int sellingPrice = 25;
    int breakEvenPoint = fixedCost/(sellingPrice-variableCost);
    printf("The break even point is UGX %d\n\n", breakEvenPoint);

    //12 Average sales calculation
    int days = 30;
    int totalSales = 60000;
    float averageSales = totalSales/days;
    printf("The average sales are UGX%0.1f\n\n", averageSales);

    //13 commission calculations
    int saleVolume = 50000;
    float commissionRate = 0.05;
    int commission = saleVolume * commissionRate;
    printf("The commission is UGX%d\n\n", commission);

    //14 straight line depreciation
    int assetCost = 5000;
    int residualValue = 500;
    int usefulLife = 5;
    int depreciation = (assetCost-residualValue)/usefulLife;
    printf("The depreciation is UGX%d\n\n", depreciation);

    //15 annual salary calculation
    int hourlyWage = 30;
    int hoursPerWeek = 40;
    int weeksPerYear = 52;
    int annualSalary = hourlyWage*hoursPerWeek*weeksPerYear;
    printf("The annual salary is UGX%d\n\n", annualSalary);

    //16 total revenue from multiple customers
    int customer1 = 200;
    int customer2 = 500;
    int customer3 = 300;
    int totalRevenue = customer1+customer2+customer3;
    printf("The total revenue from multiple customers is UGX%d\n\n", totalRevenue);

    //17 loan installment calculation
    int loanPrincipal = 20000;
    float annualRate = 0.06;
    int term = 5;
    int installment = (loanPrincipal*(1+pow((annualRate/2),(12*term))))/12;
    printf("The installment is UGX%d\n\n", installment);

    //18 gross profit calculation
    int totalRevenue = 12000;
    int totalCost = 8000;
    int grossProfit = totalRevenue*totalCost;
    printf("The gross profit is UGX%d\n\n", grossProfit);
*/
    //19 restaurant bill calculation
    int basePrice = 50;
    float tipRate = 0.15;
    float taxRate = 0.08;
    int totalCost = basePrice +(tipRate*basePrice)+(taxRate*basePrice);
    printf("The total cost of a meal is UGX%d\n\n", totalCost );

    //20 markup price calculation
    int costPrice = 100;
    float profitMargin = 0.25;
    int sellingPrice = costPrice + (profitMargin*costPrice);
    printf("The selling price of a product is UGX%d\n\n", sellingPrice);





return 0;
}