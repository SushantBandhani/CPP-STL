// #include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    //map is like a dictionary of python ..it stores everything in sorted order and contains ony unique keys
    //in this case it will sort lexicographically 
    // it sort the items according to the keys..map only stores unique keys
    map<string ,int>mpp;
    mpp["sushant"]=1; // [keyvalue]=[mapvalue]
    mpp["Manas"]=2;
    mpp["siddharth"]=5;
    mpp["zayn"]=6;
    mpp["gigi"]=7;
    mpp["shivam"]=1;
    mpp.emplace("raj",45);
    mpp.emplace("kaku",1);
    mpp["Manas"]=1;         //if duplicate keys are their then it will overwrite the above key..the value of key(manas) will be overwrite as 1
    mpp.insert({"harry",2});   // mpp.insert("harry",2) wont work
    mpp.insert(pair<string,int>("louis",9));

cout<<mpp.begin()->first<<"  "<<mpp.begin()->second<<endl<<endl;  // works fine


    for(auto it:mpp){
        cout<<it.first<<" ";
        cout<<it.second<<" ";
        cout<<endl;
    }
cout<<"\n\n\n";
// to erase something from map

mpp.erase("raj");

//raj has been deleted
cout<<"After erasing raj : "<<endl;
   for(auto it:mpp){
        cout<<it.first<<" ";
        cout<<it.second<<" ";
        cout<<endl;
    }
    // erasing by giving the iterator
cout<<"\n\n\n";

  //key Manas is deleted  
mpp.erase(mpp.begin()); 

  for(auto it:mpp){
        cout<<it.first<<" ";
        cout<<it.second<<" ";
        cout<<endl;
    }
    cout<<"\n\n\n";


    //for erasing a range off elements in map

    // mpp.erase(mpp.begin(),mpp.end());  //it will clear the entire map
    // cout<<mpp.size();

    //instead of erase you can use clear method in this
    // mpp.clear(); -> it will also clear the entire map
   
cout<<"Removing elements from map from a given range : "<<endl;
   map<string,int>::iterator it=mpp.begin();
   it++;
   it++;
   map<string ,int>::iterator it2=mpp.end();
   it2--;

   mpp.erase(it,it2);
     for(auto it:mpp){
        cout<<it.first<<" ";
        cout<<it.second<<" ";
        cout<<endl;
    }
    cout<<"\n\n\n";


//map of int and int 

map<int,int>mpp2;
mpp2[1]=1;
mpp2.emplace(2,2);
for(auto it:mpp2){
    cout<<it.first<<" ";
    cout<<it.second<<" ";
    cout<<endl;
}

    cout<<"\n\n\n";


//we can also insert like this in map
// map<int ,string>mpp3;
// int n;
// cout<<"Enter the size for mapp mpp3 : "<<endl;
// cin>>n;
// for(int i=0;i<n;i++){
//     int x;
//     string str;
//     cin>>x;
//     cin>>str;
//     mpp3.emplace(x,str);

// }


map<string,array<int,5>>mpp4;
// mpp4.emplace("kaku",{1,2,3,4,5});  //giving errors 
// mpp4.emplace("sushant",{6,7,8,9,10});
// mpp4.emplace("shivam",{11,12,13,14,15});

// to insert or emplace you have to do this like
//The below ones will works fine
//mpp4.insert({"hello",{1,2,3,4,5}});
// mpp4.emplace(pair<string,array<int,5>>("kaku",{1,2,3,4,5})); 

mpp4["kaku"]={1,2,3,4,5};  //working fine
mpp4["shivam"]={6,7,8,9,10};
mpp4["sushant"]={11,12,13,14,15};


cout<<"Size of mpp4 is : "<<mpp4.size()<<endl;   //size is 3
for(auto it:mpp4){
    cout<<it.first<<" ";
    for(auto it2:it.second){
        cout<<it2<<" ";
    }
    cout<<endl;
}


cout<<"\n\n\n";

// *********unordered map************



//takes o(1) in almost all cases
//o(n) in worst case where n is the size of map
//here it doesnot store your element in any order and it contains unique keys in it

unordered_map<string,int>unmpp;
unmpp["Anuj"]=1;
unmpp["Abhishek"]=2;
unmpp["Priya"]=3;
unmpp["Priya"]=4; // this key and value will overwrite the above one  
unmpp["Zayn"]=9;
// unmpp["AAAA"]=0;
unmpp.emplace("AAAAA",0);

// to traverse in unsorted map

for(auto it3:unmpp){
    cout<<it3.first<<" ";
    cout<<it3.second<<" ";
    cout<<endl;
}

cout<<"\n\n\n";
// one thing to observe here is that it is inserting the element in descending order of your inserted element 
// (like last inserted element will be shown first in output screen)



//*******multimap*******
//in multimap it store the element in sorted order and one keyvalue can have different map values here
multimap<string,int>mulmpp;

// **  [] operator not works in case of multimap

// mulmpp["Raj"]=1;

mulmpp.emplace("Raj",1);
mulmpp.emplace("Raj",1);


for(auto it4:mulmpp){
    cout<<it4.first<<" ";
    cout<<it4.second<<" ";
    cout<<endl;
}




multimap<int,int>mulmpp4;
mulmpp4.insert(pair<int,int>(1,40));
mulmpp4.insert(pair<int,int>(2,30));
mulmpp4.insert(pair<int,int>(3,60));
mulmpp4.insert(pair<int,int>(6,10));


cout<<"Size of mulmpp4 is : "<< mulmpp4.size()<<"\n";

multimap<int ,int>::iterator it5;
for(auto it5=mulmpp4.begin();it5!=mulmpp4.end();it5++){
    cout<<it5->first<<" ";
    cout<<it5->second<<" ";
    cout<<endl;
}
}