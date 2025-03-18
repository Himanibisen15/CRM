#include<iostream>

using namespace std;
 class Date{
    private:
       int day;
        int month ;
        int year;
     public:
         int getDay(){
                   return day;
         }
         void setDay(int d){
            day=d;
            
         }
         int getMonth(){
               return month;
         }
         void setMonth(int m){
                      month=m;
         }
         int getYear(){
                     return year;
         }
         void setYear(int y){
                    year=y;
         }
         Date(){
            day=12;
            month=3;
            year=2025;
         }
         Date(int d,int m,int y){
            day=d;
            month=m;
            year=y;
         }
         ~Date(){
            cout<<"Date destructor is called"<< endl;
         }
         void show(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
         }
 };
 class Account{
           private:
             int id;
             string holder;
             double balance;
             Date createdOn;
             Date modifiedOn;
        public:
     Account(){
        // id=1;
        // holder="krishna";
        // balance=4758696.32;
        // createdOn=10/03/2025;
        // modifiedOn=11/03/2025;
    
    }

    Account(int i,string name,double amount ,Date currentdate,Date modified){
        id=i;
        holder=name;
        balance=amount;
        createdOn=currentdate;
        modifiedOn=modified;
              
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

    
    void show(){
        cout<<"Account ID:"<<id<<endl;
        cout<<"Account holder:"<<holder<<endl;
        cout<<"Account balance:"<<balance<<endl;
        cout<<"Account opened date:";
        createdOn.show();
        cout<<"acoount last modified on";
        modifiedOn.show();



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
          Date date(18,3,2025);
          Date modate(12,3,2025);
       Account no1(1,"Krishna",64654,date,modate);
        cout<<" "<<endl;
        no1.show();
    return 0;
 }
 