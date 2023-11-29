//inline functions
//keyword inline
// advantage: * where we are calling the function the function is subsituted there
//* and time is saved as overhead is not moving

#include<iostream>
using namespace std;

inline int cube(int c){ //that is why written in definition
int ans;
ans=c*c*c;
return ans;
}

int main(){
int c;
cin>>c;
int ans;
ans=cube(c);
cout<<ans;
return 0;}
