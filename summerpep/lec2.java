// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
        int marks[] = new int[5];
        // int marks[] = {1,2,3,4,5};
        
        // String fruits[] = {"apple","mango","bannana"};
        // System.out.println(marks[4]);
        // System.out.println(marks.length);
        
        
        Scanner sc = new Scanner(System.in);
        for(int i =0;i<marks.length;i++){
            marks[i] = sc.nextInt();
        }
        // for(int i=0;i<marks.length;i++){
        //     System.out.println("marks "+i+" : "+marks[i]);
        // }
        // printarray(marks);
        // int x = sc.nextInt();
        // boolean flag = true;
        // for(int i=0;i<marks.length;i++){
        //     if(marks[i] == x){
        //         System.out.println("key found");
        //         flag = false;
        //     }
        // }
        // if(flag){
        //     System.out.println("key not found");
        // }
        // int larg = marks[0];
        // for(int i = 0;i<marks.length;i++){
        //     if(marks[i] < larg){
        //         larg = marks[i];
        //     }
        // }
        // System.out.println(larg);
        
        
        int x = sc.nextInt();
        int len = marks.length;
        for(int i =0;i<len-1;i++){
            for(int j =0;j<len-i-1;j++){
                if(marks[j]>marks[j+1]){
                    int temp = marks[j];
                    marks[j] = marks[j+1];
                    marks[j+1] = temp;
                }
            }
        }
        int s = 0;
        int e = len-1;
        // binarysearch(marks,x,s,e);
        
        // reverse(marks);
        // printarray(marks);
        combinations(marks);
        
        
    }
    
    
    public static void printarray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println("marks "+i+" : "+arr[i]);
        }
    }
    
    public static void reverse(int arr[]){
        int len = arr.length;
        int i = 0;
        int j = len-1;
        
        for(;i<j;i++,j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    
    public static void binarysearch(int arr[],int x,int s,int e){
        int len = arr.length;
        int m = (s+e)/2;
        // int s = 0;
        // int e = len-1;
        if(s == e && e == m){
            if(arr[s] == x){
                System.out.println("key found");
            }
            else{
                System.out.println("Key not found");
            }
            return;
        }
        if(x>arr[m]){
            binarysearch(arr,x,m+1,e);
        }
        else{
            binarysearch(arr,x,s,m);
        }
        
        
    }
    
    
    public static void combinations(int arr[]){
        int len = arr.length;
        for(int i = 0;i<len;i++){
            for(int j = i;j<len;j++){
                if(arr[i] == arr[j]){
                    continue;
                }
                System.out.print(arr[i]+","+arr[j]+"  ");
            }
            System.out.println();
        }
    }
}