//operator overloading is a function with return type
#include<iostream>
#include<string>
using namespace std;
class mystring{
    private:
            string str;
    public:
            mystring(const string& s):str(s){}
    
    mystring operator /(const mystring other){

        string res=str+other.str;
        return mystring(res);
    }

    void display(){
        cout<<str<<endl;
    }
};

int main(){
    mystring str1("Hello ");
    mystring str2("People");
    mystring result=str1/str2;
    result.display();
    return 0;
}