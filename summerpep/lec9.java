// import java.util.Scanner;

// public class lec9 {

//     class SimpleStack {
//         private int[] arr;
//         private int i;
      
//         public SimpleStack(int size) {
//           arr = new int[size]; 
//           i = -1;
//         }
      
//         public boolean isEmpty() {
//           return i == -1;
//         }
      
//         public void push(int element) {
//           if (i == arr.length - 1) {
//             System.out.println("Stack Overflow");
//             return;
//           }
//           arr[++i] = element;
//         }
      
        
//         public int pop() {
//           if (isEmpty()) {
//             System.out.println("Stack Underflow");
//             return -1;
//           }
//           return arr[i--];
//         }
//       }
      

//       public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int a = sc.nextInt();

//       }
// }

// import java.util.ArrayList;

// public class lec9 {
//     static ArrayList<Integer> stak = new ArrayList<>();
//     static int i = 0;
//     public static void push(int a){
//         stak.add(a);
//         i++;
//     }

//     public static boolean isEmpty(){
//         if(i == 0){
//             return true;
//         }
//         return false;
//     }

//     public static void pop(){
//         if(isEmpty()){
//             System.out.println("stack is empty");
//             return;
//         }
//         stak.remove(i-1);
//         i--;
//     }
    
//     public static void peek(){
//         System.out.println(stak.get(i-1));
//     }

//     public static void display(){
//         for(int j = 0;j<stak.size();j++){
//             System.out.println(stak.get(j)+" ");
//         }
//     }
//     public static void main(String[] args) {
//         // lec9 stack = new lec9();
//         push(1);
//         push(2);
//         push(3);
//         push(4);
//         push(5);
//         pop();
//         pop();
//         display();
//         peek();
//     }
// }

// public class lec9 {

//     int top = 0;
//     public class Node {
//     int data;
//     Node next;
//         Node(int data){
//             this.data = data;
//             this.next = null;
//         }
        
//     }

//     Node tail = null;
//     Node head = null;




//     public void push(int a) {
//         Node newnode = new Node(a);
//         if (head == null) {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         newnode.next = head;
//         head = newnode;
//         top++;
//     }

//     public void pop(){
//         if(top == 0){
//             System.out.println("stack is empty");
//             return;
//         }
//         int len = 0;
//         for(Node i = head;i!=null;i=i.next){
//             len++;
//         }

//         int count = 0;
//         for(Node i = head;count<len-1;i=i.next){
//             if(count == len-2){
//             tail = i;
//             i.next = null;
//             }
//             count++;
//         }
//         top--;
//     }


//     public void display() {
//         for(Node i = head;i!=null;i=i.next){
//             System.out.print(i.data+"->");
//         }
//         System.out.print("null");
//         System.out.println();;
//     }

//     public void peek(){

//         System.out.println(head.data);
        
//     }

//     public static void main(String[] args) {
//         lec9 stack = new lec9();
//         stack.push(1);
//         stack.push(2);
//         stack.push(3);
//         stack.push(4);
//         stack.push(5);
//         // stack.pop();
//         stack.display();
//         stack.peek();
//     }
// }


// queue using linked list
public class lec9 {

        class SimpleStack {
            private int[] arr;
            private int i;
          
            public SimpleStack(int size) {
              arr = new int[size]; 
              i = -1;
            }
          
            public boolean isEmpty() {
              return i == -1;
            }
          
            public void push(int element) {
              if (i == arr.length - 1) {
                System.out.println("Stack Overflow");
                return;
              }
              arr[++i] = element;
            }
          
            
            public int pop() {
              if (isEmpty()) {
                System.out.println("Stack Underflow");
                return -1;
              }
              return arr[i--];
            }
          }
          
    
          public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
    
          }
    }
    