import java.util.Scanner;
import java.util.Stack;

public class lec6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        int[] arr = new int[a];
        for(int i =0;i<a;i++){
            arr[i] = sc.nextInt();
        }

       int[] span = new int[a];
        stocks(arr, span);
       for(int i : span){
        System.out.println(i+" ");
       }

    }

    public static void stocks(int arr[],int span[]){
        Stack<Integer> s = new Stack<>();
        for(int i =0;i<arr.length;i++){
            if(i == 0){
                s.push(i);
                span[i] = 1;
            }
            else{
                    while (!s.isEmpty() && arr[s.peek()]<=arr[i]) {
                        s.pop();
                    }

                    if (s.empty()) {
                        span[i] = i+1;
                    }

                    else{
                        span[i] = i-s.peek();
                    }
                    s.push(i);
                }
        }
    }

}

// public class lec6 {
//     public static boolean isvalid(String str) {
//         Stack<Character> s = new Stack<>();

//         for (int i = 0; i < str.length(); i++) {

//             if (str.charAt(i) == '(' || str.charAt(i) == '{' || str.charAt(i) == '[') {
//                 s.push(str.charAt(i));
//             }

//             else if(str.charAt(i) == ')' || str.charAt(i) == '}' || str.charAt(i) == ']'){
//                 if(s.isEmpty()){
//                     return false;
//                 }

//                 else if (ispairmatching(s.peek(), str.charAt(i))) {
//                     s.pop();
//                 }

//             }
//         }

//         return s.isEmpty();
//     }

//     public static boolean ispairmatching(char open , char close){
//         return((open == '(' && close == ')' ) || (open == '{' && close == '}') || (open == '[' && close == ']'));
//     }

//     public static void main(String[] args) {
//         String str = "{[]}";
//         System.out.println(isvalid(str));

//     }
// }