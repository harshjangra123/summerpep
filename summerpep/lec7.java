public class lec7 {
    static int count = 0;
    public static void towerofhanoi(int n,char s,char d,char a){
        if(n==0){
            return ;
        }
        towerofhanoi(n-1, s, d, a);
        System.out.println("move the disk "+n+" from "+s+" to "+a);
        towerofhanoi(n-1, d, a,s);
        count++;
    }


    static int cnt = 0;
    public static void gg(int arr[],int s,int x){
        if(arr[s+1] != x){
            System.out.println(s+cnt);
            return;
        }
        gg(arr,s+1,x);
        cnt++;
    }

    public static void fandl(int arr[],int s,int e,int x){

        int m = (s+e)/2;


        if(s == e && e == m){
            if(arr[s] == x){
                System.out.println(s);
                gg(arr, s, x);
            }
            else{
                System.out.println("Key not found");
            }
            return;
        }
        if(x>arr[m]){
                fandl(arr,m+1,e,x);
        }
        else{
                fandl(arr,s,m,x);
        }
    }





    public static void main(String[] args) {
        // towerofhanoi(8, 'A', 'C', 'B');
        // System.out.println(count);





        // Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

        // If target is not found in the array, return [-1, -1].

        // You must write an algorithm with O(log n) runtime complexity.
        // int[] arr = {5,7,7,8,8,10};
        int[] arr = {1,2,3,3,3,6};
        int len = arr.length;
        int t = 3;
        fandl(arr,0,len-1,t);


        // int[] arr = {0,2,1,0};
        // int len
        // finpeak(arr,0)

    }
}
