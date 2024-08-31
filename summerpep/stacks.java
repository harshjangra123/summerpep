import java.util.Scanner;

// public class stacks {
//      int[] arr;
//      int top;

//     //making a constructor
//     public stacks(int maxSize){
//         this.arr = new int[maxSize];
//         this.top = -1;
//     }

//     public boolean isempty(){
//         if(top<0){
//             return true;
//         }
//         return false;
//     }

//     public void push(int a){
//         if(top < arr.length){
//         top++;
//         arr[top] = a;
//         }
//         else{
//             System.out.println("stack overflow");
//             return;
//         }
//     }

//     public int pop(){
//         if(isempty()){
//             System.out.println("stack underflow");
//             return -1;
//         }
//         else{
//             top--;
//             return arr[top];
//         }
//     }

//     public int peek(){
//         if(isempty()){
//             System.out.println("stack is empty");
//             return -1;
//         }
//         else{
//             return arr[top];
//         }
//     }

//     public void display(){
//         for(int i = top;i>=0;i--){
//             System.out.println(arr[i]+" ");
//         }
//     }
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         stacks stak = new stacks(5);
//         for(int i = 0;i<5;i++){
//             int xx = sc.nextInt();
//             stak.push(xx);
//         }
//         stak.pop();
//         stak.pop();
//         stak.display();
//         System.out.println(stak.peek());
//     }
// }



public class stacks {
    int top = -1;
    public class Node{
        int data;
        Node next;
        Node prev;

        Node(int data){
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }

    Node head = null;
    Node tail = null;

    public void push(int a){
        Node newnode = new Node(a);

        if(head == null){
            head = newnode;
            tail = newnode;
        }
        else{
            tail.next = newnode;
            newnode.prev = tail;
            tail = newnode;
        }
        top++;
    }


    public boolean isempty(){
        if(top<0){
            return true;
        }
        return false;
    }


    public void pop(){
        if(isempty()){
            System.out.println("stack underflow");
            return;
        }
        tail = tail.prev;
        top--;
    }

    public void peek(){
        System.out.println(tail.data);
    }

    public void display(){
        for(Node i = tail;i!=null;i=i.prev){
            System.out.println(i.data);
        }
    }

    public static void main(String[] args) {
        stacks stak = new stacks();
        stak.push(1);
        stak.push(2);
        stak.push(3);
        stak.push(4);
        stak.push(5);
        stak.pop();
        stak.pop();
        stak.display();
        stak.peek();
    }
}