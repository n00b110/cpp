#include <fstream>

using namespace std;

int asearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

void removeOrReplace(int arr[], int& n, int index, bool remove = false) {
    if(index >= n) {
        return;
    }
    if(remove) {
        for(int i = index; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
    } else {
        arr[index] = 0;
    }
}


void append(int arr[], int& n, int x) {
    if(n < 0) {
        return;
    }
    arr[n] = x;
    n++;
}


pair<int, int> modify_value(int arr[], int index, int new_value) {
    int old_value = arr[index];
    arr[index] = new_value;
    return make_pair(old_value, new_value);
}














