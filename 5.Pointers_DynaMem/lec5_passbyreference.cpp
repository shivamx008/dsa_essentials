#include<bits/stdc++.h>
using namespace std;

//pass by reference

//first we did pass by copy and we are changing the duplicate
//void applTax(int income)

void applTax(int &income)//  now we are passing the reference to the variables
{
    income = 0.9*income;
}

int main(){
    int income;
    
    cin>>income;
    applTax(income);
    cout<<income<<"\n";// this changed
}
// arrays are passed by reference by default

