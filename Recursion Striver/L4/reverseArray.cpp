//ONE POINTER
#include<iostream> 
using namespace std;

void reverseArray(int *arr, int size, int i) {
    if (i >= size / 2) {
        return;
    }
    swap(arr[i], arr[size - i - 1]);
    reverseArray(arr, size, i + 1);
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], n;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Enter the terms: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printArray(arr, n);
    reverseArray(arr, n, 0);
    printArray(arr, n);

    return 0;
}