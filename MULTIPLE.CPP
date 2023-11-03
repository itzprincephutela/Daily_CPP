#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n -> ";
    cin >> n;
    int m;
    cout << "Enter the value of m -> ";
    cin >> m;

    int p;
    cout << "Enter the value of p -> ";
    cin >> p;
    int q;
    cout << "Enter the value of q -> ";
    cin >> q;  
    if(m==p){
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << "Enter the value of the element at the index[" << i << "][" << j << "] -> ";
                cin >> arr[i][j];
            }
        }
        int brr[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cout << "Enter the value of the element at the index[" << i << "][" << j << "] -> ";
                cin >> brr[i][j];
            }
        }
        int result[n][q];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result[i][j] = 0;
                for(int k=0;k<p;k++){
                    result[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout << result[i][j] << " ";
            }
            cout << endl;
        }        
        
    }  
    else{
        cout << "Cannot multiply";
     }
 }