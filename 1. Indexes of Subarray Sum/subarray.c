int subarraySum(int* arr, int n, int target, int* res) {
    // code here
    for (int i=0;i<n;i++){ 
    int sum=0;
        for (int j=i;j<n;j++){
            sum=sum+arr[j];
            
        if (sum==target){
            res[0] = i+1;   // start index
            res[1] = j+1;   // end index
            return 1;
        }
        }
}
return -1;
}
