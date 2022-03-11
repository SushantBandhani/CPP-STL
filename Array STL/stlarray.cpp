//Array in stl
//array container in stl provide implementation of static array

#include<iostream>
#include<array>  // to use array stl class
using namespace std;
int main()
{
    // array<int,size> variable_name;

    array <int ,5> data={1,2,3,4,5};  // declared and initialized in same line.

    //some member function of array templates are as follows :->

    // 1- at- Method returns value in array at given range
    //Example-
    cout<<data.at(2)<<endl; //output = 3
    //if we gave index more than array range it will throw an out_of_range exception

    //2 -[]-we can acces the array stl elements like this

    cout<<data[1]<<endl;

    //3-front()-return first element of array

    cout<<data.front()<<endl;
    //back()-return last element of array

    cout<<data.back()<<endl;

    //4 -method assign given value to every element in array
         array<int,8> arr;
          arr.fill(10);
           for(int i=0;i<8;i++){
               cout<<arr[i]<<" ";
                    }


    // 5- How to swap the contents of two array
    array<int,5> arr1={1,2,3,4,5};
    array<int,5> arr2={6,7,8,9,10};
    arr1.swap(arr2);
    cout<<endl<<"arr1 elements are :"<<endl;
    for(int i=0;i<5;i++){
               cout<<arr1[i]<<" ";
                    }
   cout<<endl<<"arr2 elements are : "<<endl;
                    for(int i=0;i<5;i++){
               cout<<arr2[i]<<" ";
                    }


    //6-size() return size of array
    cout<<endl<<"size of arr1 is "<<arr1.size()<<endl;


    //7-begin()- method returns the iterator pointing to first element of array

    //end()-method returns the iterator pointing to an element next to last element in array
         for(auto it=arr1.begin();it!=arr1.end();it++){
     cout<<*it<<" ";
       }
 cout<<endl;

// rbegin()-returns the iterator pointing to end of the array
//rend()- return the iterator pointing to one before the starting of the array


         for(auto it=arr1.rbegin();it!=arr1.rend();it++){
           cout<<*it<<" ";
            }
     

     // 8 -empty()- function is used to check whether the declared stl arrray is empty or not ,if its empty then it return false else true.
     bool x=arr1.empty();
     cout<<endl<<x;            // retuns 0
     cout<<endl;

    //9 -Traverse an array like for each loop

    for(auto it:arr2){
     cout<<it<<" "; 
      }
     
}