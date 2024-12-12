#include <stdio.h>
void discounted_price(int price, float discount_rate);
void tax_amount(int price , float tax_rate);

int main(){
        discounted_price(25000,0.2);
        tax_amount(25000, 20);
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
