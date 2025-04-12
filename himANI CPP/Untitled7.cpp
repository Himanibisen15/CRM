//create shopping list having options
//1.add to list 2.delete from list 3 print list
//1.add will add iff item already not there on list
//2.delete one must give list print and reve from item number
//3.print should print with 1. 2. 3.   bullets.
//0.exit
//also hand;e error in input selection(other than 0 to 3 error)
#include <iostream>
#include <vector>
#include <algorithm>  // for std::find
using namespace std;
void display_menu()
{
    cout<<"\nShopping List";
    cout<<"\n-------------";
    cout<<"\n1.Add Item To List";
    cout<<"\n2.Delete Item To List";
    cout<<"\n3.Print List";
    cout<<"\n0.Exit";
    cout<<"\n:";
}
void addItem(vector<string> &s_list,string item)
{
    //search item there in list or not
    if (find(s_list.begin(), s_list.end(), item) != s_list.end()) {
        cout << item << " Allready present in the vector.";
    } else
    {
        s_list.emplace_back(item);
        cout << item << " added to list";
    }
}
void printList(vector<string> &s_list)
{
    //1.Eggs 2.Bread 3.water....
    cout<<"\nShopping list has\n";
    for(int i=0;i<s_list.size();i++)
    {
        cout<<"\n"<<(i+1)<<"."<<s_list[i];
    }
}

void delete_list(vector<string> &s_list)
{
        int i;
        cout<<"\nEnter Item number to delete:";
        cin>>i;
        if( i>0 && i<=s_list.size())
            {
             s_list.erase(s_list.begin()+(i-1));
             cout<<"\nItem deleted";
        }
        else
        {
             cout<<"\nWrong Item number:";
        }
}
int main() {
    //create s_list as vector of type string
    vector<string> s_list;
    int choice;
    //create function that display menu
    do
    {
        display_menu();
        cin>>choice;
        switch(choice)
        {
            case 1:
                {
           
                cout<<"\nGive Item to add:";
                string item;
                cin>>item;
                addItem(s_list,item);
                break;
            }
            case 2:
               
                {
                printList(s_list);
                delete_list(s_list);
                break;
            }
            case 3:
            {
                printList(s_list);
                break;
             }
            default:
                {
               
                cout<<"\nWrong Choice..";
                break;
            }
        }
       
    }while(choice!=0);

   
    return 0;
}