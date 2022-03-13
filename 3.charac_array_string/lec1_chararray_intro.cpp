#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //creating character array, there are some differences in the behaviour of character array.
char a[1000];
char a_wrong[]={'a','b','c','y','u'};// this is not the correct way because if we iterate over this then it will go till the last printing garbage before hitting the null character
char a_right[100]={'a','b','c','r','\0'};//always terminate with a null char
char a1[100]="abc"; // this method automatically adds a  null charracter

    //input and output

//we can run a loop like we do for a int array but there is this 
cout<<a_right<<"\n";
for(int i=0;i<100;i++)// gives some garbage after 'abcyu'
cout<<a_wrong[i];
cout<<"  "<<a_wrong<<"\n";// same here gives some garbage after 'abcyu'

    //the length and size functions
cout<<"\na right len: "<<strlen(a_right);//strlen gives the number of visible characters i.e 4, while there is null as well so total 5 characters 

cout<<"\na right size:"<<sizeof(a_right);//the actual memory blocks allocated i.e 100

    //input
char b[100];
cin>>b;// this input method delimts till a space is encountered
cout<<"\n"<<b;




}