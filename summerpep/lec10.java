import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;



public class lec10 {
    // public static char fpsm(String str){
    //     int[] ascii = new int[26];
    //     Queue<Character> q = new LinkedList<>();

    //     char[] crr = str.toCharArray();
        
        
    //     for(int i =0;i<crr.length;i++){
    //         int ind = (int)crr[i] - 97;
    //         ascii[ind]++;
    //         if(i == 0){
    //             q.add(crr[0]);
    //         }
    //         else{
    //             if (q.peek() == crr[i]) {
    //                 q.add(crr[i]);
    //             }
    //             else{
    //                 while (!q.isEmpty()) {
    //                     q.remove();
    //                 }
    //                 q.add(crr[i]);
    //             }
    //         }
    //     }
    //     for(int i =0;i<ascii.length;i++){
    //         if(ascii[i] == 1){
    //             char fx = (char)(i+97);
    //             return fx;
    //         }
    //     }
    //     return '#';
    // }


    public static char fpsm(String str){

        Queue<Character> q = new LinkedList<>();
        int[] charcount = new int[256];
        char[] ctr = str.toCharArray();

        for(char ch : ctr){
            q.add(ch);
            charcount[ch]++;
            while (!q.isEmpty() && charcount[q.peek()] >1) {
                q.remove();
            }
        }
        
        if(q.isEmpty()){
            return '#';
        }
        return q.peek();
    }


    public static void main(String[] args) {
    Scanner sc =  new Scanner(System.in);
    String str = sc.nextLine();

    for(int i = 0;i<str.length() ;i++){
        String gg = str.substring(0, i+1);
        char gx = fpsm(gg);
        System.out.print(gx+" ");
    }

    }
     
}



// import java.util.LinkedList;
// import java.util.Queue;
// import java.util.Scanner;
// import java.util.Stack;



// public class lec10 {
//     public static void fpsm(Queue<Integer> q){
//         int a = q.size();
//         int[] rr = new int[a];

//         for(int i = 0;i<a;i++){
//             if(i%2 == 0){
//                 int xx = q.peek();
//             rr[i] = xx;
//             q.remove();
//             }
//         }
//         for(int i = 0;i<a;i++){
//             if(i%2 != 0){
//             int xx = q.peek();
//             rr[i] = xx;
//             q.remove();
//             }
//         }

//         for(int i =0;i<a;i++){
//             System.out.println(rr[i]+" ");
//         }

//     }

//     public static void main(String[] args) {
//     Scanner sc =  new Scanner(System.in);
//     Queue<Integer> q = new LinkedList<>();
//     int a = sc.nextInt();
//     for(int i = 0;i<a;i++){
//         int x = sc.nextInt();
//         q.add(x);
//     }

//     fpsm(q);
// }
// }