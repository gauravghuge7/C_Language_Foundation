#include<stdio.h>

int main() {
    // Write C code here
    
    
    
    int a;
    printf("enter encome ");
    scanf("%d",&a);
    
    
    if (a<250000){
        printf(" you didn't want to pay gst ");
    }
    else if (a>250000){
    printf("you want to pay gst");
}
  
    else if (a>750000){
        printf("hou want to pay extra gst ");
    }

}