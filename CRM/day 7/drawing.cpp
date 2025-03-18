#include<iostream>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
//default constructor    
Point(){
        x=y=0;
    }
// paramatrized constructor
Point(int a,int b){
    x=a;
    y=b;
    cout<<"Point Object Created"<<endl;
}
//destructor
~Point()
{
    cout<<"Point Object destroyed"<<endl;
}
void show(){
    cout<<"Point details"<<endl;
    cout<<"X:"<<x<<endl;
    cout<<"Y:"<<y<<endl;
      }
};



//abstract class (Parent/Super/Base)
class Shape{
          protected:
            string style;
            string color;
            string thickness;
      public:
      //pure virtual function
          virtual void draw()=0;
};

class Line:Shape{
    private:
    Point startpoint;
    Point endPoint; 
    public:
       void draw(){
         cout<<"drawing Line"<< endl;
       }  
};
class Triangle:Shape{
           private:
              Point point1;
              Point point2;
              Point point3;
            public:
            void draw(){
                cout<<"Drawing Traingle"<<endl;
            }
};
int main(){
    Line l1;
    Triangle t1;
    Shape *ptrShape=NULL;
    ptrShape=(Shape *)&l1;
    ptrShape->draw();
    ptrShape=(Shape *)&t1;
    ptrShape->draw();
    cout<<"Welcome to Graphics"<<endl;
}
