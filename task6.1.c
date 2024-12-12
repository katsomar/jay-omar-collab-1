#include <stdio.h>
void discounted_price(int price, float discount_rate);


int main(){
        discounted_price(25000,0.2);
return 0;    
}
void discounted_price(int price, float discount_rate){
   float discounted_calc= price - (discount_rate * price);
    printf("The discounted price is %f\n",discounted_calc);
}

/*
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
    */
    /*
    //12.Print Tax Amount 
    int price;
    float tax_rate;
    int tax_amount;

    //prompt user for price
    printf("Please enter a  price :\n");
    scanf("%d",&price);

    //prompt user for a tax rate
    printf("PLease enter a tax value :\n");
    scanf("%f",&tax_rate);

    tax_amount = (int)(price * (tax_rate/100));

    //Calculating the tax amount
    printf("The tax amount = UGX %d\n",tax_amount);
    */
