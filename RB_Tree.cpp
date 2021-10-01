#include<iostream>
using namespace std;
struct node{ //structur of a node.
int data;
node *left;
node *right;
char color;
node *parent;
node(int val)

{
data=val;
left=NULL;
right=NULL;
parent=NULL;
color='R';
}
};
node *Root=NULL;
bool rl=false,ll=false,lr=false,rr=false; //flags to be used in insertion
void inorder(node *root) //function for inorder traversal.
{
if(root==NULL)
return;
inorder(root->left);
cout<<root->data<<root->color<<" ";
inorder(root->right);
}

node *leftRotate(node *Node) //for deletion
{
node *x = Node->right;
if(Node->parent->left==Node)
Node->parent->left=x;
else
Node->parent->right=x;
node *y = x->left;
x->left = Node;
Node->right = y;
Node->parent = x;

if(y!=NULL)
y->parent = Node;
return Node;
}

node *rightRotate(node *Node) //for deletion
{
node *x = Node->left;
if(Node->parent->left==Node)
Node->parent->left=x;
else
Node->parent->right=x;
node *y = x->right;
x->right = Node;
Node->left = y;
Node->parent = x;
if(y!=NULL)
y->parent = Node;
return Node;
}

node *sibling(node *root) // function to find sibling of the node.
{
if(root->parent==NULL)
return NULL;
if(root->parent->right==root)
return root->parent->left;
else
return root->parent->right;
}

void fixDoubleBlack(node *x) { //function to fix douuble black in deletion.
if (x == Root)
return;

node *s = sibling(x), *p= x->parent;
if (s == NULL) {
fixDoubleBlack(p);
} else {
if (s->color == 'R') //if sibling is red.
{
p->color = 'R';
s->color = 'B';
if (s->parent->left==s) {
p=rightRotate(p);
} else {
p=leftRotate(p);
}
cout<<endl;
fixDoubleBlack(x);
}
else //sibling is black
{
if ((x->left != NULL&&x->left->color == 'R')||(x->right != NULL &&x->right->color

== 'R'))

//condition to check if any child is red
{
if (s->left != NULL and s->left->color == 'R') {
if (s->parent->left==s) { //near child is red
s->left->color = s->color;

s->color = p->color;
p=rightRotate(p);
} else {
s->left->color = p->color;
s=rightRotate(s);
p=leftRotate(p);
}
} else {
if (s->parent->left==s) { //far child is red
s->right->color = p->color;
s=leftRotate(s);
p=rightRotate(p);
} else {
s->right->color = s->color;
s->color = p->color;
p=leftRotate(p);
}
}
p->color = 'B';
} else { //both child are black.
s->color = 'R';
if (p->color == 'B')
fixDoubleBlack(p);
else
p->color = 'B';
}
}
}
return;
}

node *successor(node *v) { //function to find successor element to replace internal node in deletion.
node *temp = v;
while (temp->left != NULL)
temp = temp->left;
return temp;
}
node *search(node *root,int val) //function to search the node for deletion.
{
if(root==NULL)
return NULL;
if(val>root->data)
node *v=search(root->right,val);
else if(val<root->data)
node *v=search(root->left,val);
else if(val==root->data)
return root;

}

node *rotateLeft(node *Node) //for insertion
{
node *x = Node->right;
node *y = x->left;
x->left = Node;
Node->right = y;
Node->parent = x; // parent resetting is also important.
if(y!=NULL)
y->parent = Node;

return x;
}

node *rotateRight(node *Node) //for insertion
{
node *x = Node->left;
node *y = x->right;
x->right = Node;
Node->left = y;
Node->parent = x;
if(y!=NULL)
y->parent = Node;
return x;
}

