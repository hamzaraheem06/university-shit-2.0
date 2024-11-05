#include<iostream>

using namespace std;

int solution(int nums[], int target){
    int n = nums.size();
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(nums[i] + nums[j] == target)
                    return {i,j};
        return {};
}

int main(){
    int arr[6] = {2,7,11,15 }, target = 9;
    solution(arr, target);
    return 0;
}