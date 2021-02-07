bool find(int arr[],int l,int r, int x){
    while(l<r){
        if(arr[l] + arr[r] == x ){
  
            return true;
        }
        else if(arr[l] + arr[r] <x){
            l++;
        }
        else{
            r--;
        }
      
    }
      return false ;
}
bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    sort(arr,arr+N);
  
    for(int i = 0;i<N;i++){
        if(find(arr,i+1,N-1,X-arr[i])){
            return true;
        }
    }
    return false;
}
