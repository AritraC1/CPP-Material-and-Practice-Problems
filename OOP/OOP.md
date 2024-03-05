# OOP - OBJECT ORIENTED PROGRAMMING

For Reference:
[OOP Introduction in CPP](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/)

## Introduction

### Definition
Object-oriented programming – As the name suggests uses objects in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

There are 2 building blocks of OOPs:
#### 1. Class
- The building block of C++ that leads to Object-Oriented programming is a Class.
- It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
- A class is like a blueprint for an object.

#### 2. Objects
- An Object is an identifiable entity with some characteristics and behavior.
- An Object is an instance of a Class. 
- When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

## Access Modifiers

For Referrence:
[Access Modifiers in OOP in CPP](https://www.geeksforgeeks.org/access-modifiers-in-c/)

Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.

There are 3 types of access modifiers available in C++: 

#### 1. Public
- All the class members declared under the public specifier will be available to everyone.
- The data members and member functions declared as public can be accessed by other classes and functions too.
- The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 

##### For Example:

```
#include<iostream>
using namespace std;
 
// class definition
class Circle
{
    public: 
        double radius;
         
        double  compute_area()
        {
            return 3.14*radius*radius;
        }
     
};
 
// main function
int main()
{
    Circle obj;
     
    // accessing public datamember outside class
    obj.radius = 5.5;
     
    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area();
    return 0;
}
```

##### Output -

```
Radius is: 5.5
Area is: 94.985
```

###### Note: In the above program, the data member radius is declared as public so it could be accessed outside the class and thus was allowed access from inside main().

#### 2. Private (By default)
- The class members declared as private can be accessed only by the member functions inside the class.
- They are not allowed to be accessed directly by any object or function outside the class.
- Only the member functions or the friend functions are allowed to access the private data members of the class. 

##### For Example:

```
#include<iostream>
using namespace std;
 
class Circle
{   
    // private data member
    private: 
        double radius;
      
    // public member function    
    public:    
        double  compute_area()
        {   // member function can access private 
            // data member radius
            return 3.14*radius*radius;
        }
     
};
 
// main function
int main()
{   
    // creating object of the class
    Circle obj;
     
    // trying to access private data member
    // directly outside the class
    obj.radius = 1.5;
     
    cout << "Area is:" << obj.compute_area();
    return 0;
}
```

##### Output - 

```
 In function 'int main()':
11:16: error: 'double Circle::radius' is private
         double radius;
                ^
31:9: error: within this context
     obj.radius = 1.5;
         ^
```

###### Note: The output of the above program is a compile time error because we are not allowed to access the private data members of a class directly from outside the class. Yet an access to obj.radius is attempted, but radius being a private data member, we obtained the above compilation error

#### To access the PRIVATE MEMBERS
To access a private attribute, use public "getter" and "setter" methods.

For Example:

```
#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
```

##### Output - 

```
50000
```

#### 3. Protected
- The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class.
- The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 


## Memory Allocation

For Referrence:
[Memory Allocation in OOP in CPP](https://www.javatpoint.com/dynamic-memory-allocation-in-cpp)

Reserving or providing space to a variable is called memory allocation.

For storing the data, memory allocation can be done in two ways -

#### Static allocation or compile-time allocation - 
Static memory allocation means providing space for the variable. The size and data type of the variable is known, and it remains constant throughout the program.

#### Dynamic allocation or run-time allocation - 
The allocation in which memory is allocated dynamically. In this type of allocation, the exact size of the variable is not known in advance. Pointers play a major role in dynamic memory allocation.

## Constructors

For Referrence:
[Constructors in OOP in CPP](https://www.geeksforgeeks.org/constructors-c/)

### Definition
Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally.

### Characteristics of constructor
- The name of the constructor is same as its class name.
- Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
- Constructors do not return values; hence they do not have a return type.
- A constructor gets called automatically when we create the object of the class.
- Constructors can be overloaded.
- Constructor can not be declared virtual.

### Types of constructor

1. Default constructor
Default constructor is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.

2. Parameterized constructor
These arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function.

3. Overloaded constructor


4. Constructor with default value


5. Copy constructor
A copy constructor is a member function that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor

6. Inline constructor

