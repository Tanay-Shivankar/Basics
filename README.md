# Basics
## 1. VS Code Basics
### Aim
To download and install VS Code and make a hello world program.
### Apparatus
VS Code
### Theory
VS Code is a free, open-source code editor developed by Microsoft.We are using it to learn C++.


### Code
```
//Name:Tanay Shivankar
//Prn:23070123163
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World";
return 0;
}
```
## Output
![image](https://github.com/user-attachments/assets/1751a742-6d63-42f0-8200-d4ec782d0d2d)

### Conclusion
downloaded and installed VS Code and performed simple program.
## 2. Data Types in C++
### Aim
To study and implement C++ program structures.
### Apparatus
VS Code
### Theory
In C++, data types are used to define the type of data that a variable can hold.Some of them are
int-integer type
char-character type
float-single precision floating type. etc.
### Code
```
//Name:Tanay Shivankar
//Prn:23070123163
#include <iostream>
using namespace std;
int main() {
     float a1;
     int a2;
      char a3;
      Double a4;
      long int a5;
      short int a6;
    

    cout << "Size of a1: " << sizeof(a1) << "byte"<< endl;
    cout << "Size of a2: " << sizeof(a2) << "byte"<< endl;
    cout << "Size of a3: " << sizeof(a3) << "byte"<< endl;
    cout << "Size of a4: " << sizeof(a4) << "byte"<< endl;
    cout << "Size of a5: " << sizeof(a5) << "byte"<< endl;
    cout << "Size of a6: " << sizeof(a6) << "byte"<< endl;
    
    return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/affdea5a-cec8-4243-8c7e-273d1c4645e2)

### Conclusion
We learnt about different data types in C++
## 3. C++ Operators
### Aim 
To study and implement operators in C++.
### Apparatus
VS Code
### Theory
There are many types of operators in C++. some of them are:-
- Arithemetic operators
- Logical operators
- comparison operators
  
Arithemetic operators include addition,subtraction,multiplication,division and modulus.

Logical operators are used to determine the logic between variables or values.

Comparison operators are used to compare two values or variables.They either return true or false based on the result of the comparison.
### Code
```
//Name:Tanay Shivankar
//Prn:23070123163
#include<iostream>
using namespace std;
int main(){
    int a,b,c,add,sub,a1,a2,a3,a4,a5,a6,a7;
    int div,prod,mod;

    cout<<"Enter the value for A"<<endl;
    cin>>a;
    cout<<"Enter the value for B"<<endl;
    cin>>b;
     
    //Arithemetic Operators
     add=a+b;   
     sub=a-b; 
     div=a/b;   
     prod=a*b;  
     mod=a%b;     
    cout<<"Sum of the entered value is "<<add<<endl<<endl;        
    cout<<"Difference of the entered value is "<<sub<<endl<<endl;
    cout<<"Division of the entered value is "<<div<<endl<<endl;
    cout<<"Product of the entered value is "<<prod<<endl<<endl;
    cout<<"Modulus of the entered value is "<<mod<<endl<<endl;
    //Comparison Operators
    {
     if (a<b){
        cout<<"difference of a and b will be negetive"<<endl;
     }
     else if (a>b){
         cout<<"difference of a and b will be positive"<<endl;
     }
     else if (a==b){
         cout<<"difference of a and b will equal to zero"<<endl;
     }
    }
    //logical and arithemtic operators
    {
        if (a!=0 && a<50){
         a++;
         cout<<"incremented value is "<<a<<endl<<endl;
        }
        
    }
    {
     if (b>20 || b<10){
            b--;
            cout<<"decremented value is "<<b<<endl<<endl;
        }
    }



     
    return 0;
}
```
### Output
![image](https://github.com/user-attachments/assets/cd76aaa8-cf22-44c1-a733-df3fdd17a683)

### Conclusion 
Learnt how to use arithimetic,comparison and logical operators in C++.
## 4. Bitwise Operators
### Aim
To study and implement C++ Bitwise operators.
### Apparatus
VS Code
### Theory
Bitwise operators in C++ are used to perform operations on individual bits of integer data types. These operators are crucial for low-level programming, such as system programming, embedded systems, and optimizing certain algorithms. 
### Conclusion 
Learnt the use of bitwise operators.
