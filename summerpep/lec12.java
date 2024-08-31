import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class lec12 {

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

        public static int heightoftree(Node root) {
            if (root == null) {
                return 0;
            }
            int hl = heightoftree(root.left);
            int hr = heightoftree(root.right);

            return Math.max(hl, hr)+1;
        }


        public static int countnodes(Node root){
            if(root == null){
                return 0;
            }
            int ln = countnodes(root.left);
            int rn = countnodes(root.right);

            return 1+ln+rn;
        }

        public static int sumn(Node root){
            if(root == null){
                return 0;
            }
            return root.data+sumn(root.left)+sumn(root.right);
        }



        public static int diameter(Node root){
            if(root == null){
                return 0;
            }
            int op1 = diameter(root.left);
            int op2 = diameter(root.right);
            int op3 = heightoftree(root.left)+heightoftree(root.right)+1;

            int ans = Math.max(op1,Math.max(op2,op3));
            return ans;
        }

        public static pair fastdiameter(Node root){
            if(root == null){
                pair p = new pair(0, 0);
                return p;
            }
            pair left = fastdiameter(root.left);
            pair right = fastdiameter(root.right);

            int op1 = left.first;
            int op2 = right.first;
            int op3 = left.second +right.second+1; 

            pair ans = new pair(Math.max(op1,Math.max(op2,op3)),Math.max(left.second,right.second));
            return ans;
        }


         

    }

    public static void main(String[] args) {
        int[] a = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        binarytree bt = new binarytree();
        Node root = bt.buildtree(a);
        // bt.preorder(root);
        bt.levelordertreversal(root);
        System.out.println(bt.heightoftree(root));
        System.out.println(bt.countnodes(root));
        System.out.println(bt.sumn(root));
        System.out.println(bt.diameter(root));
    }
}
