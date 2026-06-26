/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string serialize(TreeNode* root) {
        string s;
        dfs(root, s);
        return s;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return build(ss);
    }

private:
    void dfs(TreeNode* root, string& s) {
        if (!root) {
            s += "#,";
            return;
        }
        s += to_string(root->val) + ",";
        dfs(root->left, s);
        dfs(root->right, s);
    }

    TreeNode* build(stringstream& ss) {
        string val;
        getline(ss, val, ',');
        if (val == "#")
            return nullptr;
        TreeNode* root = new TreeNode(stoi(val));
        root->left = build(ss);
        root->right = build(ss);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));