node *insertHelp(node* root,int val) //helper function for insertion.
{
if(root==NULL)
{
node *temp=new node(val);
return temp;
}
if(val>root->data)
{
root->right=insertHelp(root->right,val);
root->right->parent=root;
}
else if(val<root->data)
{
root->left=insertHelp(root->left,val);

root->left->parent=root;
}

if(ll) // left rotation.
{
root=rotateLeft(root);
root->color = 'B';
root->left->color = 'R';
ll = false;
}
else if(rr) // Right rotation
{
root=rotateRight(root);
root->color = 'B';
root->right->color = 'R';
rr = false;
}
else if(rl) // Right rotation then left rotation.
{
root->right = rotateRight(root->right);
root->right->parent = root;
root = rotateLeft(root);
root->color = 'B';
root->left->color = 'R';
rl = false;
}
else if(lr) // left rotation then right rotation.
{
root->left = rotateLeft(root->left);
root->left->parent = root;

root = rotateRight(root);
root->color = 'B';
root->right->color = 'R';
lr = false;
}

if((root->color=='R')&&(root->right->color=='R'||root->left->color=='R')) //condition to check red-red conflict.
{
//settting up flag for rotation.
if(root->parent->right==root)
{
if(sibling(root)==NULL||sibling(root)->color=='B')
{

if(root->left!=NULL && root->left->color=='R')

rl = true;
else if(root->right!=NULL && root->right->color=='R')
ll = true;
}
else
{
sibling(root)->color='B';
root->color='B';
if(root->parent!=Root)
root->parent->color='R';
}
}

else
{
if(sibling(root)==NULL||sibling(root)->color=='B')
{
if(root->left!=NULL && root->left->color=='R')

rr = true;
else if(root->right!=NULL && root->right->color=='R')
lr = true;
}
else
{
sibling(root)->color='B';
root->color='B';
if(root->parent!=Root)
root->parent->color='R';
}
}
}

return root;
}
void insert(int val) //function to insert element.
{
if(Root==NULL)
{
Root=new node(val);
Root->color='B'; //if node is ROOT then color it black.
}
else
Root=insertHelp(Root,val);

}

void deleteHelp(node* v) //helper function for deletion.
{
node* u;
if(v->left!=NULL&&v->right!=NULL) //case of internal node.
{
u=successor(v->right);
v->data=u->data;
deleteHelp(u);
return;
}
else
{
if(v->left==NULL&&v->right==NULL)
u=NULL;
else if(v->left==NULL)
u=v->right;
else if(v->right==NULL)
u=v->left;
if(u==NULL) //leaf node
{
if(v==Root)
Root=NULL;
else
{
if(v->color=='B')
fixDoubleBlack(v);

if (v->parent->left==v)
v->parent->left = NULL;
else
v->parent->right = NULL;
}
delete v;
return;
}

if (v->left == NULL or v->right == NULL) { // v has 1 child
if (v == Root) {
v->data= u->data;
v->left = v->right = NULL;
delete u;
} else {
if (v->parent->left==v) {
v->parent->left = u;
} else {
v->parent->right = u;
}
//delete v;
u->parent =v->parent;
if ((u==NULL||u->color=='B')&&v->color=='B') {// u and v both black => fix double black at u
fixDoubleBlack(u);
} else {// u or v red => color u black
u->color = 'B';
}
}
return;

}
}
}

void Delete(int val) //function to delete element.
{
if(Root==NULL)
{
cout<<"TREE IS EMPTY!!!\n";
return;
}
node*v=search(Root,val); //search node to be deleted.
if(v==NULL)
{
cout<<"ELEMENT NOT FOUND!!!\n";
return;
}
deleteHelp(v);

}

int main()
{
cout<<"How many elements do you want to insert?\n";
int n;
cin>>n;
cout<<"Enter "<<n<<" Elements\n";
for(int i=0;i<n;i++)
{

int val;
cin>>val;
insert(val);
}
cout<<"\nInorder traversal\n";
inorder(Root);
cout<<"\n";
while(1)
{
cout<<"\nEnter value to delete.......or press -1 to exit";
int val;
cin>>val;
if(val==-1)
exit(0);
Delete(val);
cout<<"Inorder traversal\n";
inorder(Root);
}
}