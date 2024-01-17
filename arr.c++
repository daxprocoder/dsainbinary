#include<iostream>
#include<math.h>
using namespace std;

// void reverse(int arr[] , int size){
//     int start = 0;
//     int end = start+1;
//     int temp;
//     while(start<end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         end--;
//         start++;
//     }

// }

// int printArray(int arr[] , int size){

//     int i = 0;
//     while(i<size){
//         cout<<arr[i]<<endl;
//         i++;
//     }

//     return 0; 

// }


// int main(){
//     int a[3] = {1,2,3};
//     int n = 3;
//     reverse(a,3);
//     printArray(a,3);
//     // char a[] ="Daksh_Sharma";

//     // int aSize = sizeof(a) / sizeof(char) - 1;
//     // cout<<aSize<<endl;
// }

// int getmax(int num[], int n)
// {
//     int i = 0;
//     int maxi = pow(2,-31);

//     while (i < n)
//     {

//         maxi = max(maxi , num[i]);
//         // if (num[i] > max)
//         // {
//         //     max = num[i];
//         // }
//         i++;
//     }

//     return maxi;
// }

// int main()
// {
//     int size;
//     cin >> size;
//     int i = 0;
//     int num[100];
//     int arr = 0;

//     while (i < size)
//     {
//         cin >> num[i];
//         i++;
//     }


//     cout<<"the max number is "<<getmax(num,size);


    // cout<<arr<<endl;





    // // Print the values after the loop has finished
    // for (int j = 0; j < size; j++)
    // {
    //     cout << num[j] << endl;
    // }
// }





// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size;
//     cin>>size;
    
//     int i = 0;

//     while(i<size){
//         int ans = 0;
//         while(arr[i]!= 0){
//             int bit =  arr[i] & 1;
//             ans = ans + (bit * pow(10,i));
//             arr[i] >> 1;
//             i++;
//         }
//         cout<<arr[i]<<endl;
//         cout<<ans<<endl;
//         i++;
//     }

// }

// int main(){
//     int n;
//     cin>>n;
//     int m = n;
//     int mask =0;

//     if(n==0)
//         return 1;

//     while(m!=0){
//         mask = (mask << 1) |  1;
//         m = m >> 1;
//     }

//     int ans = (-n) & mask;
//     ans--;

//     cout<<ans<<endl;
// }

// code of find the duplicate of the same number 

// int main(){
//     int a[5] = {1,2,3,4,2};
//     for(int i=0;i<5;i++)
//     {
//         for(int j = i+1;j<5;j++)
//         {
//             if(a[j]==a[i])
//             {
//                 cout<<a[i]<<" ";
//             }
//         }
//     }
//     return 0;
// }

// int finddup(int a[] , int size){
//     int i = 0;

//     while (i < size)
//     {
//         int j = i + 1;
//         while (j < size)
//         {
//             if (a[j] == a[i])
//             {
//                 cout << a[i] << endl;
//             }
//             j++;
//         }
//         i++;
//     }

//     return a[i];
// }


// int main(){
//     int a[5] = {1,2,3,3,5};
//     int size;
//     cin>>size;

//     finddup(a ,  size);
    
// }



// fint the unique number from the index

