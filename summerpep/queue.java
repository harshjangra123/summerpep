import java.util.Scanner;

public class queue {
    int arr[];
    int first,last,capacity;

    public queue(int capacity){
        this.capacity = capacity;
        this.arr = new int[capacity];
        this.first = this.last = -1;
    }

    public void add(int a){
        if(first == -1){
            first = 0;
        }
        if(last<capacity){
            last++;
            arr[last] = a;
        }
        else{
            System.out.println("queue overflow");
            return;
        }
    }

    public int remove(){
        if(isempty()){
            return -1;
        }
        int data = arr[first];
        if(first == last){
            first = last = -1;
        }
        else{
            first++;
        }
        return data;
    } 

    public boolean isempty(){
        if(last<0){
            return true;
        }
        return false;
    }

        public void display(){
            for(int i = first;i<=last;i++){
                System.out.println(arr[i]);
            }
        }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        queue q = new queue(5);
        for(int i = 0;i<5;i++){
            int xx = sc.nextInt();
            q.add(xx);
        }
        q.remove();
        q.remove();
        q.display();

    }
}
