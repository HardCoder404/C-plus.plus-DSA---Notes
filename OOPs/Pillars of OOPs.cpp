/*                                                    Pillars of OOPs

Encapusulation
Inheritance
Polymorphism
Abstraction


NOTE : basically dekha jaai toh av tk hum kya kr re h ? hm jo hai...data members ko to private mark kr re h..or functions ko public ...wse ye jaroori to nahi h ..lkkn ek tarika sa hem dikh ra h ache s code krne ka 


1.                                               Encapusulation

   *--> wrapping up of data members,and function into single entity is called Encapusulation.   
   
 Fully Encapusulation : when all the datamembers are marked as private.
 
   why Encapusulation :
    *--> it helps for data hiding/information hiding.
    *--> if we want..we can make the the ...'read only'
    *--> code reusuability
    *--> unit testing me hlps krta h
   
   
   
/*          Implementation:

  class student{
      private:
        string name;
        int age;                               // bas yahi toh hai...Encapusulation jisme humne kuch data members ko or functions pade hue hai.
        int height;
    public:
       int getAge(){
           return this->age;
       }
  };
   
   
   
NOTE: jab koi function kuch return nahi kar ra  hota h toh hum use...print nahi karwa sakte cout<< ase likh ke..means ki cout<<o.sleep();...ase ye glt hoga....hume simpley...o.sleep(); likhna h    
   
   
2.                                        Inheritance

   *--> matlab ki koi chiz inherit karna...apne parents class se.
   
   suppose hamare pas do class hai.. A,B ab B ne kuch properties/data members inherit kar lia...class A se...that is called Inheritance.
   class A -> parent class/ super class
   class B -> sub class/ child class
   
   
/*          Implementation
  class A{
      //code
  };
  class B : access_modifier(public/private/protected) A{
      // code 
  }; 
   
   
   
example :
   #include <iostream>
using namespace std;

class Human{
    public:
      int height;
      int weight;
      int age;
    
    public:
      int getAge(){
          return this->age;
      }
      void setWeight(int w){
          this->weight=w;
      }
};

class child : public Human{                                  // here we are we creating child class which is inherited from Human class
    public:
      string color;
    
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }  
};

int main(){
    child o1;
    cout<<o1.age<<endl;
    cout<<o1.weight<<endl;
    cout<<o1.height<<endl;                                             // here we are checking some properties ki..ye kaam kar r e h ki ni.
    cout<<o1.color<<endl;
    o1.sleep();
    o1.setWeight(55);
    cout<<o1.weight<<endl;

return 0;
}
   
   
   
   
   
/*                                 Table for (Mode of Inheritance)
   
   
   
/*             Parent class                                           child class                             Result
    (kon sa access_modifier laga hua hai)                     (kis way me inherit kar ra hai)
    
    public                                                          public                                     public
    public                                                          private                                    private
    public                                                          protected                                  protected
    
    private                                                         public                                     not accessible        
    private                                                         private                                    not accessible
    private                                                         protected                                  not accessible
    
    protected                                                       public                                     protected
    protected                                                       private                                    private
    protected                                                       protected                                  protected
   
   
   
Protected :  
    acutally..it is similar to private modifier.but the condition is that...
    * ki ise hum class k anadr hi aaccess kar skte hai..bahar ni
    * or agar hum koi child class bnate hai..parent class se..toh..usme ise access kr sakte hai.
    
    
    
    
    
/*                        Types of Inheritance

NOTE: object hamesa hi subclass ya child class ka banta hai.>>

   single
   multiple
   multi-level
   hybrid
   heirarchical
   
    
1. single Inheritance : means..tum ek class B ko inherit kara hai..class a se..or in simple words ...jab aap ek bar bas...kisi class ko inherit karte hai..use single Inheritance kahte hia.
    A --> B
    
example: 
#include <iostream>
using namespace std;

class animal{
    public:
      int weight;
      int age;
    
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class dog : public animal{                                  // here we are we creating child class which is inherited from base class

};
int main(){
    dog d;
    d.speak();
return 0;
}



2. multi-level Inheritance : matlab ki apne multiple levels k andar...Inheritance lagai hai...
   A <--- B <--- C ....manlo..koi ek class thi (A) ek (B) class n usko inherit kar lia....ab ek nyi class aai (C) usne B class ko Inherit krlia....ase hi ek or class aai D usne class C ko Inherit krlia..ase hi multi-level m class Inherit hore h isei...hi khte h multi-level Inheritance.

example:    
class animal{
    public:
      int weight;
      int age;
    
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class dog : public animal{                                  

};
class cat: public dog{
    
};
int main(){
    cat c;
    c.speak();
return 0;
}   


3. multiple Inheritance : matlab ki...ek class A hai..or ek class B hai...ab ek nyi class or aagyi...class C...joki class A ko v inherit karti hai..or class B ko v.
   A,B <--- C
    class C:public A,public B{};
 
example: 
class animal{
    public:
      int weight;
      int age;
    
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class human : public animal{                                  
  public: 
  string colour;
  public: 
  void speak(){
      cout<<"speaking"<<endl;
  }
};

// multiple Inheritance 
class hybrid:public animal,public Human{
    
};
int main(){
   hybrid obj;
   obj.speak();
   obj.bark();
return 0;
}
   
   
    
4. heirarchical Inheritance : one class serve as parent class for more than one class...mtlb..ki ek class hogi A jo ki parent class ki tarah hogi..ek dusri class B k lie v or class C k lie..v or ho sakta hai..or v class ho jinke lie..parent class ek hi hogi..A.    
    A <--- B,C....
   
example: 
class A{
    public: 
    void func1(){
        cout<<"inside func1 "<<endl;
    }
};
class B:public A{
    public: 
    void func2(){
        cout<<"inside func2 "<<endl;
    }
};
class C:public A{
    public: 
    void func3(){
        cout<<"inside func3 "<<endl;
    }
};
int main(){
    A ob1;
    ob1.func1();
    
    B ob2;
    ob2.func1();
    ob2.func2();
    
    C ob3;
    ob3.func1();
    ob3.func3();
    
NOTE: ye ob3 jo hai..func2 ko call nahi kr sakta..qki unka koi relation hi nahi baith raha.islie    
    return 0;
}



   
5. hybrid Inheritance : combination of more than one type of Inheritance...mtlb ki av upper jitte v Inheritance pade hai...unmese kisi do ko combine kardo...ban gya hybrid Inheritance.
    example : single/heirarchical....humne manlo iska bna dia..combination

example: 
#include <iostream>
using namespace std;
class A{
    public: 
    void func1(){
        cout<<"inside func1 "<<endl;
    }
};
class B:public A{
    public: 
    void func2(){
        cout<<"inside func2 "<<endl;
    }
};
class D{
    public: 
    void func4(){
    cout<<"inside class D"<<endl;
    }
};
class C:public A,public D{                       // here we are acheiving hybrid Inheritance
    public: 
    void func3(){
        cout<<"inside func3 "<<endl;
    }
};
int main(){
    C obj;
    obj.func4();
    return 0;
}




/*                                          Inheritance Ambiguity

 *-> iska matalb h ki....manlo ek class A hai jiske pas koi function hai(func()) asa krk...ab ek or class hai class B jiske pas v same function hai..(func())  ....ab agar ek nyi class bnaye...class C jo ki in dono class ko inherit karti hai... or agar is nyc class class
     C ka object bnake...agar hum func() ko call kre..toh kon si wali function call hogi....class A m hai wo ya phir class B m hi jo wo....
     
     so...to resolve this problem we use scope resulution operator   (::)

example : 

    #include <iostream>
using namespace std;

class A{
  public:
   void func(){
       cout<<"I am A"<<endl;
   }
};
class B{
  public:
   void func(){
       cout<<"I am B"<<endl;
   }
};
class C:public A,public B{                                  // here we made a new class which inherit the above both class....publicly
    
};


int main(){
  C obj;
  obj.A::func();                 // this is how implementation for inheritancae ambiguity done           // this time...function of class A will call............
  obj.B::func();                                                                                         // this time...function of class B will call.............
  
return 0;
}






3.                                               Polymorphism 

   *--> it means existing in a multiple forms.   here poly means "many" and morph means "forms".
   *--> suppose...apke papa kisi k lie..son honge..kisi k lie..husband honge..kisi k lie...father honge....kisi k lie bhai honge...
   so here single thing is existing in multiple forms...so it a Polymorphism.
   
   Types : 
    (i) compile time Polymorphism 
    (ii) run time Polymorphism
   
   (i) compile time Polymorphism : it is also said "static Polymorphism".          matlab ki hume pahale hi pta h kon si chiz kis form m exist kr ri hai...
     types : 
        (a) function overloading
        (b) operator overloading
   
function overloading : 
    agar mujhe function overloading karni hai...meltb same naam se multiple function banana chahta hu...to mujhe input argument me change karna pdega....
    agar mai sirf datatype change krta hu tb v....wo error sshow krega....hum overloading krne k lie..different argument pass krne hi padenge.

    example :  
        #include <iostream>
using namespace std;

class A{
  public:
   void func(){
       cout<<"func1 calling"<<endl;
   }
   void func(string name){
       cout<<"func2 calling : "<<name<<endl;
   }
   int func(string name,int n){                                     // NOTE: agar tum same function bana re ho same naam se..or bas datatype change kr re hoto...tab v error dega...qki...tumhe..argument v change krne pdenge...ya kisi m already koi argument h to..tumhe whi..or uske sath koi dusra argument dalna pdega.
       cout<<"func3 calling : "<<name<<endl; 
       return n;
   }
};

int main(){
  A obj;
  obj.func();
  obj.func("prince");                                      // yaha humne....teeno function ko call krwa dia....yhi toh hai...function overloading.
  obj.func("prince",5);
return 0;
}
       

operator overloading : 
    manlo.. ek (+) operator hai,,,jo ki..kissi ko add krata hi hai...string k case m concatinate v karata hai...
    ab mai ye chahta hu ki...tu bhai mere lie ke or kaam krr...agar mai tujhe call kru toh...tum mere lie hello love babbar print krwa...
    ya phir...agar mai + bolu to tu...minus karde..


NOTE:  agar aap ...dekhna chhate hai...ki kis ksi operator ko hum overload kr sakte hai...toh aap net p search maar sakte hai...
   which operator can be overloaded in c++.



   syntax for operator overloading :
    returntype operator + (){                       or parenthesis k andar...koi input paramerter aayga.   or jo aap ...operator k baad likh re ho..uska mtlb ki aap filhal kon sa operator ko overload kr re ho....agar brackets ko krte toh + ki jagah brackets aajate().
        // code
    }


example : 
   #include <iostream>
using namespace std;

class B{
  public:
   int a; 
   int b;
    public : 
    int add(){
        return a+b;
    }
  void operator + (B &obj)  {                                                   // + operator is overloaded
     int  value1=this->a;
      int value2=obj.a;
      cout<<"output "<<value2-value1<<endl;
  }
  void operator () (){                                                          //  () operator is overloaded
      cout<<"mai bracket hu "<<this->a<<endl;
  }
};
int main(){
  B obj1,obj2;
  obj1.a=4;
  obj2.a=7;
  obj1+obj2;                             // ess tarah se humne...call krwaya (+) operator overloading ko.
  
  obj1();                                 // yaha humne bracket() operator ko overload krwaya hai
return 0;
}


    (ii)  run time Polymorphism : it is also said..."dynamic Polymorphism"....isme method overriding kaam krta hai..lets see how.
     
    manlo...ek class hai animal krk....jsime koi function  hai speak krk...or usme cout sttement me speaking likhe hai...
     ab ek dusri class dog hai..jisne animal class ko inherit krlia hai...ab usne ess function ko use kia..or cout statement m change krdia...ki barking..
     so basically yhi hai run time Polymorphism mtlb ki hum method/function overriding kr re hai.

  RULES : 
   (i)  method/function of the parent class and the method/function of the child class must have same name.
   (ii)  method/function of the parent class and the method/function of the child class must have same paramerter/argument.
   (iii) it is possible through inheritance only.
   
   
  example  :
     #include <iostream>
using namespace std;

class Animal{
    public: 
     void speak(){
         cout<<"speaking"<<endl;
     }
};
class dog:public Animal{                                          // yaha isne inherit krlia hai..abouve class ko.
     public: 
     void speak(){
         cout<<"barking"<<endl;         // this is called function overriding.                      // ab humne yaha change/modify kar dia..hai...toh..ye wla ab print hoga..
     }                                                        // lekin agar humne iske andr kuch v ni likha hota..mtlb ki empty rhne dia hota..toh Animal wala cout std::statement call hota..
};
int main(){
  dog obj;
  obj.speak();
return 0;
}
   
   
   
*--> iska basically use ye hota hia..ki agar ek class m 10 method/function hai..or ek dusri class isko inherit kr ri h..lekin wo iska 8 method toh as it is use krna chahhti h lekin baki k 2 method khud implement krna chahti hai..to hum iska use kr sakte hia.

   
   
   
   
   
4.                                                 Abstraction 
  
  *--> It is basically a type of Implementation hiding.
   for example : suppose you write an email..and then you click on send button then after the email has been sented...but we dont know how the email Actually sent..means what process has done behind the seen...this is what Abstraction.
    *--> by using the access modifiers u can use Abstraction in classes.(public/private/Protected).   
   
*/







