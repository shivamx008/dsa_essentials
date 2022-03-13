#include<bits/stdc++.h>
using namespace std;

// we can read an entire sentence with cin getline 

int main()
{
    char sentence[1000];
    // in the lec2 we entered a para but we didn't check for length exceding the allocated space
    // getline handles this as well,and adds a null char at the end where newline was there
    cin.getline(sentence,1000);// where to store and till how many characters
    //pressing enter transfers the input to the buffer and getline takes input from there
    cout<<"\n"<<sentence;

    //read a para , which ends at a fullstop

    char para[1000];
    cin.getline(para,1000,'.');//bydefault the delimter is \n
    cout<<"\n"<<"the para: "<<para; 
}