// Topic: Sum of array elements using recursion
int sumArray(vector<int>& arr, int i) {
	if(arr.empty())
	return 0;
    if (i >= arr.size() - 1)
        return arr[i];

	return arr[i] + sumArray(arr, i+1);

}


// Topic: Reverse an array using recursion
void revArray(vector<int>& arr, int i, int j)/*here i = 0 and j = arr.size()-1*/{
	//base case
	if(i>=j)
	return;
	

	swap(arr[i], arr[j]);
	return revArray(arr, i + 1, j - 1);
}


// Topic: Check whether a string is a palindrome using recursion
bool checkPalindrom(string& str, int i, int j){
	if(i >= j)
	return true;

	if(str[i] != str[j])
	return false;
return checkPalindrom(str, i+1, j-1);
}


// Topic: Find the maximum element in an array using recursion
int maxArray(vector<int>& arr, int i) {
    if (i == arr.size() - 1)
        return arr[i];

    return max(arr[i], maxArray(arr, i + 1));
}


// Topic: Count how many times a target value appears in an array
int countOccurence(vector<int>& arr, int i, int target){
	if(i==arr.size())
		return 0;

	if (arr[i] == target)
    		return 1 + countOccurence(arr, i + 1, target);

return countOccurence(arr, i + 1, target);
}


// Topic: Linear search using recursion
int linearSearch(vector<int>& arr, int i, int target){

	if(i>=arr.size())
		return -1;

	if(arr[i] == target)
		return i;
return linearSearch(arr, i + 1, target);
}


// Topic: Binary search using recursion
int binarySearch(vector<int>& arr, int start, int end, int target){
	
	if (arr.empty())
    	return -1;

	if(start > end)
		return -1;

	int mid = start + ((end - start)/2);
	if(target == arr[mid])
		return mid;

	if(target < arr[mid])
		return binarySearch(arr, start, mid-1, target);

	return binarySearch(arr, mid + 1, end, target);

}
