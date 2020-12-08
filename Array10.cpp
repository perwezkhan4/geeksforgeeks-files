int minJumps(int arr[], int n){
    if(n<=0){
        return 0;
    }
    int steps=arr[0];
    int maxi=arr[0];
    int jumps=1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1){
            return jumps;
        }
        maxi=max(maxi,arr[i]+i);
        steps--;
        if(steps==0){
            jumps++;
            steps=maxi-i;
        }
        if(steps<=0){
            return -1;
        }
    }
    return jumps;
}

// int minJumps(int arr[], int n){
//     int sum =0;
//     int jump =0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
// 		jump++;
//         int x = arr[i]-1;
//         while(x--){
//             i++;
//         }
//         if(sum >= n-1){
//             return jump;
//         }
//     }
//     return jump;
// }
