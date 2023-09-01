/*                                          OOPs Concept (Object Oriented Programming)

OOPs : basically it is Programming where the things are revolve around the Object...means we talks about Object.

There are 6 Concept of OOPs :-

/*          Object
/*          Class
/*          Abstraction                 -->
/*          Inheritance                 -->
/*          Encapsulation               -->      These 4 are known as "Pillars" of OOPs :
/*          Polymorphism                -->



Class : It is an user defined datatype....It is what..it is just a blueprint or a prototype through which we can create Object.
    Without the decalration of Object no memory would be allocated for the class.
    
Object : Object are the real world entity....each Object has its own data and its function. An Object has some behaviour,some properties.   


NOTE : Attributes means--> the variable and the function.
    and the each class has its own Attributes.
    
    
    
/*                                                    Pillars of OOPs

Abstraction : hiding of implementation detail of the world ..and only show the relevant details   OR OR OR you can say that hiding something into an function is called Abstraction.
    example :-  suppose you just on the switch and the tv starts and there you can see everything...but behind the scene you dont known
    actually what is happening...how the data you get into yours tv ...so this is Abstraction.


    
Inheritance : to inherite some Attributes from base class to derived class or child class..is simply called Inheritance. or or or you can say that...supose in a class it is some data and function..so binding of these data and function is called Encapsulation.



Encapsulation : Hinding of These thing...data and the function into single unit that is know as Encapsulation...or sometimes it also knwon as ...data Hinding.
    example :- as you seen a capsul in medincine..whatever it is inside..it is wrapped from outside....similarly...chocolate..it is wrapped with packs..
    

    
Polymorphism : poly means "many"  and morph means "forms".
    example :- suppose...Jeeny is a girl.she is faculty...she is friend also of somebody...she is tutor also...she is daughter also...she is coluge also...means here Jeeny is only one girl..but she has many forms...and would haave different behaviour while dealling wiht others form...
    like...when she is in a class her behaviour is different...suppose she is talking with hod of clg..so her behaviour is different...
    hope you realte this thing.,,,this is called Polymorphism.
    
In Programming : we have two types of Polymorphism :- 1. overloading   2. overriding 
overloading(compile time Polymorphism) meanss....suppose ....function is same but it do but it does..some other forms and every other same function have differnt differnt argument.
overriding(run time Polymorphism) means totaly change the implementation part..means suppose...a child class inherited from base class..but in base class there is some other task..and the child class inherited this...but in child class the implementation part or the task..is totally different ....this is called overriding.
    
    
    
    
    
    
/*                                     Implementation of Class    
    
    class class_name {                                   -->  this is how class is declare/implement.
    
    
    };                                                   --> dont forget to write semicolon
    
int main(){
    class_name Objectname;               // this is how..object is created for class....we see this earlier in structure also.
}
    
    
    
example : 
   #include <iostream>
using namespace std;

class hero{
    // properties
    int health;
};

int main()
{
    // creation of object for the class
    hero h1;
    cout<<"size is : "<<sizeof(h1)<<endl;                        --> this will print=       size is : 4
    return 0;
}

    
    
    
    
NOTE: Empty class k case me...apke object ko 1byte ki memory allocat hojati hai..
  Empty class : if the class has nothing means we just declare the class..and we put nothing to it...and we make an object for this class..this is called Empty class.
  kahane ka matlb ye hai...agar mai upper ka example lu...or usme agar mai class m kuch v na likhu...or tab mai agar size print karwata hu to wo mujhe 1 print kar k dega..
    
    
    
    
/*                             Accessing the properties/data member of class

    *-->  we can access the properties of class by "dot operator".----> (.)
    
process : object_name dot operator(.) name of that property you want to access.
    example : h1.health;                    // this is how..u can access it.
    
    
    
    
/*                                           Access Modifiers    
    
    public
    private
    protected
    
--> Access Modifiers means ki....hum class ki properties ko data member kaha kaha Access kar sakte hai...mtlb class k anadaar ki class k bahar...wo hume btate hai Access Modifiers.    

NOTE: by default apke class k andar Access Modifiers "private " wala laga rahata hai.



PUBLIC ->         public:                 // this is the decalration of public Modifier
 /*               int health;
 /*               char level;            
matlb ki agar maine public likh dia..to usk niche jitne v properties/data member honge..unhe hum kahi...v Access kar sakta.hu clas k andr v class k bahar v.



PRIVATE ->        private:                // this is the decalration of private Modifier
/*                char level;
/*
matlab ki...agar maine kisi data member/ property ko..private mark kar dia h to use mai...sirf class k andar hi access kar sakata hu class k bahar ni kar sakta.wo error dikkha dega...agar class k bahar kara to.



PROTECTED ->      protected:               // this is the decalration of protected Modifier

--> jab hum child class padhenge..tab ise samjhenge...




/*            Initialization of class member
  by using dot operator
  object_name.class_member name whose property u want to access = value;
   example : 
    h1.health=70;                     // this is how..you can Initialize the class data member.







/*                                          getter and setter

*--> basically we use it...to access the data member  of class...which is private...to outside the class.

   getter means --> to fetch data/read data                           
   setter means--> to set data/u cn use any condition also            
   
example :-

#include <iostream>
using namespace std;

class hero{
     // properties
    private:
    int health;
    public:
    char level;
    
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
  
};

int main()
{
    // creation of object for the class
    hero h1;
    
    cout<<"Health is : "<<h1.get_health()<<endl;            // this is how..yyou can access the getter           But..at this time there is some garbage value to them..bcz we not initialize it anything.
    
    // using setter 
    h1.set_health(70);                                     // this is how you can use setter
   // h1.health=70;                                       // for that... if you r not using getter/setter  and the data member is public then only you can initialize it like this.
    h1.level='A';                                         // it is not private that's why we can access it directly.
   
   
    cout<<"health  is : "<<h1.get_health()<<endl;
    cout<<"level  is : "<<h1.level<<endl;

    return 0;
}






/*                                              Static vs dynamically memory allocation

example :--

 #include <iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;
    
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
  
};

int main()
{
    // static allocation
    hero a;
    a.set_health(70);
    a.set_level('B');
    cout<<"health  is : "<<a.get_health()<<endl;
    cout<<"level  is : "<<a.level<<endl<<endl;
   
   
   // dynamically allocation
    hero *b= new hero;
    b->set_health(80);
    b->set_level('A');
   
    cout<<"health  is : "<<(*b).get_health()<<endl;                           // this is how..we can access it dynamically
    cout<<"level  is : "<<(*b).level<<endl;
    
//               Alternate way (using arrow operator (->) instead of (*b) this ) 
   
    cout<<"health  is : "<<b->get_health()<<endl;                            // this both will print same output as above...
    cout<<"level  is : "<<b->level<<endl;
    
  
    return 0;
}






/*                                             Constructor

*-> jab v aap kisi object ko create karte h toh..ek chiz call hoti h Constructor call.

   -> Ye object cretion k time pe invoke hota hai.
   -> it has no return type.
   -> ek default Constructor pahale se hi hota..hai jab v class banti hai toh..or uska object banta h toh.

NOTE: agar hum khud se Constructor call karte hai toh...jo inbuild Constructor hoga..wo apne aap hi gayab hojyga..


example :                                   Default Constructor/without parametrised Constructor

    #include <iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;
    
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    
 // without parametrised constructor
    hero (){                                                     // here we are made constructor
        cout<<"constructor called";
    }
    
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
  
};

int main()
{
    // static allocation
    hero a;                                                      // here we are make its object..so as we run about the constructor function will call and in its whatever the statement have..it will going to executed.
    // dynamically
    hero *h=new hero();                                           // this time we make object by dynamically.
  
return 0;
}



NOTE: this keyword(->)  :  ye kya hota hai?
    actually jo hamara current object hota h na..or uska jo address hota hai..wo 'this' k andar store hota hai.
    hamre example k case me current object a hai.



example :                                             parametrised constructor 
  *--> means we pass any parameter.

 #include <iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;
    
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    
 // without parametrised constructor
    hero (){                                                     // here we are made constructor
        cout<<"constructor called";
    }
 // parametrised constructor    
    hero(int health,char level){                                    // hum yaha...ek or parameter v le sakte hai..humne level ko le lia.
        cout<<"this ->"<<this<<endl;                                
        this->level=level;                                // ess line ka maltb hai ki...object k level k andar..input level ki value  ko copy kar dia.
        this->health=health;                             // ess line ka matlab hai ki..jo 'a'(object_name) ki health hai..uske andar...ye jo parametrised wale health ki value hai..use daal do. 
    }
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
    void print(){
        cout<<level<<endl;
    }
  
};

int main()
{
    // static allocation
    hero a(10);                                                      // here we are make its object..so as we run about the constructor function will call and in its whatever the statement have..it will going to executed.
    cout<<"address of hero is "<< &a<<endl;                       // yaha humne verify kar lia...ki "this ek pointer hai."...kaise? humne 'a' ka jo address hai use print karwa lia..or jo this ki value hai..use v print karwa lia...ab this k andar...ye jo...'a' ka address aaya hoga..whi store hoga..so it is verified...ki this jo hai...wo current object ka address store karta hai.
    a.get_health();
    
    
    hero temp(30,'b');                        // here we create another new object . or ess wale se humne parametrised constructor wale ko call kra h 
    temp.print();                            // to ye sirff b ko print karega...qki humne print function k andar sirf level ko call karwaya h.
return 0; 
}




example :                                     Copy constructor

   #include <iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;
    
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    
 
    hero(int health,char level){
        this->level=level;
        this->health=health;
    } 
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
  void print(){
      cout<<"health is" <<health<<endl; 
      cout<<"level is" <<level <<endl;
  }
};

int main()
{
    hero s(70,'B');                            // humne yaha properties ki value pass kar di.
    s.print();                               //  humne yaha print function ko call karwa dia.
    
    //copy constructor 
    hero r(s);                                // humne yaha pe ek or object banaya...r or uske anadar s ki sari properties ko copy kar dia...is line ka ye matalab h.
    r.print();                             // ye v whi print krega jo s print krega.
    
return 0;
}




/*                                  copy assignment operator

*--> it means ek ki value dusre m copy kardo using =

like suppose : hero a(10,'c');
    hero b(40,'i');
    a=b;                   // it means ab a k anadr jo v item honge wo b k item se replace hojynge 
    hero a(10,'c');       // or simply humne yaha print krawa lia.   to ab ye 40,i dega.
    hero b(40,'i');






/*                                     Destructor

*--> memory ko deallocate karne k lie...Destructor ka use hota hai....matalab ki memory ko free karwaanaa.
*--> or class create hote hi...Destructor v automatically create hojata hai.
*--> aap khud v create kar sakte hai. ise.
*--> iska naam v ..class k naam ki tarah same hota hai.
*--> its has no return type.
*--> it has no input parameters.


/*            initialization of Destructor
   ~hero(){                //         (~) isko tilda bolte hai.              
       
   }

bas isi tilda (~) ka hi differencce hota h constructor or Destructor m.



NOTE:   jo v object aap static allocation ka dawara karwate hai...uske lie Destructor automatically call hojata hai.
  or   jo v object aap dynamically ka dawara karwate hai...uske lie Destructor manually call karana padta hai.



example : 
   class hero(){
       
       ~hero(){
           cout<<"Destructor called"<<endl;
       }
   };

int main(){
    // static allocation
    hero a;
    
    // dynamically 
    hero *b=new hero;
    // manually calling Destructor                              // ab jaake Destructor do baar call hoga..
    delete b;
    
    }
   

NOTE :  agar hum khud ka Destructor bna lenge toh...jo automatically bani hui hogi...Destructor wo delete hojgi.





/*                                     Static keyword

*--> ye asa data member create karta hai..jo ki class ko belong karta hai..na ki object ko ......matalab ki Static keyword me jab aap data member create karte hai..toh usko access krne k  lie...object bnane ki jaroorat ni hoti.

   initialization of Static keyword : 
   
*--> ye class k bahara initialize hota h.
*--> magar declare class k andar hota h 
   syntax :      datatype class_name ::(scope resolution operator) field name/data member = value
example : 
    int hero:: timetocomplete=5;


 #include <iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;
   static int timetocomplete;                     // here we declare static keyword 
   
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    
    hero(int health,char level){
        this->level=level;
        this->health=health;
    } 
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
  void print(){
      cout<<"health is" <<health<<endl; 
      cout<<"level is" <<level <<endl;
  }
};
int hero :: timetocomplete=5;                           // here ...outside the class it is being initialize.

int main()
{
   cout<<hero::timetocomplete<<endl;                     // this is how..you can print this.
   hero a;
   cout<<a.timetocomplete<<endl;                       // NOTE: hum ase v print karwa sakte hai..mtlb ki object ka use kark..lekin ye recommended nahi hota yrr...islei hum direct hi print karawate hai. because..it doesnot belongs to..object...it belongs to class.

return 0;
}






/*                                      static function

*-->  iske lie v object ki need nahi hoti.
*-->  isme this keyword nahi hota
*-->   static function sirf static member ko hi access kar sakte hai. 


 #include <iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;
   static int timetocomplete;
    int get_health(){
        return health;
    }
    char get_level(){
        return level;
    }
    
 
    hero(int health,char level){
        this->level=level;
        this->health=health;
    } 
    void set_health(int h){
        health=h;
    }
    void set_level(int ch){
        level=ch;
    }
  void print(){
      cout<<"health is" <<health<<endl; 
      cout<<"level is" <<level <<endl;
  }
  static int random(){                                // here we create a static function.
      return timetocomplete;                              // yaha ye sirf..static member ko hi print karwa sakta hai...or kisi ko ni krwa sakta jaise..na health ko na level ko...
  }
};
int hero :: timetocomplete=5;

int main()
{
   cout<<hero::timetocomplete<<endl;
    
return 0;
}






/*                                          Friend function 

   *--> Friend function is not the member of the class instead of that it can acccess the private and protected member of the class.
   *--> friend function is declared in the class with 'friend' keyword.
   *--> friend function can become friend of one or more than one class.
syntax: 
  friend return_type function_name(jo aap is friend k lie bnanan chahte hai)(class_name object){
      // body
  }


example : 
   class A{
       int a,b;
        public:
        void input(){
            cout<<"enter the value"<<endl;
            cin>>a>>b;
        }
       friend void add (A ob);                                // yaha hum declared kr die.
   };
friend void add (A ob){                                    // or class k bahar humne uska function define kar dia
    int c;
    c=ob.a+ob.b;
    cout<<"sum is "<<c<<endl;
}
int main(){
    A kk;
    kk.input();
    add(kk);                                               // yaha humne friend function ko call krwa dia 
    return 0;
}



*/



