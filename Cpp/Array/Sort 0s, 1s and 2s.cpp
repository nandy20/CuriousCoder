//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
void sort012(int a[], int n)
{
    int i,j,k;
    i=0,k=n-1,j=0;
    while(j<=k){
        if(a[j]==0){
            a[j]=a[i];
            a[i]=0;
            i++;
            j++;
        }
        else if(a[j]==2){
            a[j]=a[k];
            a[k]=2;
            k--;
        }
        else if(a[j]==1){
            j++;
        }
    }
    
}
