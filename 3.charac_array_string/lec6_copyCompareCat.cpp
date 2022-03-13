#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Impportant note
    /*but if the string is of class std::string then these functions will not work , read https://www.cplusplus.com/reference/string/string/ */

    //lets see 4 most used in built functions for c style strings
    
    //strlen

    char a[1000]="appplee";//7 char
    char b[1000];

    cout<<strlen(a)<<"\n";
    //o/p: 7, but stores 8 as there is a null char

    //strcpy : to destination, from source

    strcpy(b,a);
    cout<<"B: "<<b<<"\n";// takes linear time O(n)

    //strcmp compares lexicographically

    cout<<strcmp(a,b)<<"\n";// goes one by one subtracting ascii values of a'char with b'char
    //o/p: 0 as they are same,  

    char webb[]="wwww";
    char dns[]="1.1.1.1";

    cout<<strcmp(webb,dns)<<"\n";// o/p: 1 , because ascii of w is greater than 1 , it yielded a postive number after sub so '1', conversly -1 if the second string's char has a greater value upon comparision

    //concatenation

    char service[]="Cloudflare ";

    strcpy(b,strcat(service,dns));

    cout<<b<<"\n";
    cout<<strcmp(b,a)<<"\n";

    cout<<strcat(service,dns)<<"\n";

    // strcpy(b,strcat(service,dns));

    // cout<<b<<"\n";
    // cout<<strcmp(b,a)<<"\n";
    
    // Impportant note
    /*but if the string is of class std::string then these functions will not work , read https://www.cplusplus.com/reference/string/string/ */

    
}