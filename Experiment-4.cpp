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
/*Output:
Enter the value for A
10
Enter the value for B
5
AND of the entered value is 0

OR of the entered value is 15

XOR of the entered value is 15

NOT of B is -6

LEFT SHIFT of A by 2 is 40

RIGHT SHIFT of A by 2 is 2
*/