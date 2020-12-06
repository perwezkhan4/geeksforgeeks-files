int kthSmallest(int arr[], int l, int r, int k) {
    //code here
   // int n = sizeof(arr)/sizeof(arr[0]);
  int n = r+1;
  sort(arr,arr+n);
  return arr[k-1];
   
}