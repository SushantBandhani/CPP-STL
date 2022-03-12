#include<bits/stdc++.h>  //when i included this library then no error had occured on using unordered set
#include<set>
using namespace std;
int main(){
    //to declare an unordered set 
    //unordered set also contains only unique elements but in non sorted form
    unordered_set<int>st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(3);

    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


//average time complexity of unordered set operation are o(1)
// worst complexity is o(n) where n is set size

//its functions are same as of sets


//******multiset******

//multiset gives us the option of storing the element in sorted form and duplicates can be stored also..

multiset<int>ml;
ml.emplace(1);
ml.emplace(1);
ml.insert(2);
ml.insert(2);
ml.insert(3);
ml.insert(9);
ml.insert(6);


for(auto it:ml){
    cout<<it<<" ";
}
cout<<endl;

//count - this function returns the counting of particular element in tyour set

cout<<ml.count(1); //2

// multiset<set<int>>ml1;
// int s;
// int m;
// cin>>s>>m;
// for(int i=0;i<s;i++){
//     set<int>temp;
//     for(int j=0;j<m;j++){
//         int val;
//         cin>>val;
//         temp.insert(val);

//     }
//     ml1.insert(temp);
//      temp.clear();
// }


// for(set<int> st:ml1){
//     for(int y:st){
//         cout<< y<<" ";
//     }
// }



set<multiset<int>>st1;
int s;
int m;
cout<<endl;
cin>>s>>m;
for(int i=0;i<s;i++){
    multiset<int>temp;
    for(int j=0;j<m;j++){
        int val;
        cin>>val;
        temp.insert(val);

    }
    st1.insert(temp);
    temp.clear();
}



for(multiset<int> st:st1){
    for(int y:st){
        cout<< y<<" ";
    }
}

cout<<"\n"<<st1.size();  //size will come as 2
}