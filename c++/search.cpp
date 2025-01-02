#include <iostream>
using namespace std;

//**********************-------------------BINARY SEARCH----------------*********************//

int binarySearch(char arr[], int size, char target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  

        if (arr[mid] == target) {
            return mid; 
        }

        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    char arr[] = {'a','b','c','d','e','f','z'};
    int size = sizeof(arr) / sizeof(arr[0]); 
    char target;
    cout<<"What are you searching for...";cin>>target;

    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
