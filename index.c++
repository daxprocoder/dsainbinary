#include <iostream>
using namespace std;


int main(){

    char ch []= "allah hu akbar";//pointer or you can do dis char[] ch;


    // while( ch != '\0') {//we only want to iterate till the last word. (len - 1)
    //     printf("\n%s", ch);
    //     ch = ch
    // }

    /*
        ok so, the size of a char in memory is 1 byte 
        when we take use the sizeof method , it return the size of the array or chars in memory
        i.e: char* ch = "hello"
        cout << sizeof(*ch) << "is the size of my string(char*)"
        lets say the size is 5 
    */
    cout << sizeof(*ch) << " is the size of my string(char*)\n";
    cout << sizeof(*ch / sizeof(ch[0])) << endl;

    for (size_t i = 0; i < sizeof(*ch / sizeof(ch[0]))+2; i++)
    {

        // cout << int(ch[i]) << " ";
        printf("%d ",ch[i]);
    }
    



}