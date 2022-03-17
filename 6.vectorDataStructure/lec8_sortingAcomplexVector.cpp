#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

bool compare(pair<string,vector<int>> s1,pair<string,vector<int>>s2)
{
    int sum1=0,sum2=0;
    for(auto i:s1.second){
        sum1+=i;
    }
     for(auto i:s2.second){
        sum2+=i;
    }
    return sum1>sum2;//because we want a decsending order
}

int main(){
    //suppose you have a list of students and you want to create a rank list based on their marks 

    vector<pair<string,vector<int>>> student_marks={
        {"rohan",{10,20,11}},
        {"Bob",{10,21,3}},
        {"jane",{4,5,6}},
        {"josephine",{10,13,20}} 
    };
    //so we a have a sort function, it will sort by default according to the first parameter
    sort(student_marks.begin(),student_marks.end(),compare);

    for(auto s: student_marks){
        cout<<s.first<<"\n";   
    }
}