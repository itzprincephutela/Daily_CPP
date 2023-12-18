/*object oriented programming
//why any programming language is called oop language?
//follow four concepts:
* abstraction:we can only provide things that are useful and hide unwanted attributes(properties) to uses and access only to the useful(main)
              attributes or properties.

* encapsulation:we enclose the properties and function and behaviour we have to define in a unit called class.(blueprint)
                firstly we have to make a blueprint then we can make infinite object.

* polymorphism:we can make different function with same names.
               eg.: one function is behaving differently at different condition or situation. add(2,3); add(2.3,3.6);
               return type and argument type collectively called signature.

* inheritance:inheritance: *pass property from one class to another class
             *base class to derived class
             *relation based

single inheritence: derived class inherit from a single base class.
    simplest form of inheritance.

class base{
    base class members
};
class derived : public base {
    derived class members
};


multiple inheritence: derived class inherit from a multiple base class.

class base1{
    base class members
};
class base2{
    base class members
};
class derived : public base1,public base2 {
    derived class members
};

multilevel inheritence: a class derives from another derived  class,forming a chain of inheritance

heriarical inheritance:
class grandparent{
    grandparent class members
};
class parent : public grandparent{
    parent class members
};
class child : public parent {
    derived class members
};


hybrid inheritance: mix of two types of inheritance

an object has two things
..attributes(property): length,colour,model etc
..behaviour(function):uses function to get behaviour(shifting gears in a car)


pen(object)
properties:          function/method:
attributes:           behaviour:
* length              * open()
* diameter            * write()
* colour              * close()
* brand

class Pen
{ //body

   float length;
   float diameter;
   string colour;
   string brand;

   void open(){

   }
   void write(){

   }
   void close(){

   }

}

//homework:
book:
properties
* title
* author
* cost

behaviour
* open
* read
* bookmark
* close

class book
{ //body

   string title;
   string author;
   float cost;

   void open(){

   }
   void read(){

   }
   int bookmark(){

   }
   void close(){

   }

}
