#include <stdio.h>
void discounted_price(int price, float discount_rate);
void tax_amount(int price , float tax_rate);
void total_salary(int base_salary , float bonus_rate);
void profit_loss(int selling_price, int cost_price);
void discounted_price2(int original_price, float discount_rate);
int main(){
        //11
        discounted_price(25000,0.2);
        //12
        tax_amount(25000, 20);
        //13
        total_salary(500000,0.5); 
        //14
        profit_loss(20000,15000);
        //15
        discounted_price2(25000, 50);
return 0;    
}

//11.DIscounted price 
void discounted_price(int price, float discount_rate){
   float discounted_calc= price - (discount_rate * price);
    printf("The discounted price is %.1f\n",discounted_calc);
}
//12.Tax Amount
void tax_amount(int price , float tax_rate){
    float tax_amount = (int)(price * (tax_rate/100));
    printf("The taxed amount = UGX %.1f\n",tax_amount);
}
//13.Employee Salary After Bonus
void total_salary(int base_salary , float bonus_rate){
    int total_salary = base_salary + (bonus_rate * base_salary);
    printf("The Total salary is UGX %d\n",total_salary);
} 
//14.Profit or Loss
void profit_loss(int selling_price, int cost_price) {
    int profit_loss = selling_price - cost_price;

    if (selling_price > cost_price) {
        printf("The profit is UGX %d\n", profit_loss);
    } else if (selling_price < cost_price) {
        printf("The loss is UGX %d\n", -profit_loss); // Display absolute value for loss
    } else {
        printf("No profit, no loss.\n");
    }
}
//15.Discounted Price if Discount is Above 20%
void discounted_price2(int original_price, float discount_rate) {
    if (discount_rate > 20) {
        float discounted_price = original_price - (discount_rate / 100 * original_price);
        printf("The discounted price is %.1f\n", discounted_price);
    } else {
        printf("There is no discount. The price remains UGX %d\n", original_price);
    }
}