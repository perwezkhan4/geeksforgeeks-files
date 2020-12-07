int maxSubarraySum(int arr[], int n){
    
    // Your code here
    
    int largest = INT_MIN;
    int temp = 0;
    
    for(int i=0; i<n; i++){
        temp += arr[i];
        
        if(temp>largest){
            largest = temp;
        }
        
        if(temp<0){
            temp =0;
        }
    }
    
    return largest;
    
}