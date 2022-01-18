#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,10,12,15};

    vector<int> ar (10,7); 

    arr.pop_back();

    arr.push_back(16); 

    for(int i=0;i<arr.size();i++){
        cout<<arr[i] <<endl;
    }

     for(int i=0;i<ar.size();i++){
        cout<<ar[i] <<endl;
    }

    cout<<arr.size() <<endl;

    cout<<arr.capacity() <<endl;
    return 0;
}
