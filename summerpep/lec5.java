public class lec5 {

    public class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    Node tail = null;
    Node head = null;

    public void addfirst(Node head, int a) {
        Node newnode = new Node(a);
        if (head == null) {
            head = newnode;
            tail = newnode;
            return;
        }
        newnode.next = head;
        head = newnode;

    }

    public void addlast(int a) {
        Node newnode = new Node(a);
        if (head == null) {
            head = newnode;
            tail = newnode;
            return;
        }
        tail.next = newnode;
        tail = newnode;
    }

    public void removf(){

        head = head.next;

    }

    public void removl(){
        int len = 0;
        for(Node i = head;i!=null;i=i.next){
            len++;
        }

        int count = 0;
        for(Node i = head;count<len-1;i=i.next){
            if(count == len-2){
            tail = i;
            i.next = null;
            }
            count++;
        }
        
    }

    public void display() {
        for(Node i = head;i!=null;i=i.next){
            System.out.print(i.data+"->");
        }
        System.out.print("null");
    }

    public void insertatk(int n,int a){
        int len = 0;
        for(Node i = head;i!=null;i=i.next){
            len++;
        }
        Node newnode = new Node(a);
        if (n==0) {
            addfirst(head, a);
        }
        if(n==len){
            addlast(a);
        }
        else{
            int count = 0;
            for(Node i = head;count<=n-1;i=i.next){
                if(count == n-1){
                Node tem = i.next;
                i.next = newnode;

                newnode.next = tem;
                }
                count++;
            }
        }
    }


    public void deletek(int n){
        int len = 0;
        for(Node i = head;i!=null;i=i.next){
            len++;
        }

        if (n==0) {
            removf();
        }
        if(n==len){
            removl();
        }
        else{
            int count = 0;
            for(Node i = head;count<=n-1;i=i.next){
                if(count == n-1){
                Node tem = i.next;
                tem = tem.next;
                i.next = tem;
                }
                count++;
            }
        }
    }

    public static void main(String[] args) {
        lec5 ll = new lec5();
        ll.addlast(1);
        ll.addlast(2);
        ll.addlast(3);
        ll.addlast(4);
        ll.addlast(5);
        // ll.removf();
        // ll.removl();
        ll.insertatk(5,69);
        ll.deletek(1);
        ll.display();
    }
}
