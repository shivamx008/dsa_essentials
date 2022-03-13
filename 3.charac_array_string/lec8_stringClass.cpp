#include<bits/stdc++.h>
using namespace std;

int main()
{
// we can represent string in two ways in cpp, char array, and string clas #include<string>, c style char array offer less flexibility in terms of size and etc
// So many a times we use strings from string class, it provides dynamic arrays and has a lot inbuilt functions and constructors

//declaration and initialization
string declaree;

string s="hello world";

string s_cons("heeelllooo woorld with a constructor");

//input

cin>>s;//terminates at space or newline

//more powerful option getline

getline(cin,s_cons);//terminates at a next line

getline(cin,s,';');

//for copy
declaree=s;

//copy function for copying into a char array, length for len, swap, compare function like strcmp


}