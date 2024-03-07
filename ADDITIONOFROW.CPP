#include<iostream>
using namespace std;
void printsum(int array[][3],int row ,int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=array[col][row];
        }
        cout<<sum<<" ";
}
    }
int main (){
    int array[3][3];
    int sum=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>array[row][col];

        }
    }
//     for(int row=0;row<3;row++){
//         int sum=0;
//         for(int col=0;col<3;col++){
//             sum+=array[row][col];

        
//     }

// }
printsum(array,3,3);
}