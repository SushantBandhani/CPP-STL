#include<iostream>
#include<array>
#include<set>  // TO USE SET CLASS WE NEED TO INCLUDE THIS LIBRARY
using namespace std;

class students{
    private:
    string name;
    int age;
    public:
    void setstudents(string s, int a){
        name =s;
        age=a;
    }
    void showstudents(){
        cout<<name<<" " ;
        cout<<age<<endl;
    }
};






int main()
{

    //DECLARATTION AND INITIALIZATION OF SET IN SAME LINE

    set<int>st={1,5,7,8,5,5,5,5};  //set will only have unique element in set
// TO ACCESS THE ELEMENTS OF SET
cout<<*st.begin()<<" ";  //it cant be accessed like this st[0]

// cout<<(*st.begin()+2)<<" ";  //st.begin is an iterator that is pointing to the begining of set and *st.begin()gives the value..but on doing +2 it is adding on the same value and not giving us the +2th index location

// cout<<*st.rbegin()<<" ";
// cout<<*st.rend()<<" "<<endl;  // giving us garbage value

cout<<endl;
for(auto it:st){
    cout<<"st1 : "<<it<<endl;    //PRINTING THE SET
}
cout<<endl;
//GIVEN N ELEMENTS TELL ME THE UNIQUE ELEMENTS
array<int,10>arr={1,2,2,3,3,4,4,5,5,6};
set<int>st1;
int n=arr.size();
for(int i=0;i<n;i++){
int x=arr[i];
st1.insert(x);  //TO INSERT THE ELEMENTS IN ARRAY
}

cout<<st1.size()<<endl;//RETURNS THE SIZE OF SET
//printing the set 
for(auto it:st1){
    cout<<it<<" ";    //PRINTING THE SET
}
cout<<endl;

//printing the set second way
for(auto it=st1.begin();it!=st1.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
// TO ERASE FROM THE SET
set<int>st2={1,2,3,4,5,6,7,8,9};
st2.erase(st2.begin());  //takes log n time ..internally set follows BST
// 1 is deletes from set
cout<<"size of st2 is " <<st2.size()<<endl; //SIZE AFTER ERASING THE ELEMENT 
// st.erase(st2.begin(),st2.begin()+1); // not working 


// st2.erase(st2.begin(),st2.end());  //it will erase all the set makes st2 empty



// FOR ERASING A RANGE OF ELEMENTS IN SET

set<int>::iterator startyo=st2.begin();
startyo++;
startyo++;
set<int>::iterator endyo=st2.end();
endyo--;
endyo--;

st2.erase(startyo,endyo);
for(auto it:st2){
    cout<<"st2 : "<<it<<endl;  //it has deleted 4,5,6,7
}
cout<<"\n";
//  TO ERASE AN ELEMENT BY GIVING KEY
//st2.erase(key);
//eg: st2.erase(6);

// COPY ONE SET TO ABNOTHER SET

set<int>st3(st2.begin(),st2.end());



for(auto it:st3){
    cout<<"st3 : "<<it<<endl;  //it has deleted 4,5,6,7
}



//FIND FUNCTION RETURN THE ITERATOR POINTING TO THE ELEMENT 

auto it=st3.find(8); // if element doesnt exist yen it will come as st.end(means right after end element)

cout<<*it;  // will print 8 it is iterator that is pointing to location of 8



//TO INSERT IN SET YOU CAN USE EMPLACE ALSO ..IT IS LITTLE BIT FASTER THAN INSERT FUNCTION OF SET

set<int>st4;
st4.emplace(1);  //1 will be inserted in set

cout<<" ";
//  to check if empty or not ..returns 1 if empty otherwise returns 0
cout<<st4.empty(); // to check if set is empty or not



//NESTED SETS


// ******** insertion in set of set first way **********
set<set<int>> st6;

st6.insert({1,2,3,4,5});
cout<<endl<<st6.size()<<" ";  //its size will come as one

st6.insert({6,7,8,9,10,11,12,13,14,15});
cout<<st6.size()<<endl;      // now the size of set is 2 
///
for(set<int> x :st6){
    for(int y :x){
        cout<<"st6 : "<<y<<endl;
    }
}
    cout<<endl;

//SECOND METHOD TO INSERT AND ACCESS

// set<set<int>> st7={{10,20,30,40,50},{60,70,80,90,100},{110,120,130,140,150,160,170,180}};


// for(set<int> x :st7){
//     for(int y :x){
//         cout<<"st7 : "<<y<<endl;
//     }
//     cout<<endl;
// }

// cout<<"size of st7 is : "<<st7.size();



// //THIRD METHOD TO ACCESS AND INSERT

// set<set<int>>st8;
// int s;
// int t;
// cin>>s>>t;
// for(int i=0;i<s;i++){
//     set<int> temp;
//     for(int j=0;j<t;j++){
//         int val;
//         cin>>val;
//         temp.emplace(val);

//     }
//     st8.emplace(temp);
// }

// //printing of above set

// for(set<int> x :st8){
//     for(int y :x){
//         cout<<"st8 : "<<y<<endl;
//     }
//     // cout<<endl;
// }


//u can also declare set like this
students s1,s2,s3;
set<students>st9; 

s1.setstudents("Siddharth",1);
s2.setstudents("Sushant",2);
s3.setstudents("Manas",3);
// st9.insert(s1);  // how to insert it???????????????????????????????????


}
