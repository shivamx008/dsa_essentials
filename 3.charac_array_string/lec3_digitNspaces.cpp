#include<iostream>
using namespace std;

//given a sentence we have to count the no: of alphabets, digits and spaces in the sentence, for char inbuilt functions refer: https://www.cplusplus.com/reference/cctype/
int main()
{
    int digits=0,whitte=0;//we can store the count here
    //read one by one and then count
    cout<<"enter the sentence: \n";
    char ch;
    ch=cin.get();
    while(ch!='\n')
    {
        if(isdigit(ch))// or ch>='0' and ch<='9'
            digits++;
        else if(isspace(ch))// or ch==' ' || ch=='\t'
            whitte++;
        ch=cin.get();
    }
    cout<<"\nthe number of digits: "<<digits<<", number of spaces: "<<whitte;

    //we can also store and read
}