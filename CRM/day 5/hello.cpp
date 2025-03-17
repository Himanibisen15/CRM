//namespace 
// logical collection of classes 

#include<iostream>

using namespace std;



int main()
{
Person p1;
p1.setName("krishna");
p1.setAge(22);
cout<<p1.getName()<<" "<<p1.getAge()<<endl;
Person p2("kedar",23);
cout<<p2.getName()<<p2.getAge()<<endl;
Person *ptrperson= new Person(); 
ptrperson->setAge(23);
ptrperson->setName("himani");
cout<<ptrperson->getName()<<ptrperson->getAge()<<endl;
delete (ptrperson);

Point o1(2,4);                                                                                                 





}
class Point{
  private:
  int x; 
  int y;
  public:
  Point(){
      x=y=0;
  }
  Point(int a, int b)
  {
      x = a;
      y = b;
      cout<<"Point object created"<<endl;
  }
 
  ~Point()
  {
      cout<<"Point object destroyed"<<endl;
  }

  void show(){
      cout<<"Point details:"<<endl;
      cout<<"X:"<<x<<endl;
      cout<<"Y:"<<y<<endl;
  }
};


class Person {
   private:
   int age ;
   string name;

 public:
           
 void setAge(int n){
  age= n;
 } 
 void setName(string namee){
  name=namee;
 }
 int getAge (){
  return age;
 }
string getName(){
      return name;
}
Person(){
       cout<<"person object created"<<endl;
}
Person(string a,int b){
  name = a;
  age = b;

}
~Person(){
  cout<<"person objext destroyed"<<endl;
}
};

