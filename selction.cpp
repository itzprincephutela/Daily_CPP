#include<iostream>
#include<vector>
using namespace std;
void print(vector < int > &v){
    for( int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }


}
void selectionsort( vector < int  > &v){
    int n = v.size();
     
    for(int i = 0 ; i < n-1 ; i++){
        int min = i; //ye smallest element hao
        for(int j = i + 1 ; j < n  ; j ++){
                if(v[j]< v[min]){
                    min = j;
                }
        }
        swap(v[i],v[min]); 
    }
}
int main(){
    vector <int>  v = { 5 ,4, 3 , 2 ,1};
    selectionsort(v);
    print(v);
}