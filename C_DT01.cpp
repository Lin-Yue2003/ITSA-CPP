/*
    寫一個程式，用"樹"計算一個算式。考慮這個算式4 + x * 7。我們會用下面的遞迴定義來表示此算式樹。
    首先，一個正整數或是變數是一個算式樹。再來，如果運算子是'+', '-', '*', 或 '/'的其中之一，
    並且左樹和右樹都是算式樹，則(運算子 左樹 右樹 )也是一個算式樹。按照此定義，
    我們可以用( + 4 ( * x 7 ) )來表示先前的算式。現在給定一個算式樹，以及其中所含的變數的值，
    請計算整個算式的值。
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;
struct node{
    string str;
    struct node* left_tree;
    struct node* right_tree;

    node(string str): str(str),left_tree(nullptr), right_tree(nullptr){}
};
void insert(struct node** root,string str){
    struct node* new_node = new node(str);
    if (root == nullptr){
        (*root) = new_node;
    }else{
        if ((*root)->left_tree == nullptr)
            (*root)->left_tree = new_node;
        else if ((*root)->right_tree == nullptr)
            (*root)->right_tree = new_node;
        else 
            delete new_node;  
    }
}
void delete_tree(struct node* &root){
    if (root == nullptr) return;
    delete_tree(root->left_tree);
    delete_tree(root->right_tree);
    delete root;
    root = nullptr; 
}
struct node* build_tree(vector<string>& preorder, int& index){
    if (index>=preorder.size()||index<0) return nullptr;
    string str = preorder[index];
    if (str == "("||str == ")"){
        index++; return build_tree(preorder,index);
    }
    struct node* root = new node(str);
    index++;
    if (str=="+"||str=="-"||str=="*"||str=="/"){
        root->left_tree = build_tree(preorder,index);
        root->right_tree = build_tree(preorder,index);
    }
    return root;
}
int inorder(map<string,int> var,struct node* root){
    if (root == nullptr) return 0;
    int sum = 0,left_sum = 0, right_sum = 0;
    left_sum = inorder(var,root->left_tree);
    right_sum = inorder(var,root->right_tree);
    if (root->str == "+") sum = left_sum+right_sum;
    else if (root->str == "-") sum = left_sum-right_sum;
    else if (root->str == "*") sum = left_sum*right_sum;
    else if (root->str == "/") sum = left_sum/right_sum;
    else{
        if (isdigit(root->str[0]))
            sum = stoi(root->str);
        else sum = var[root->str];
    }
    return sum;
}
int main(void){
    struct node *tree = nullptr;
    vector<string> preorder;
    string str;
    getline(cin,str);
    stringstream ss(str);
    str.clear();
    while (ss>>str){
        preorder.push_back(str);
    }
    map<string,int> var; 
    while (cin >> str){
        int num;
        string temp;
        cin >> temp;
        cin >> num;
        var.insert({str,num});
    }
    int index = 0;
    tree = build_tree(preorder,index);
    cout << inorder(var,tree) << endl;
    delete_tree(tree);
    return 0;
}