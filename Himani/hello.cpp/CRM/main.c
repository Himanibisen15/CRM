#include <stdio.h> //header file including

#define MAX_CUSTOMERS 100  //macros definition

// Structure to store customer information && type declaration
struct Customer {
    int customerID;         // Unique identifier for each customer
    char name[100];         // Customer's full name
    char address[200];      // Customer's address
    char phone[15];         // Customer's phone number
    char email[100];        // Customer's email address
    char interactionHistory[500]; // Description of interactions with the customer
};
struct Customer c1; //global variable

void displayOutput(){
    //UI logic: displaying output to user
    printf("customerID: %s\n", c1.customerID);
    printf("Name: %d\n", c1.name);
    printf("address: %s\n", c1.address);
    printf("phone: %s\n", c1.phone);
    printf("email: %d\n", c1.email);
    printf("interactionHistory: %s\n", c1.interactionHistory);
}
int main(){
    displayOutput();
    return 0;



}
 
   