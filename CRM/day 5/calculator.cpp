#include<iostream>

using namespace std;

class Calculator{
public:

void addition(int a,int b){
    cout<<a+b;
    }
    void subtraction(int a,int b){
        if(a>b){
            cout<< a-b;
        }else{
            cout<< b-a;
        }
    }
    void multipication(int a,int b){
        cout <<a*b;
    }
    void division(int a,int b){
        int result;
        result =a/b;
        cout<<result;    
    } 

};
int main(){
    Calculator calc;
    int a=10 ,b=12;
   int option;
    cout<<"choosse a number of operation"<< endl;
    while(true){
       cout<< "choose 1 for addtion"<< endl;
       cout<< "choose 2 for subtraction "<< endl;
       cout<< "choose 3 for multipication"<< endl;
       cout<< "choose 4 for division"<< endl;
       cout<<"exit for 5"<<endl;
       cout<<"choose a option"<<endl;
    
      
      cin>>option;
      if(option==5){
        break;
       }
    switch(option){
        case 1:calc.addition(10,12);break;
        case 2:calc.subtraction(10,12);break;
        case 3:calc.multipication(10,12);break;
        case 4:calc.division(10,12);break;
        case 5:return 0;break;
        default:cout<<"done"<<endl;break;
    }
}
return 0;
}