/*
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. 
Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. 
*/


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    //declaration and definition in same line of a vector
    vector<int> vec1{1,2,3,4,5,6};
   
   //capacity()-return capacity of vector
   cout<<vec1.capacity()<<endl;

   //size()- returns size of vector(basically total number of elements in the vector)
   cout<<vec1.size()<<endl;

   //push_back() -It is a member function which can be used to add the value to end of vector
   vector<int> vec2;  //empty vector of capacity 0

   vec2.push_back(1);  //pushing one element
       cout<<vec2.capacity()<<endl;  // the capacity pf vector will become 1

   vec2.push_back(2);  //now earlier our vector was of size 1 but when we push one more element in it , its capacity becomes 
//    doubles the previous capacity..so now its capacity will be 2

       cout<<vec2.capacity()<<endl;

   vec2.push_back(3); // earlier capacity was 2 and we are inserting third element in it ..so capacity will become 2*2=4
       cout<<vec2.capacity()<<endl;

   vec2.push_back(4);  // now we are inserting 4th element in vector and vec2 has last index empty so '4' will be inserted at lastand capacity 
    //  will remain same(4) 
       cout<<vec2.capacity()<<endl;

   vec2.push_back(5); //now when we will enter the 5 element ,the vector will resize its capacity to 4*4=8

    cout<<vec2.capacity()<<endl;


// pop_back()- It removes the last element from the array

vec2.pop_back();
vec2.pop_back();
cout<<"capacity of vec2 is "<<vec2.capacity()<<endl;
cout<<"size of vec2 is "<<vec2.size()<<endl;



// clear()- This method removes all elements from vector
vec1.clear();
cout<<vec1.empty()<<endl;  //returns 1 because our vector has been cleared by clear method..



//at()- This method returns element at specified index
cout<<"vec2 element at 2nd location is "<<vec2.at(2)<<endl;



//front() and back() returns the first and last element from vector

cout<<"front element of vec2 : "<<vec2.front()<<endl;
cout<<"last element of vec2 : "<<vec2.back()<<endl;


// inserting at specified position by help of iterators 

// vector<int> ::iterator it=vec2.begin();

for(auto it=vec2.begin();it!=vec2.end();it++){
    cout<<*it;
}
cout<<endl;
//2D vector input 
// vector<vector<int>> vec2d(2,vector<int>(2));
vector<vector<int>>vec2d;
int z;
for(int i=0;i<2;i++){
    vector<int>temp;
    for(int j=0;j<2;j++){
        cin>>z;
        temp.push_back(z);

    }
    vec2d.push_back(temp);
    temp.clear();
}

// print 2d vector method1 
for(vector<int> it1:vec2d){
    for(int it2:it1){
        cout<<it2<<" ";
    }
    cout<<endl;
}
cout<<endl;
// print 2d vector ,method-2
 for(int i=0;i<vec2d.size();i++){
        for(int j=0;j<vec2d[i].size();j++){
            cout<<vec2d[i][j];
            // vec[j].push_back(z);
        }
    }
cout<<endl;

// we can also do like this
     vector<vector<int>> vec{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

 for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j];
        }
    }
}