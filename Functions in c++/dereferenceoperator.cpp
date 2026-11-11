#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int *ptr=&a;
    cout<<"The value before changing is="<<a<<endl;
    
    /*The ptr variable has the value of the address of the variable a
   whereas the variable *ptr has the actual value i.e 20 assigned to the variable a */

    cout<<"The value of ptr is="<<ptr<<endl;
    cout<<"The value of ptr with the dereference operator is="<<*ptr<<endl;
    *ptr=18;
    cout<<"The new value of a is="<<a<<endl;
    return 0;
    

}