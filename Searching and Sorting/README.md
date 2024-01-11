Merge Sort
        Algorithm : 
        (1) divide array into halves
        (2) then merge them together
        Steps :
        (1) First lets copy all elements from Original -> Helperarray , keeping track of where to start the left and right halves
        (2) Then iterate through helperarray , copying smaller element into Original array
        (3) At the end copy any remaining elements into the Original array  (that to only left half of array is enough cause right halve would already be in the original array)
        TC : O(NlogN)
        SC : O(N)

Quick Sort        
        Algorithm :
        (1) pick a pivot(can be any element in array ie first ,last, median, random or any element)
        (2) place  it in the correct position
        (3) smaller on the left 
        (4) larger on the right
         
        (Q) How to place the pivot in its correct  position ?
        (Ans) 
                Say our unsorted array is = {2 6 8 5 4 3}
                let low = 0;
                let high = n-1; //n is size of array
                pivot = arr[low];

                let i =low;
                let j =high;
                if
                        now check (arr[i]>pivot), if yes then check (arr[j]<pivot) 
                        swap arr[i] , arr[j]
                        move i++ and j--
                else
                        i++;


                when i and j cross each other , the position where j is located is the correct position


        TC : O(NlogN) , worst case = O(N^2)
        SC : O(1) , stack space : O(logN) 
        