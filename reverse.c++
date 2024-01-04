#include<iostream>
using namespace std;


int main(){

    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int); 
    int s = 0 ;
    int e = n -1;

    while(e>=0){

        cout<<arr[e]<<endl;
        e--;
    }

    

}