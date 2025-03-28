// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
//
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::cell::RefCell;
use std::rc::Rc;
impl Solution {
    pub fn is_same_tree(
        p: Option<Rc<RefCell<TreeNode>>>,
        q: Option<Rc<RefCell<TreeNode>>>,
    ) -> bool {
        if p == Option::None || q == Option::None {
            return p == q;
        }

        let p = p.as_ref().unwrap().borrow();
        let q = q.as_ref().unwrap().borrow();

        return p.val == q.val
            && Self::is_same_tree(p.left.clone(), q.left.clone())
            && Self::is_same_tree(p.right.clone(), q.right.clone());
    }
}
