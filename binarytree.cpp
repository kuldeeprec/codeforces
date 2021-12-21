#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define kuldeepyadav12 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<int>v;
struct node {
    int key;
    struct node *left, *right;
};
 
struct node* newNode(int item)
{
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* node, int key)
{
    if (node == NULL){
        return newNode(key);}
    if (key <node->key){
        node->left = insert(node->left, key);}
    else if (key >=node->key){
        node->right = insert(node->right, key);}
    return node;
}
void makearray(struct node* root)
{
    if (!root)
        return;
 
    queue<node*> q;
    q.push(root);
 
    while (!q.empty())
    {    
        int n = q.size();
        
        for(int i = 1; i <= n; i++)
        {
            node* temp = q.front();
            q.pop();
                 
           
            if (i == 1){
              v.push_back(temp->key);}
             
            
            if (temp->left != NULL){
                q.push(temp->left);}

            if (temp->right != NULL){
                q.push(temp->right);}
        }
    }
}

void palindrome()
{
    int n=v.size();
    int flag = 0;   
    for (int i = 0; i <= n / 2 && n != 0; i++) {

        if (v[i] != v[n - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        cout << "NOT PALINDROME";
        }
    else
       {
            for (int i = 0; i <n; i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        
       }
}

int main(){
    kuldeepyadav12
    struct node* root = NULL;

    int n,first,key;
    cin>>n>>first;
    root=insert(root,first);
    for (int i = 1; i < n; i++)
    {
        cin>>key;
        insert(root,key);
    }
    makearray(root);
    palindrome();
    v.clear();      
    return 0;
}