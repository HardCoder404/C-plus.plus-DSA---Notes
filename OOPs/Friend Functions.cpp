#include <iostream>
using namespace std;

class Complex{
  int a,b;
   public: 
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    friend Complex sumComplex (Complex o1,Complex o2);                  // declaration of friend function ....basiccally friend function ka ye mtlb hota hai..ki wo perimission deta kisi dusre function ko...ki ha bhai chl tu mere clas k private data ko access kar sakta hai.
    void printdata(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1,Complex o2){                      // jaise ye hum isko aaccess kr na chah re hai..toh upper wala ne isko friend bna lia....ab ye usk private member ko access kr sakta hai.
    Complex o3;                           
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setdata(4,5);
    c1.printdata();
    
    c2.setdata(5,3);
    c2.printdata();

    sum=sumComplex(c1,c2);
    sum.printdata();
    return 0;
}




/*                           Properties of friend function 

   1. Not in the scope of class...(mtlb ki ye us class ka part ni hota jaha isko declare kia jaa ra hai);
   2. Since it is not in the scope of class, it cannot be called from the object of that class...jaise ki manlo apne likh dia object me c1.sumComplex to aap ase ni kar sakte,,it is wrong.
   3. It can be invoked without the help of any object.
   4. Usually contains the object as argument.
   5. It can be declared inside public or private section of the class.
   
*/










