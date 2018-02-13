#include <iostream>
/*
    linear search is the best case is o(1)
    and worth is o(n)
    */

/*
    Recurtion Method
    */
int LinearSearchRecursive(int arr[] , int low , int high , int key){
    if(high < low )
        return -1;

    if(arr[low] == key)
        return low;

    return LinearSearchRecursive(arr , low+1 , high , key);
}

int main() {
    int arr[5] = {5 , 6 , 7 , 8 , 9};
    int i = LinearSearchRecursive(arr, 0 , 4 ,7 );
    if(i == -1){
        std::cout << "not found\n";
        return 0;
    }
    std::cout << arr[i] <<std::endl;
    return 0;
}
