#include <iostream>
/*
    Binary search algorithm

/*
    Recurtion Method
*/
int BinarySearch(int arr[] , int low , int high , int key){

    if( high < low )
        return -1;

    int mid = low + ( ( high - low ) ) / 2 ; // ex  5 3   mid = 3 + (5-3)/2 = 4

    if( key == arr[mid] )
        return mid;

    else if ( key < arr[mid] )
        return BinarySearch( arr , low , mid - 1 , key );

    else
        return BinarySearch( arr , mid + 1 , high , key );
}

int main() {

    int arr[5] = {5 , 6 , 7 , 8 , 9};

    int i = BinarySearch(arr, 0 , 4 ,7 );

    if(i == -1){
        std::cout << "not found\n";
        return 0;
    }

    std::cout << i <<std::endl;

    return 0;
}
