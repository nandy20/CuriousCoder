//https://www.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1
#include<stdio.h>
int main()
{
	//code
	int t;
	scanf("%d",&t);
	while(t>0){
	    int n,i,j,k,a[100000];
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    k=0;
	    for(i=0;i<n-1;i=i+2){
	        if(a[i]!=a[i+1]){
	            printf("%d\n",a[i]);
	            k=1;
	            break;
	        }
	    }
	    if(a[n-1]!=a[n-2]){
	        printf("%d\n",a[n-1]);
	    }
	    t--;
	}
	return 0;
}
