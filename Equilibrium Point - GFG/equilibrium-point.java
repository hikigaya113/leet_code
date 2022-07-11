// { Driver Code Starts
import java.io.*;
import java.util.*;
import java.util.stream.*;

class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while (t-- > 0) {
            
            //taking input n
            int n = Integer.parseInt(br.readLine().trim());
            long arr[] = new long[n];
            String inputLine[] = br.readLine().trim().split(" ");
            
            //adding elements to the array
            for (int i = 0; i < n; i++) {
                arr[i] = Long.parseLong(inputLine[i]);
            }

            Solution ob = new Solution();
            
            //calling equilibriumPoint() function
            System.out.println(ob.equilibriumPoint(arr, n));
        }
    }
}// } Driver Code Ends


class Solution {

    
    // a: input array
    // n: size of array
    // Function to find equilibrium point in the array.
    public static int equilibriumPoint(long arr[], int n) {

        // Your code here
        


 

if(n==1){
           return 1;
       }
       if(n==2){
           return -1;
       }
       int eqi=1;
       long sum1=arr[0];   // sum1 tends to left sum
       
       long sum2=0;       // sum2 tends to right sum 
       for(int i=2;i<=n-1;i++){
           sum2+=arr[i];
       }
       while(eqi<n-1){
           if(sum1==sum2){
               return eqi+1;
           }
           else{                      
               sum1+=arr[eqi];
               eqi+=1;
               sum2-=arr[eqi];
           }
       }
       return -1;
    }
}
