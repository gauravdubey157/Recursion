//Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
//First index means, the index of first occurrence of x in the input array.
//Do this recursively. Indexing in the array starts from 0.


// int firstIndex(int input[], int size, int x) {
//   if (size == 0)
//     return -1;

//   if (input[0] == x)
//     return 0;
//   else{
//       int temp = firstIndex(input + 1, size - 1, x);
//       return (temp==-1)?-1 :temp+1;
//   }
// }



int firstIndex(int input[], int size, int x)
{
    if(size==0)
    return -1;
    
    if(input[0]==x)
    return 0;
    else
    {
        int temp=firstIndex(input+1, size-1, x);
        if(temp==-1)
        return -1;
        else
        return temp+1;
    }
}











// int firstIndex(int input[], int size, int x) {
//     if (size == 0)
//         return -1;
//     int temp = firstIndex(input, size-1, x);
    
//     if(temp == -1){
//         if(input[size-1]==x)
//             return size-1;
//         else
//             return -1;
//     }
//     else
//         return temp;
// }
