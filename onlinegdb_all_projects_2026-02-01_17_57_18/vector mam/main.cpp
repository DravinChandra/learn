#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>arr={9,2,3,1,4,5};
    int max,min,freq;
    max=*max_element(arr.begin(),arr.end());
    min=*min_element(arr.begin(),arr.end());
    cout << "Maximum element is: " << max << endl << "Minimum element is: " << min << endl;
    	
    freq=count(arr.begin(),arr.end(),5);
    cout << "Count of element 5 is: "<< freq << endl;
    
    arr.erase(arr.begin()+5);      
     cout << "After erasing an element: ";
     for (int i=0; i<arr.size();i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    sort(arr.begin(), arr.end()); 
    cout << "Sorted Array is: ";
    for (int i=0; i<arr.size();i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    arr.pop_back();
    cout << "Final Array after deleting an element is: "<<endl;
    for (int i=0; i<arr.size();i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    cout << "First Element is: " << arr.front() << endl;
    cout << "Last Element is: " << arr.back() << endl;
    
    arr.clear();
    cout << "Array Size is: " << arr.size() << endl;
    return 0;
}