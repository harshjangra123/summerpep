import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class lec13 {

    static public class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            left = null;
            right = null;
        }
    }

    static public class pair{
        int first;
        int second;
        pair(int first,int second){
            this.first = first;
            this.second = second;
        }
    }
      

    static public class binarytree {
        static int idx = 0;

        public static Node buildtree(int a[]) {
            if (idx > a.length) {
                return null;
            }
            if (a[idx] == -1) {
                idx++;
                return null;
            }

            Node newnNode = new Node(a[idx]);
            idx++;
            newnNode.left = buildtree(a);
            newnNode.right = buildtree(a);
            return newnNode;
        }

        public static void preorder(Node root) {
            if (root == null) {
                return;
            }
            System.out.print(root.data + " ");
            preorder(root.left);
            preorder(root.right);
        }

        // breadth first search also
        public static void levelordertreversal(Node root) {
            Queue<Node> q = new LinkedList<>();
            q.add(root);
            q.add(null);

            while (!q.isEmpty()) {
                Node temp = q.peek();

                q.remove();

                if (temp == null) {
                    System.out.println();
                    if (!q.isEmpty()) {
                        q.add(null);
                    }
                }

                else {
                    System.out.print(temp.data + " ");
                    if (temp.left != null) {
                        q.add(temp.left);
                    }
                    if (temp.right != null) {
                        q.add(temp.right);
                    }
                }
            }

        }

        static int count  = 1;
        public static void levelordertreversalatkth(Node root,int k) {
             
            Queue<Node> q = new LinkedList<>();
            q.add(root);
            q.add(null);

            while (!q.isEmpty()) {
                Node temp = q.peek();
  
                q.remove();

                if (temp == null) {
                    count++;  
                    System.out.println();
                    if (!q.isEmpty()) {
                        q.add(null);
                    }
                }

                else {
                    if(count == k){
                    System.out.print(temp.data + " ");
                    }

                    if (temp.left != null) {
                        q.add(temp.left);
                    }
                    if (temp.right != null) {
                        q.add(temp.right);
                    }
                }
            }

        }

       
    }

    public static void main(String[] args) {
        int[] a = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        binarytree bt = new binarytree();
        Node root = bt.buildtree(a);
        // bt.preorder(root);
        // bt.levelordertreversal(root);
        bt.levelordertreversalatkth(root, 3);
    }
}
