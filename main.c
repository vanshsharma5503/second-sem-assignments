/* If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss.Also determine how much profit he made or loss he incurred. */

#include <stdio.h>

int main(){
  // input cost_price and selling_price.
  float cp,sp;
  // output profit and loss.
  float p,l;
  printf("Enter cost price :-\n");
  scanf("%f",&cp);
  printf("Enter selling price:-\n");
  scanf("%f",&sp); 
  p=sp-cp;
  l=cp-sp;
  if(p>0)
    printf("The seller made a profit of RS.%f",p);
  if(l>0)
    printf("The seller incurred loss of RS.%f",l);
  if(p==0)
    printf("There is no loss,no profit");
  return 0;
}