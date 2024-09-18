

#include<stdio.h>


void main() {


   /* 
   
      if() {}
      
      if() {}
   

      if() {}

      else if() {}


   
   
   */


  /** 
   * 
   *    else if() {
   *   }
   * 
   * 
  */

   

 //  accept course price and check discount on it 

   int price;   // variable declaration
    
   printf(" Enter course price");
   
   scanf("%d", &price);   /// initialization
    
    
   if(5000 <= price) {
      
      // int discount =  price * (10 / 100);
      
      // int discountprice = price - discount;
      
      int discountPrice = price - 500;
      
      printf("after discounted 10 price is %d ", discountPrice);
      
   }
   
   else if(3000 <  price ) {
      
      printf(" after 5 percent discount %d", price - 200);
      
   }   
   else {
      printf(" price is very small ");
   }
    
   

}

