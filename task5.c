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
    
    //VAT calculation
    int base_price = 150;
    float VAT_rate = 0.18;
    int final_price = base_price + (VAT_rate*base_price);

    printf("The final price after VAT = UGX %d\n",final_price);


return 0;
}