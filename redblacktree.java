import java.io.*;

class redblacktree {
    static class Node{
        int data;
        boolean flag;      // true->black, false->red
        Node left;
        Node right;
        Node(int d){
            data= d;
            left = null;
             right = null;
        }
    }
    public static Node leftToLeftRotation(Node root){
        if(root.left!=null){
            Node temp = root.left;
            if(temp.right==null){
                temp.right = root;
                root.left =null;
                root = temp;
            }
            else{   
                Node r = temp.right;
                temp.right = root;
                root.left = r;
                root = temp;
            }
        }
        return root;
    }
    public static Node rightToRightRotation(Node root){
        if(root.right!=null){
            Node temp = root.right;
            if(temp.left==null){
                temp.left = root;
                root.right = null;
                root = temp;
            }
            else{
                Node l = temp.left;
                temp.left = root ;
                root.right = l;
                root= temp;
            }
        }
        return root;
    }
    
    public static Node leftRightRotation(Node root){
        Node temp = root.left;
        if(temp.right!=null){
            temp = rightToRightRotation(temp);      // left rotation
        }
        root = leftToLeftRotation(root);            // RIGHT ROTATION
        return root;
    }
    
    public static Node rightLeftRotation(Node root){
        Node temp = root.right;
        if(temp.left!=null){
            temp = leftToLeftRotation(temp);
        }
        root = rightToRightRotation(root);
        return root;
    }
//    public static int balancedvector
    public static Node insert(Node root,int k){
        if(root==null){
            Node temp = new Node(k);
        }
     else                                                                                                                           
     {
    Node temp = root;
    int data = k;
    if(root.data<k){
        if( root.left == null){
        root.left.data = data; 
        System.out.print(root.data+" ");
      }
      else if(root.right == null){
          root.right.data = data;
          System.out.print(root.data+" ");
      }
     }
     }
     return root;
    }
    
	public static void main (String[] args) {
        Node root = null ;
        root =insert(root,1);
        root =insert(root,5);
        root =insert(root,3);
        root =insert(root,4);
        root =insert(root,2);
       root = insert(root,6);
	}
}