#include <stdio.h> //header file including

#define MAX_CUSTOMERS 100  //macros definition
#define SIZE 3

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

//CRUD operations
void acceptAll(){
    for(int i = 0; i < SIZE; i++){
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

void showAll(){
    printf("\n All customer Details \n");
    for (int i = 0; i <SIZE; i++){
        printf("customerID: %d\n",c[i].customerID);
        printf("Name: %s\n", c[i].name);
        printf("address: %s\n", c[i].address);
        printf("phone: %s\n",c[i].phone);
        printf("email: %s\n", c[i].email);
        printf("interactionHistory: %s\n", c[i].interactionHistory);}
    }

void show(int index){
    printf("\n customer Details\n");
        printf("customerID: %d\n",c[index].customerID);
        printf("Name: %s\n", c[index].name);
        printf("address: %s\n", c[index].address);
        printf("phone: %s\n",c[index].phone);
        printf("email: %s\n", c[index].email);
        printf("interactionHistory: %s\n", c[index].interactionHistory);
}

void update(int index){
    printf("\n Update Existing  %d the customer Details\n", index+1);
    printf("Enter customerID:");
    scanf("%s",&c[index].customerID);
    printf("Enter name:");
    scanf("%s",&c[index].name);
    printf("Enter address:");
    scanf("%s",&c[index].address);
    printf("Enter phone:");
    scanf("%s",&c[index].phone);
    printf("Enter email:");
    scanf("%s",&c[index].email);
    printf("Enter interactionHistory:");
    scanf("%s",&c[index].interactionHistory);
}

//Entry Point Function
int main(){
    acceptAll();
    showAll();

    int index;
    printf("Enter index to show details: ");
    scanf("%d", &index);
   
    show(index);
    update(index);
    showAll();
    return 0;
}