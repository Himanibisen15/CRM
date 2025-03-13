#include <stdio.h> //header file including

#define MAX_CUSTOMERS 100  //macros definition
#define SIZE 10

// Structure to store customer information && type declaration
struct Customer {
    int customerID;         // Unique identifier for each customer
    char name[100];         // Customer's full name
    char address[200];      // Customer's address
    char phone[15];         // Customer's phone number
    char email[100];        // Customer's email address
    char interactionHistory[500]; // Description of interactions with the customer
};
struct Customer c[SIZE]; //global variable

void acceptInput(){
    //UI logic : accepting input from user
    for (int i=0; i< SIZE-1 ; i++){
        printf("Enter details of customer %d\n", i+1);
    printf("Enter customerID:");
    scanf("%s",&c[i].customerID);
    printf("Enter name:");
    scanf("%s",&c[i].name);
    printf("Enter address:");
    scanf("%s",&c[i].address);
    printf("Enter phone:");
    scanf("%s",&c[i].phone);
    printf("Enter email:");
    scanf("%s",&c[i].email);
    printf("Enter interactionHistory:");
    scanf("%s",&c[i].interactionHistory);}
}

void displayOutput(){
    //UI logic: displaying output to user
    for (int i = 0; i <SIZE-1; i++){
    printf("customerID: %d\n",c[i].customerID);
    printf("Name: %s\n", c[i].name);
    printf("address: %s\n", c[i].address);
    printf("phone: %s\n",c[i].phone);
    printf("email: %s\n", c[i].email);
    printf("interactionHistory: %s\n", c[i].interactionHistory);}
}
int main(){
    acceptInput();
    displayOutput();
    return 0;



}