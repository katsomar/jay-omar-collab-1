#include <stdio.h>

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
    
    //Net salary calculation
    int gross_salary = 5000;
    float tax_rate = 0.1;
    int net_salary = gross_salary - (tax_rate * gross_salary);

    printf("The net salary = UGX %d\n",net_salary);
    
    
   

return 0;
}