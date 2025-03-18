#include<iostream>

using namespace std;
 class Account{
           private:
             int id;
             string holder;
             double balance;

        public:
     Account(){
        // id=1;
        // holder="krishna";
        // balance=4758696.32;
        // createdOn=10/03/2025;
        // modifiedOn=11/03/2025;
    
    }

    Account(int i,string name,double amount ){
        id=i;
        holder=name;
        balance=amount;
     
              
    }
    int getId() {
        return id;
    }

    string getHolder() {
        return holder;
    }

    double getBalance() {
        return balance;
    }

  

    void setId(int i) {
        id = i;
    }

    void setHolder(string name) {
        holder = name;
    }

    void setBalance(double amount) {
        balance = amount;
    }
    
    void deposit(double amount){
        balance=balance+amount;
      }
    void withdraw(double amount){
      balance=balance-amount;
    }
static void fundtransfer(Account *ptrfrom,Account *ptrto,double amount){
    cout<<"performing fund transfer"<<endl;
    ptrfrom->withdraw(amount);
        ptrto->deposit(amount);
}
           
    void show(){
        cout<<"Account ID:"<<id<<endl;
        cout<<"Account holder:"<<holder<<endl;
        cout<<"Account balance:"<<balance<<endl;
        cout<<"Account opened date:";

        cout<<"acoount last modified on";



    }        
             
 };

int main(){
    cout<<"welcome to my  bank"<<endl;

    //    Date today(18,03,2025);
    //    Date yesterday(17,03,2025);
    //    Date tmmorrow(19,03,2025);

    //    Date d1;
    //    today.show();
    //    yesterday.show();
    //    tmmorrow.show();

       //d1.Date(2,12,2006)
       
       Account no1(1,"Krishna",64654);
       Account no2(2,"Kedar",64604);

        cout<<" "<<endl;
        no1.show();
        no2.show();
        Account::fundtransfer(&no1,&no2,5000);
        no1.show();
        no2.show();
    return 0;
 }
 