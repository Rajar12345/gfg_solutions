public static boolean nodeToRootPath(Node root, int target, ArrayList<Integer> ans) {
       if(root == null)
           return false;

       if(root.data == target)
           return true;

       boolean res = nodeToRootPath(root.left, target, ans) || nodeToRootPath(root.right, target, ans);
       if(res)
           ans.add(root.data);
       return res;
   }
   public static ArrayList<Integer> Ancestors(Node root, int target) {
       ArrayList<Integer> ans = new ArrayList<>();
       nodeToRootPath(root, target, ans);
       return ans;   
   }

