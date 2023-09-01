//                                                       template

//   *--> simply khau tohh....kisi program m agar ek hi tarah k kaam hora h bas datatype alg alg hai toh rather than declaring...differnet classes for them...it is better to write one method any use it by any datatype.

/*                 genral syntax: 
template <class T>
class vector {
    T *arr;
    int size;
    public:
        vector(T* arr)[
            //code
        ]
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1();
    vector<float> myVec2();
    return 0;
}
 */





/*                                           Writing our first C++ template ;
  
  Understanding the code below to calculate the DotProduct of two integer vectors:
  
 
  #include <iostream>
using namespace std;
 
template <class T>
class vector
{
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    vector<float> v1(3); //vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); //vector 2 with a float data type
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}

*/






/*                                       Multi-Parameters template 

syntax: 
#include<iostream>
using namespace std;
 

template<class T1, class T2>
class nameOfClass{
    //body
}


int main(){
    //body of main
}

example : 

 #include<iostream>
 using namespace std;
 
 template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
    return 0;
}

*/




/*                                      Class template with default parameters

 #include<iostream>
using namespace std;
 
template <class T1=int, class T2=float, class T3=char>
class Harry{
    public:
        T1 a;
        T2 b;
        T3 c;
        Harry(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main()
{
    Harry<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    Harry<float, char, char> g(1.6, 'o', 'c');
    g.display();
    return 0;
}
*/




/*                                              Function Templates & Function Templates with Parameters
   
   #include<iostream>
using namespace std;
 
// float funcAverage(int a, int b){
//     float avg= (a+b)/2.0; 
//     return avg;
// }
template <class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

int main(){
    float a;
    a = funcAverage(5,2);                                       // or or (5,2.8)
    printf("The average of these numbers is %f\n",a);
    int x=5,y=4;
    swapp(x,y);
    cout<<x<<","<<y<<endl;
    return 0;
}





/*                                                 Overloading Template Functions

    #include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    func(4);  //Exact match takes the highest priority                                         //    now when we call the function func, it finds its exact match in the overloading and calls that itself. That is, it gives its exact match the highest priority. 
    return 0;
}


*/