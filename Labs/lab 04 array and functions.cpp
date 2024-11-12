// CS201P - Lab 04
#include<iostream>
using namespace std;

//declaration of findMax and findMin functions
int findMax(int nums[], int numsSize){
	int maxNum = 0;
	for(int i = 0; i < numsSize; i++){
		if(nums[i] > maxNum){
			maxNum = nums[i];
		}else{
			continue;
		}
	}
	return maxNum;
}
int findMin(int nums[], int numsSize){
		int minNum = 0;
	for(int i = 0; i < numsSize; i++){
		if(nums[i] < minNum){
			minNum = nums[i];
		}else{
			continue;
		}
	}
	return minNum;
}
int main(){
	// declaration of array
	int nums[10] = {0,1,2,-3,4,5,16,7,8,9};
	int maxNum = findMax(nums, 10);	
	int minNum = findMin(nums, 10);	
	// displaying numbers on screen
	cout << "\nmax # is : " << maxNum << endl;
	cout << "\nmin # is : " << minNum << endl;
}
