#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    int element;
    do
    {
        cout<<"\nEnter data:";
        cin>>element;
        if(element==0)
            break;
        v.emplace_back(element);
    }while(1);
    cout<<"\nTotal elements:"<<v.size();
    for(int i=0;i<v.size();i++)
        {
            cout<<"\n at "<<i<<" we have: "<<v[i];
        }
        return 0;
}