#include <iostream>
#include<cstdlib>
using namespace std;

int search(int nums[5], int length, int item){
    int start = 0;
    int end = length-1;
    while(start <= end){
        int midpoint = (start + end) / 2;
        if(nums[midpoint] == item){
            return midpoint;
        }
        else if (nums[midpoint] < item){
            start = midpoint + 1;
        }
        else{
            end = midpoint - 1;
        }
    }
    return -1;
}

int main(){
    int nums[5] = {4, 15, 60, 94, 128};
    int length = sizeof(nums) / sizeof(nums[0]);
    int item;
    cin >> item;
    cout << search(nums, length, item);
    
}
