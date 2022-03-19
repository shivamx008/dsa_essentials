#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
//in bit-manip we use techniques to modify the data at there binary representation
// So every prog lang provides us woth bitwise operators which allows us to operate on the binary representation of the data that we have

//the different operators are
/*and &
or |
xor ^
one's compliment ~
left shift <<
right shift >>*/

//& , just like ANd or intersection.
int i=1&0;
cout<<" "<<i; //0

i=0&1;
cout<<" "<<i; //0

i=1&1;
cout<<" "<<i; //1

//How to use this
i=5&7; // 101 & 111 = 101
cout<<" "<<i;

//| , just like OR
//1|0=1, 1|1=1, 0|1=0, 0|0=0
i=5|7;
cout<<" "<<i; //7
i=5|8; //101 | 1000 = 1101
cout<<" "<<i; //13

//^ , XOR
//if same then zero, 1^1=0, 0^0=0, rest 1

i=5^7;
cout<<" "<<i; //101 ^111 = 010
i=5^8;
cout<<" "<<i; // 101 ^ 1000= 1101

//~ not, ~0=1, flips the bits

cout<<" not of 13 " <<~i;//-14 why because it changed the sign bit as well, and when a number is nege, it is stored in a 2's complement form, to find the magnitude of a 2's complement just flip the bits and add one
//while a not (~) on zero bit will lead to one

//left shift << (like cout)
//eg 5 << 2 , in 00101 we will let go of the leftmost 2 bits and add 2 o bits at the end, so the number is now 20, basically 2^2(5)
//a<<b , a*2^b

cout<<" "<< (i<<1);//26, 13*2

//right shift >>
// 10 >> 1, 1010 will lose the rightmost 0 and become 0101 , which is 5, so a>>b : a/(2^b)

cout<<" "  <<(10>>1);//5





}