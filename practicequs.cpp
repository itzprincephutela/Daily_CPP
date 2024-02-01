// fibonacci

// #include<iostream>
// using namespace std;
// int fib(int i){
//     for(int n=0 ; n<=i ; n++){
//     if((i==0) or (i==1)) return i;
//     else return fib(i-1)+fib(i-2);
//     }
// }
// int main (){
// int i;
// cin>>i;
// int res;
// res=fib(i);
// for(int n = 0 ; n < i ; n++){
//     cout<<fib(n)<<endl;
// }
// }

// prime number
//  #include<iostream>
//  using namespace std ;
//  int main (){
//      int n,m, count=0;
//      cin>>n;
//      for(m = 1 ; m<=n ; m++){
//          if(n%m==0)
//          count++;

//     }
//     if(count == 2){
//         cout<<"prime number";
//     }
//     else{
//         cout<<"not prime";
//     }
// }
// palidrom;

// #include<iostream>
// using namespace std ;
// int main (){
//     int n , temp ,rev ,dig=0;
//     cin>>n;
//     temp=n;
//     while(n!=0){
//       rev = n % 10;
//       dig = (dig *10) + rev ;
//       n = n / 10;
//     }
//     if (temp==dig){
//         cout<<"palidrom";
//     }
//     else{
//         cout<<"not palidrom";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i = 0 ; i <= n ;i++ ){
//         cin>>array[i];
//     }

//     for(int i = 0 ; i <= n ;i++ ){
//         cout<<array[i]<<endl;
//     }
// }

/* #include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"PRINT NUMBERv: ";
    cin>>n;
    int array[n];
    for(int i=0; i<=n; i++){
        cin>>array[i];
    }
    for(int i=0; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;

            }
        }
    }
    for(int i=0; i<n ; i++){
        if(array[i]>-1)

        cout<<array[i];

    }
}

 */

// #include<iostream>
// using namespace std ;
// int main (){
//     int array[5]={ 1 , 8 , 7 , 6 , 5 };
//     int max=0;
//     for(int i = 0 ; i< 5 ; i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     cout<<max;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int array[2][3];
//     for(int i =0 ;i<2;i++){
//         for(int j = 0 ; j < 3 ; j++){
//             cin>>array[i][j];
//         }
//     }
//     for(int i =0 ;i<2;i++){
//         for(int j = 0 ; j < 3 ; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n>1)
// {
//     return n * factorial(n-1);
// }
// else {
//     return 1;
// }
// }
// int main (){
//     int f ;
//     cin>>f;
//     factorial(f);
//     cout<<"factorial of f is : "<< factorial
//     (f);
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int count=0;
//     for(int i=0; i<=n ; i++ ){
//         if(n%1==0)

//     count++;

//     }

// if(count == 2 ){
//     cout<<"HELLO";
// }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int arr2[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++){
//             arr2[i][j]=arr[j][i];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++){
//            cout<< arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int arr2[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j = 0 ; j < 3 ; j++){
//             arr2[i][j]=arr[j][i];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j = 3 ; j > 0 ; j--){
//            cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std ;
// int main (){
//     int array[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i =0; i < 3 ; i ++){
        
//         if(i % 2 == 0){
//         for(int  j = 0 ; j < 3 ; j++){
//         cout<<array[i][j]<<" ";
//         }
//         }
//         else{
//             for(int j = 2 ; j > 0 ; j--){
//                 cout<<array[i][j]<<" ";
//             }
//         }
//     }
// }

// #include<iostream>
// using namespace std ;
// class number {
//     int real ;
//     int img;
//     public :
//     number (){

//     }
//     number (int r ,int i){
//         real = r;
//         img = i;
//     }
//     void display (){
//         cout<<real<<img<<endl;
//     }
//     number operator +(  number n        ){
//         number temp;
//         temp.real= real+n.real;
//         temp.img = img +n.img;
//         return temp;
//     }

// };
// int main (){
//         number n1(1 , 2),n2(2,4);
//         number n3=n1+n2;
//         n3.display();
// }

#include<iostream>
using namespace std;

class number{
    int num1;
    int num2;
    public:
    number(){

    }
    number (int i,int j){
        num1=i;
        num2=j;
    }
    void display(){
        cout<<num1<<" "<<num2<<endl;
    }
    number operator *(number n){
        number temp;
        temp.num1=num1*n.num1;
        temp.num2=num2*n.num2;
        return temp;

    }
     number operator +(number n){
        number temp;
        temp.num1=num1+n.num1;
        temp.num2=num2+n.num2;
        return temp;

    }

};
int main (){
    number n1(2,5);
    number n2(2,5);
    number n3,n4;
    n3=n1*n2;
    n4=n1+n2;
    n3.display();
    n4.display();

}