//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
 int n = arr.length;
        
        if(n <= 1){
            return;
        }
        
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int num : arr) {
            if(num == 0) count0++;
            if(num == 1) count1++;
            if(num == 2) count2++;
        }
        
        for(int i = 0 ; i < n ; i++) {
            if(count0 > 0){
                arr[i] = 0;
                count0--;
            } else if(count0 == 0 && count1 > 0) {
                arr[i] = 1;
                count1--;
            } else if(count1 == 0 && count2 > 0) {
                arr[i] = 2;
                count2--;
            }
        }
