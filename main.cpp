/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, num, arr[10], first, middle , last;
    cout<<"Enter elements:";
    for(i=0;i<10;i++)
    cin>>arr[i];
        cout<<"\nEnter the element needed to be searched:";
        cin>>num;
        first =0;
        last=9;
        middle = (first+last)/2;
        while (first <= last)
        {
            if(arr[middle]<num)
            first=middle+1;
            else if(arr[middle]==num)
            {
                cout<<"\nThe number, "<<num<<" found at position "<<middle+1;
                break;
            }
            else 
            last=middle-1;
            middle =(first+last)/2;
        }
        if(first>last)
            cout<<"\nThe number, "<<num<<"is not found in the given array";
            cout<<endl;
            return 0;
        }
