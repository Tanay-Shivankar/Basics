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
/*Output:
Enter the value for A
48
Enter the value for B
26
Sum of the entered value is 74

Difference of the entered value is 22

Division of the entered value is 1

Product of the entered value is 1248

Modulus of the entered value is 22

difference of a and b will be positive
incremented value is 49

decremented value is 25
*/