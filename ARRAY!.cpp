// #include<iostream>
// using namespace std;
// int main (){
//     int array[]={1,2,3,4,5};
//     cout<<sizeof(array)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int array[]={1,2,3,4,5};
//     cout<<sizeof(array)<<endl;
//     cout<<sizeof(array)/sizeof(array[0])<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int array[]={1,2,3,4,5};
//     int size= sizeof(array)/sizeof(array[0]);
//        for (int inx=0;inx<size;inx++){
//         cout<<array[inx]<<endl;
// //        }
// return 0;
// }

#include<iostream>
using namespace std;
int main (){
    char vowels[5];
    for (int index =0 ; index<5 ; index++){
        cin>>vowels[index];
    }
    for (int index =0 ; index<5 ; index++){
        cout<<vowels[index]<<endl;
    }
}