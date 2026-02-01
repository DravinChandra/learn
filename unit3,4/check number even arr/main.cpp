#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;                
    
    int arr[N];               
    
   
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    vector<int> evenNumbers; 
    
    
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 0) { 
            evenNumbers.push_back(arr[i]);
        }
    }
    
    cout << evenNumbers.size() << endl;
    
    return 0;
}