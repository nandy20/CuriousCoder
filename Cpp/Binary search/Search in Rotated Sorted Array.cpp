//https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
class Solution{
    public:
    int search(int a[], int l, int h, int key){
    //complete the function here
         while(l<=h){
             int mid=l+(h-l)/2;
             if(a[mid]==key){
                 return mid;
             }
             
                 if(a[mid]<a[l]){
                     if(key>a[mid] && key<=a[h]){
                         l=mid+1;
                     }
                     else{
                         h=mid-1;
                     }
                 }
                 else{
                    
                      if(key>=a[l] && key<a[mid]){
                         h=mid-1;   
                     }
                     else{
                         l=mid+1;
                     }
                   
                    
                 }
             
         }
         return -1;
    }
};
