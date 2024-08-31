import java.util.*;

public class lec11 {

    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }

    }

    static class binarytree {
        static int idx;

        public static Node buildtree(int nodes[]) {
            if (idx > nodes.length) {
                return null;
            }
            if (nodes[idx] == -1) {
                idx++;
                return null;
            }
            Node newnode = new Node(nodes[idx]);
            idx++;
            newnode.left = buildtree(nodes);
            newnode.right = buildtree(nodes);
            return newnode;
        }

        public static void po(Node a) {
            if (a == null) {
                return;
            }
            // list.add(a.val);
            System.out.print(a.data + " ");
            po(a.left);
            po(a.right);
        }

        // public static void lot(Node a) {
        //     if (a == null) {
        //         return;
        //     }
        //     Queue<Node> q = new LinkedList<>();
        //     q.add(a);
        //     q.add(null);

        //     while (!q.isEmpty()) {

        //         if (q.peek() == null) {
        //             System.out.println();

        //         }

        //         else{
        //             while (!q.isEmpty()) {
        //                 System.out.println(q.peek().data+" ");
        //                 if (q.peek().left != null) {
        //                         q.add(q.peek().left);
        //                     }
        //                     if (q.peek().right != null) {
        //                         q.add(q.peek().right);
        //                     }
        //                     q.remove();
        //                 }
        //             }
        //         }

        //         // else{
                
        //         // System.out.print(q.peek().data + " ");
        //         // if (q.peek().left != null) {
        //         //     q.add(q.peek().left);
        //         // }
        //         // if (q.peek().right != null) {
        //         //     q.add(q.peek().right);
        //         // }
        //         // q.remove();

        //         // }

        //     }
        // public void topv(Node root){
        //     stacks<Integer> s = new LinkedList<>();
        //     for(Node i = root;i!=null;i=i.left){

        //     }
        // }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int a = sc.nextInt();
        int[] nodes = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        binarytree tree = new binarytree();
        Node root = tree.buildtree((nodes));
        // System.out.println(root);
        tree.po(root);
        // tree.lot(root);

    }
}
