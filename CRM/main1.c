#include<stdio.h>

#define MAX_CUSTOMERS 100
#define SIZE 3

    // Structure to store customer information
    struct Customers {
        int customerID;         // Unique identifier for each customer
        char name[100];         // Customer's full name
        char address[200];      // Customer's address
        char phone[15];         // Customer's phone number
        char email[100];        // Customer's email address
        char interactionHistory[500]; // Description of interactions with the customer
    }; 
     struct Customers s[5];
    
     void acceptinfo(){
        for(int i=1;i<SIZE;i++){
        printf("Enter customerID :");
        scanf("%d",&s[i].customerID);
        printf("Enter name :");
        scanf("%s",&s[i].name);
        printf("Enter address :");
         scanf("%s",&s[i].address);
         printf("Enter phone:");
         scanf("%s",&s[i].phone);
         printf("Enter email :");
         scanf("%s",&s[i].email);
         printf("enter a interactionHistory:");
        scanf("%s" ,&s[i].interactionHistory);
        }
    }
     void display(){
        for(int i =1;i<SIZE;i++){
        printf("your id is :%d\n",s[i].customerID);
        printf("name : %s\n",s[i].name);
        printf("address : %s\n",s[i].address);
        printf("phone:%s\n",s[i].phone);
        printf("Enter email : %s\n",s[i].email);
     }
    }
     void show_details(int n){
 
                   printf("your id is :%d\n",s[n].customerID);
                   printf("name : %s\n",s[n].name);
                   printf("address : %s\n",s[n].address);
                   printf("phone:%s\n",s[n].phone);
                   printf("Enter email : %s\n",s[n].email);
           
     }
    
    int main(){
    
         acceptinfo();
         display();
         int n;
         printf("enter a number customerid");
         scanf("%d",&n);
        show_details( n);
       return 0;
    }

