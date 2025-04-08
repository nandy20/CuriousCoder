//https://www.geeksforgeeks.org/problems/ceil-the-floor2802/0
def getFloorAndCeil(self, x: int, arr: list) -> list:
        arr.sort()  # Sort the array
        
        floor = self.findFloor(arr, x)
        ceil = self.findCeil(arr, x)
        
        return [floor, ceil]

    def findFloor(self, arr: list, x: int) -> int:
        i, j = 0, len(arr) - 1
        if arr[0] > x: return -1  # No floor exists
        
        while i <= j:
            mid = (i + j) // 2
            if arr[mid] == x: return arr[mid]
            elif arr[mid] > x: j = mid - 1
            else: i = mid + 1
        
        return arr[j]  # Floor value

    def findCeil(self, arr: list, x: int) -> int:
        i, j = 0, len(arr) - 1
        if arr[j] < x: return -1  # No ceil exists
        
        while i <= j:
            mid = (i + j) // 2
            if arr[mid] == x: return arr[mid]
            elif arr[mid] > x: j = mid - 1
            else: i = mid + 1
        
        return arr[i]
