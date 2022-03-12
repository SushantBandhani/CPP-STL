#include<iostream>
#include<array>
using namespace std;

class students{
private:
string name;
int age;
public:
void setStudents(string s,int a){
    name=s;
    age=a;
}
void showStudents()
{
    cout<<name<<" ";
    cout<<age;
}
};



int main()
{
    pair<string ,float>p1;
    p1=make_pair("Rahul",16.5);
cout<<p1.first<<" ";
cout<<p1.second<<endl;


pair<string,string>p2;
p2=make_pair("India","New delhi");
cout<<p2.first<<" ";
cout<<p2.second;



 pair<string ,float>p3;
    p3=make_pair("Rahul",16.5);
cout<<p3.first<<" ";
cout<<p3.second<<endl;





pair<int,students> p4;


students s1;
s1.setStudents("Aishwarya",19);
p4=make_pair(1,s1);
cout<<p4.first<<" ";
students s2=p4.second;  //because here p4.second will return and object of that class so thats why
s2.showStudents();

 cout<<(p1==p3)<<endl;//return true because both set are of same type and have same pair of values in them;



//HOW TO MAKE ARRAY OF PAIRS --INITIALIZATION AND DECLARATION AT SAME LINE

array<pair<int,string>,3> arr={make_pair(1,"sushant"),make_pair(2,"bandhani")};

cout<<arr[0].first<<" "<<arr[0].second<<endl;
cout<<arr[1].first<<" "<<arr[1].second<<endl;
arr[2]=make_pair(3,"sonam");
cout<<arr[2].first<<" "<<arr[2].second;

array<pair<int,string>,5>arr2;

// for(int i=0;i<5;i++){
//     int x;
//     string str;
//     cin>>x;
//     cin>>str;
//     arr2[i]=make_pair(x,str);
// }

// for(int i=0;i<5;i++){
//     cout<<arr2[i].first<<" "<<arr2[i].second<<endl;
// }



// ANOTHER CASE OF PAIRS

pair<int ,array<int,5>> p5;

// p5=make_pair(1,{1,2,3,4,5});


p5.first=3;
p5.second={1,2,3,4,5};
cout<<"\n"<<p5.first<<" ";
for(auto it:p5.second){
    cout<<it<<" ";
}
cout<<"\n";


//PAIR OF PAIRS

pair<pair<int,int>,pair<int,int>>p6={
    {1,2},
    {3,4}
};

cout<<"p6.first.second= "<< p6.first.second<<"  ";
cout<<"p6.second.first= "<<p6.second.first<<" "<<endl ;


//pair of pair and int

pair<pair<int,int>,int> p7={{1,5},2};

cout<<p7.first.second<<"\n"; // to acces inside pair we can do like this


//ANOTHER ONE

pair<pair<pair<int,int>,string>,int> p8={{{1,2},"hello brother"},8};

cout<<p8.first.second<<" ";
cout<<p8.first.first.second<<endl;
}