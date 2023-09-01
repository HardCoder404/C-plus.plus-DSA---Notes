#include <iostream>
using namespace std;
/*                                               Array of Object  (mtlb agar hume Array type ka Object banna hai toh)
 
class Employee{
    int salary,id;
    public: 
        void setdata(void){
            cout<<"Enter the id of Employee"<<endl;
            cin>>id;
        }
        void printID(void){
            cout<<"Id of Employee is "<<id<<endl;
        }
};
int main()
{  Employee fb[4];
   for(int i=0;i<4;i++){
       fb[i].setdata();
       fb[i].printID();
       
   }
   return 0;
}

*/


/*                                                    Passing Objects as Function Arguments 

class Complex {
    int a,b;
    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        void setdataBySum(Complex o1,Complex o2){                         // here we are passing Objects of Complex class
            a=o1.a + o2.a;
            b=o1.b + o2.b;
        }
        void printdata(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c1.printdata();
    
    c2.setdata(4,5);
    c2.printdata();
    
    c3.setdataBySum(c1,c2);                                         // here we aare calling it by passing object
    c3.printdata();
    return 0;
}

*/
















