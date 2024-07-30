# Basics
## 1. VS Code Basics
### Aim
To download and install VS Code and make a hello world program.
### Apparatus
VS Code
### Theory
VS Code is a free, open-source code editor developed by Microsoft.We are using it to learn C++.VS Code is designed to be highly extensible and customizable. The editor provides a rich API for extension developers, enabling them to create plugins that add new features, languages, themes, debuggers, and more. This modular approach allows users to tailor the editor to their specific needs and preferences.
### Downloading and Installing Visual Studio Code
**Visual Studio Code (VS Code)** is a lightweight, extensible, open-source code editor developed by Microsoft. It supports various programming languages, including C++, and provides features like IntelliSense, debugging, and Git integration.

#### Steps to Download and Install VS Code:
1. **Visit the Official Website**: Go to the [Visual Studio Code website](https://code.visualstudio.com/).
2. **Download the Installer**: Select the appropriate installer for your operating system (Windows, macOS, or Linux).
3. **Run the Installer**: Follow the on-screen instructions to install VS Code.
4. **Launch VS Code**: Open the installed application to start coding.
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
These types come in signed and unsigned variants, enabling both positive and negative values, or solely non-negative values, respectively.
Each type of data takes up different amount of bytes.
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
Bitwise operators in C++ operate on the binary representation of integers. They include the bitwise AND (`&`), which returns a bit set to 1 if both corresponding bits of the operands are 1; the bitwise OR (`|`), which returns a bit set to 1 if at least one of the corresponding bits is 1; the bitwise XOR (`^`), which returns a bit set to 1 if only one of the corresponding bits is 1; the bitwise NOT (`~`), which inverts all bits of the operand; the left shift (`<<`), which shifts bits to the left and fills with zeros; and the right shift (`>>`), which shifts bits to the right. These operators are used for low-level programming tasks, such as setting, clearing, and toggling specific bits, and for performing fast arithmetic operations. Understanding bitwise operators is essential for tasks that require direct manipulation of data at the bit level, such as system programming, graphics, and encryption.
### Code
```
#include<iostream>
using namespace std;
int main(){
    int a,b,a1,a2,a3,a4,a5,a6;

    cout<<"Enter the value for A"<<endl;
    cin>>a;
    cout<<"Enter the value for B"<<endl;
    cin>>b;
    a1=a&b;   
    a2=a|b;    
    a3=a^b;   
    a4=~b;     
    a5=a<<2;   
    a6=a>>2; 
    cout<<"AND of the entered value is "<<a1<<endl<<endl;
    cout<<"OR of the entered value is "<<a2<<endl<<endl;
    cout<<"XOR of the entered value is "<<a3<<endl<<endl;
    cout<<"NOT of B is "<<a4<<endl<<endl;
    cout<<"LEFT SHIFT of A by 2 is "<<a5<<endl<<endl;
    cout<<"RIGHT SHIFT of A by 2 is "<<a6<<endl<<endl;
    return 0;
}
```
### Conclusion 
Learnt the use of bitwise operators.
