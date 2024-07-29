#include <iostream>
using namespace std;
int main() {
     int a1;
     float a2;
      char a3;
      short int a4;
      long int a5;
      double a6;
    

    cout << "Size of a1: " << sizeof(a1) << "byte"<< endl;
    cout << "Size of a2: " << sizeof(a2) << "byte"<< endl;
    cout << "Size of a3: " << sizeof(a3) << "byte"<< endl;
    cout << "Size of a4: " << sizeof(a4) << "byte"<< endl;
    cout << "Size of a5: " << sizeof(a5) << "byte"<< endl;
    cout << "Size of a6: " << sizeof(a6) << "byte"<< endl;
    
    return 0;
}
/*Output:
Size of a1: 4byte
Size of a2: 4byte
Size of a3: 1byte
Size of a4: 2byte
Size of a5: 4byte
Size of a6: 8byte*/