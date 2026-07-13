#include <bits/stdc++.h>
using namespace std;
class Tree{
public:
    int val;
    vector<Tree*>children;
    Tree(int val){
    this->val=val;
    }
};
void print(Tree* root){
    if(root==NULL)return;
    cout<<root->val<<"->";
    for(auto x: root->children){
        cout<<x->val<<" ";
    }
    cout<<endl;
    for(auto a: root->children){
        print(a);
    }
}
int main() {
	Tree* root=new Tree(9);
	
	Tree* c1=new Tree(32);
	Tree* c2=new Tree(16);
	//Tree* c3=new Tree(6);
    
    root->children.push_back(c1);
    root->children.push_back(c2);
    //root->children.push_back(c3);
    
    	Tree* d1=new Tree(6);
    	c1->children.push_back(d1);
    	
    		Tree* d2=new Tree(3);
    			Tree* d3=new Tree(4);
    			c1->children.push_back(d2);
    			c1->children.push_back(d3);
    			
    				Tree* d4=new Tree(5);
    				c1->children.push_back(d4);
    				
    				Tree* d5=new Tree(2);
    				c2->children.push_back(d5);
    				
    				Tree* d6=new Tree(3);
    				d5->children.push_back(d6);
    				
    					Tree* d7=new Tree(4);
    				d5->children.push_back(d7);
    				
    				print(root);
}
    				
//Binary Tree
#include <bits/stdc++.h>
using namespace std;
class Tree{
public:
    int val;
    Tree*l;
    Tree*r;
    Tree(int val){
        this->val=val;
        l=NULL;
        r=NULL;
    }
    
};


int main() {
    Tree* root= new Tree(5);
    Tree* c1=new Tree(7);
    Tree* c2=new Tree(17);
    Tree* c3=new Tree(3);
    Tree* c4=new Tree(6);
    Tree* c5=new Tree(20);
    Tree* c6=new Tree(13);
    Tree* c7=new Tree(15);
    Tree* c8=new Tree(13);
    Tree* c9=new Tree(13);
    
    root->l=c1;
    root->r=c2;
    c1->l=c3;
    c2->l=c4;
    c2->r=c5;
    c3->l=c6;
    c3->r=c7;
    c4->l=c8;
    c5->l=c9;
    
    
}
//Binary Tree
#include <bits/stdc++.h>
using namespace std;
class Tree{
public:
    int val;
    Tree*l;
    Tree*r;
    Tree(int val){
        this->val=val;
        l=NULL;
        r=NULL;
    }
    
};


int main() {
    Tree* root= new Tree(5);
    root->l=new Tree(7);
    root->l->l=new Tree(3);
    root->l->l->l=new Tree(13);
    
    root->r=new Tree(17);
    root->r->l=new Tree(6);
    root->r->l->l=new Tree(13);
    root->r->r->=new Tree(20);
    root->r->r->l=new Tree(13);
    
    
    
    
    
    
}
    				
    				
    				
    				

    				
    				
    				
    				
    				
    				
    				
