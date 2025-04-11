//https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
pair<long long, long long> getMinMax(long long a[], int n) {
    long long num1=a[0];
    long long num2=a[0];
    for(int i=0;i<n;i++){
        if(num1>a[i]){
            num1=a[i];
        }
        if(num2<a[i]){
            num2=a[i];
        }
    }
    return {num1,num2};
}
