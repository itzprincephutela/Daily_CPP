//dynamic memory allocation
//it is used at run time
// new operator,we can allocate dynamic memory using this operator. we have to deallocate the memory after using using delete.
//allocation of memory of objects at the time of their construction is known as dynamic memory allocation of objects.

#include<iostream>
using namespace std;

int main(){
    int *ptr=new int(12);//default value
    //*ptr=12;
    cout<<*ptr<<endl;
    delete ptr; //deallocation
    //cout<<*ptr; garbage value as no allocation now
    return 0;
}
//exception name: bad allocation exception
//if there in no memory for allocation (nothrow)there will be no exception message
