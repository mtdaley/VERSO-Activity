#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// This function removes all duplicates from a vector
// Takes the vector that will be sorted and a vector of removed elements as parameters
vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    // create a vector of unique values
    vector<int> unique_arr;
    // sort the inputted vector
    sort(arr.begin(), arr.end());
    // get size
    int n = arr.size();
    // loop to access each element
    for(int i=0; i<n; i++){
        // check if it's the start or if the value is unique
        if(i == 0 || arr[i] != arr[i-1]){
            // push back unique element
            unique_arr.push_back(arr[i]);
        }
        else{
            // push back duplicate element into removed elements
            removed_elements.push_back(arr[i]);
        }
    }
    // return unique vector
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    // input these vectors into remove_duplicates
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    // show original array
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // show unique array
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    // show removed elements
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
