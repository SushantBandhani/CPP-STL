#include<bits/stdc++.h>
using namespace std;
#define M 32
int main(){
    // A bitset(container) is an array of bool but each boolean value is not stored seperately
    //instead bitset optimizes the space such that each bool takes 1 bit of space only
    //so space taken by bitset bs is less than bool bs[N] and vector bs[N]
    //limitation of bitset is that ,N should be known at compile time i.e a constant 
    //this  limitation is not with vector and dynamic array..


// Initialization techniques of bitset
bitset<5>bt;
cout<<bt<<"\n";  //00000
cin>>bt;
cout<<"bt : "<<bt<<"\n";  

bitset<5>bt1;
bt1=11111;
cout<<"bt1 : "<<bt1<<"\n";

bitset<5>bt2(10);
cout<<"bt2 : "<<bt2<<"\n";  //01010(binary form of 10)

bitset<M>bt3(20);
cout<<"bt3 : "<<bt3<<"\n";             //00000000000000000000000000010100

bitset<M>bt4(string("1100"));
cout<<"bt4 : "<<bt4<<"\n";         //00000000000000000000000000001100   

cout<<"bt3[3] : "<< bt3[3]<<"\n"; 

bitset<3>bt5(7);  

//all()- returns true (1) if all bits are set(1)
cout<<"all function use : "<<bt5.all()<<"\n";  


//any()- returns true(1) if any of bit is set(1)
cout<<"any function example : "<<bt4.any()<<"\n";

//count- it is used to count the number of set bits present in it..

cout<<"count of setbit(1) in bt3 is : "<<bt3.count()<<"\n";

//flip()- it flips the bit

bt5.flip(0);
cout<<"bt5 after flipping the 0th bit : "<<bt5<<"\n";


bt5.flip();
cout<<"To flip all the bits in bitset : "<<bt5<<"\n";


//none - if none of the bits in bitset is 1 then it will return true else return false

bitset<5>bt6(0);
cout<<"none use on bt6 : "<<bt6.none()<<"\n";

//size- gives u the number of bits present in bitset

cout<<"Total number of bits present in bt6 is : "<<bt6.size()<<"\n";

//question - return total number of unset bits in bitset bt3

cout<<"Total number of unset bits present in bitset is : "<<bt3.size()-bt3.count()<<"\n";

//setting particular index
bt6[1]=1;
bt6[2]=!bt6[1];
cout<<bt6<<"\n";

//set -it is used to set some bit

bitset<10>bt7;
bt7.set();  //entire positions of bitset will be set to 1
bt7.set(2); // it will set the 2 index bit as 1
bt7.set(3,0);  // it wil set 3 index bit as 0
cout<<"bt7 after performing set operation : "<<bt7<<"\n";

//reset- it is used to reset the bit

bt7.reset(2);
// bt.reset(); // it will reset the entire bt7 to 0
cout<<"bt7 after performing reset  operation : "<<bt7<<"\n";

//test()- it is used to find particular index is set or not

cout<<"bit at index 6 of bt7 is : "<<bt7.test(6)<<"\n";
cout<<"checking every bit through test() of bt7: ";
for(int i=0;i<10;i++){
    cout<<bt7.test(i)<<" ";
}
cout<<"\n";

if(!bt7.any()){
    cout<<"It has no set bits ";
}

//converting decimal number tobinary using bitset

int num=99;
cout<<"num 99 in bits form is : "<<bitset<8>(num)<<"\n";

//We can also perform logivcal operations in bitset
cout<<(bt==bt2)<<"\n";
cout<<(bt^bt2)<<"\n";  //size of bt and bt2 is same
cout<<(bt3^bt4)<<"\n";
// cout<<(bt==bt4);  // there sizes are different so cant be compparable like this


//we can also perform right and left shift operator in bitset

bt2<<=2;// shift the bits in bt2 by left 
cout<<"bt2 after performing left shift : "<<bt2<<"\n";
bt2>>=1; //shift the bits in bt2 in right by 1
cout<<"bt2 after performing right shift is : "<<bt2<<"\n";

}