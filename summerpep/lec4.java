import java.util.Scanner;

// public class lec4 {

//     // public static void main(String[] args) {
//     //     Scanner sc = new Scanner(System.in);
//     //     String a = sc.nextLine();

//     //     char[] arr = a.toCharArray();
//     //     int len = arr.length-1;
//     //     palindrome(arr, 0,len);

//     // }

//     // public static void palindrome(char a[],int i,int j){
//     //     if(i<j){
//     //     if(a[i] != a[j]){
//     //         System.out.println("not palindrome");
//     //         return;
//     //     }
//     //     else{
            
//     //         palindrome(a,i+1,j-1);
//     //     }
//     //     }

//     //     else{
//     //         System.out.println("palindrome");
//     //         return ;
//     //     }
        
//     // }


//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         // int a = sc.nextInt();
//         // int n = sc.nextInt();

//         // int p = pow(a,n);
//         // System.out.println(p);
//         // pow(a,n);

//         // char[] g = {'h','a','r','s','h'};
//         // String gg = new String(g);
//         // String gg = sc.nextLine();
//         // String g = sc.nextLine();
//         // String added = g+gg;
//         // System.out.println(added);/
//         // for(int i =0;i<g.length();i++){
//         //     System.out.print(g.charAt(i));
//         // }
//         // System.out.println(palin(g));

//         // String a = "harsh";
//         // String b = "harsh";
        
//         // if(a.equals(b)){
//         //     System.out.println("yes");
//         // }


//         int a = sc.nextInt();
//         String[] arr = new String[a];
//         for(int i = 0;i<a;i++){
//             arr[i]  = sc.next();
            
//         }


//         String max = arr[0];

//         for(int i = 0;i<a;i++){
//             int x = arr[i].compareTo(max);
//             if(x>0){
//                 max = arr[i];
//             }
//         }
//         System.out.println(max);


//         // string builder
//         // stack
//         // push at bottom
//     }
    

//     public static int ascii(String a){
//         char[] arr = a.toCharArray();
//         int len = arr.length;
//         int sum = 0;
//         for(int i = 0;i<len;i++){
//             sum+=(int)arr[i];
//         }

//         return sum;
//     }



//     public static boolean palin(String a){
//         int len = a.length();
//         int i =0;int j = len-1;
//         boolean flag = true;
//         for(;i<j;i++,j--){
//             if (a.charAt(i)!=a.charAt(j)) {
//                 flag = false;
//                 break;
//             }
//         }
//         return flag;
//     }

//     public static int pow(int a,int n){
//         if(n==0){
//             return 1;
//         }
//         return a*pow(a,n-1);
        
//     }
// }


// // shortest path
public class lec4 {

    public static void main(String[] args) {
        // String buliders
        StringBuilder sb = new StringBuilder("tony");
        System.out.println(sb);
        System.out.println(sb.charAt(0));
        // set character at index
        sb.setCharAt(0, 'p');
        System.out.println(sb);

        sb.insert(0, 's');
        System.out.println(sb);

        sb.insert(3, 'n');
        System.out.println(sb);
    }
}