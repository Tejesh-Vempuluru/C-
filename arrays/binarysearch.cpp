#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 8, 9, 5, 4};
    int key = 5;
    sort(arr.begin(), arr.end());
    
    int s = 0;
    int e = arr.size() - 1;
    bool found = false;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            found = true;
            break;
        } 
        else if (arr[mid] < key) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }

    if (found) {
        cout << "Key " << key << " found in the array." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}
