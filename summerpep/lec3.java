import java.util.*;

public class lec3 {
    public static int summ(int[] arr,int len){
        int sum = 0;
        for(int i=0;i<len;i++){
            sum+=arr[i];
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        // int arr[] = new int[a];

        // for(int i = 0;i<a;i++){
        //     arr[i] = sc.nextInt();
        // }
        // // System.out.print("input i: ");
        // // int i = sc.nextInt();

        // // System.out.print("input j: ");
        // // int j = sc.nextInt();

        // // for(;i<=j;i++){
        // //     System.err.print(arr[i]+" ");
        // // }
        // int count = 0;
        // int max = 0;
        // for(int i =0;i<a;i++){
        //     for(int j = i;j<a;j++){
        //         int sum = 0;
        //         for(int k = i;k<=j;k++){
        //             System.out.print(arr[k]+" ");
        //             sum+=arr[k];
        //             if(sum>max){
        //                 max = sum;
        //             }
        //             }
        //         count++;
        //         System.out.println();
        //     }
        // }
        // System.out.println("count: "+count);
        // System.out.println("maximum sum : "+max);
        int sum = sun(a);
        System.out.println(sum);


        int facto = fact(a);
        System.out.println(facto);

        int fibo = fibo(a);
        System.out.println(a+" element of fibonacci series : "+fibo);


        printn(a);
    }

    public static int sun(int n){
        if(n==1){
            return 1;
        }
        int temp = sun(n-1);
        return temp+n;
    }

    public static int fact(int n){
        if(n==0){
            return 1;
        }
        int t = fact(n-1);
        return t*n;
    }

    public static int fibo(int n){
        int a = 0,b = 1;
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
        }
        int temp = fibo(n-1)+fibo(n-2);
        return temp;
    }

    public static void printn(int n){
        // if(){
        //     return;
        // }
        // System.out.println(n);
        // printn(n-1);
    }
}
