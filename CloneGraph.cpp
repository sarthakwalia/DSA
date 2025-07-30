/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* node, Node* copy, vector<Node*> &vis){
        vis[node->val] = copy;
        for(Node* nbr: node->neighbors){
            if(vis[nbr->val]==nullptr){
                Node* nbrCopy = new Node(nbr->val);
                (copy->neighbors).push_back(nbrCopy);
                dfs(nbr, nbrCopy, vis);
            }
            else{
                (copy->neighbors).push_back(vis[nbr->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==nullptr) return nullptr;
        Node* copy = new Node(node->val);
        vector<Node*> vis(101, nullptr);
        dfs(node, copy, vis);
        return copy;
    }
};