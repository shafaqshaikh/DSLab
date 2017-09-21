/*Description:Implement binary search tree
 * learner:shaikh shafaque naushad
 */
 #include<stdio.h>
 #include<stdlib.h>
 
 typedef struct bst{
	 int data;
	 struct bst *left,*right
 }node;
 int search(node *q,int num)
 {
	
	 if(q==NULL)
	 return -1;
	 else{
		 if(q->data==num)
		 return 1;
		 else{
			 if(num>q->data)
			 {
				 search(q->right,num);
			 }
		 
			 else{
				 search(q->left,num);
			 }
		 }
	 }
		 
 void traverse_inorder(node *q)
 {
	 if(q!=NULL){
	 traverse_inorder(q->left);
	 printf("%d\t",q->data);
	 traverse_inorder(q->right);
 
}
 void insert(node **r,int num){
	 node *temp,*ptr;
	 temp=*r;
	 
	 if(temp==NULL)
	 {
	ptr=(node*)malloc(sizeof(node));
	ptr->data=num;		
	 ptr->right=NULL;
	 ptr->left=NULL;
	 temp->right=ptr;
	 *r=ptr;
 } 
	 else{
	 
	if(num>temp->data)
		{
			insert(&temp->right,num);
		}
		else 
		{
		insert(&temp->right,num);
	}
	}
}
		else {
	temp=temp->right;
	insert(&temp,num);
}
else{
	if(temp->left==NULL){
		ptr=(node*)malloc(sizeof(node));
		ptr->data=num;
		ptr->right=NULL;
		ptr->left=NULL;
		temp->left=ptr;
		return;
	}
}
}

 
	 void search_node(node **x,node *root, node **parent, node **xsucc, int num,int *f)
 {
	 node *temp;
	 temp==root;
	 if(temp==NULL)
	 return;
	 if(temp->data==num)
	 {
		 *f=1;
		 *x=temp;
		 return;
	 }
	 while(temp!=NULL)
	 {
	 if(num>temp->data)
	 temp=temp->right;
	 else
	 temp=temp->left;
 }
	 
 }
 void delete(node **r, intx)
 {
	 node *temp, *parent, *xsucc;
	 int f=0;
	 parent=NULL;x=NULL xsucc=NULL;
	 temp=*r;
	 search_node(x,temp,&parent,&xsucc,&f);
	 if(f==0){
		 PRINTF("\n the element %d is not found",x);
		 return;
	 }
	 if(x->left==NULL && x->right==NULL)
	 {
		 if(x->data>parent->data)
		 parent->right=NULL;
		 else
		 parent->left=NULL;
		 
	 }
	 else if(x->left!=NULL && x->right==NULL)
	 {
		 if(x->data>parent->data)
		 parent->right=x->left;
		 else
		 parent->left=x->left;
		 
	 }
	 else if(x->right!=NULL && x->left==NULL)
	 {
		 if(x->data>parent->data)
		 parent->right=x->right;
		 else
		 parent->left=x->right;
		 
	}
	else if(x->left!=NULL && x->right!=NULL)
	{
		parent=x;
		xsucc=x->right;
		while(xsucc->left!=NULL)
		 {
			 parent=xsucc;
			 xsucc=xsucc->left;
		 }
		if(xsucc->data>x->data)
		parent->right=NULL;
		else
		 parent->left=NULL;
		 x->data=xsucc->data;
		 x=xsucc;
		 
	}
	free(x);
}	 	  
 
int main()
{
	node *root=NULL;
    insert(&root,20);
    insert(&root,15);
    insert(&root,13);
    insert(&root,17);
    insert(&root,16);
    insert(&root,19);
    insert(&root,18);
    insert(&root,25);
    insert(&root,26);
    
    
    traverse_inorder(root);
    if(search_bst(root,30)==1)
    {
    printf("\n the number is found");
    else
    printf("\n the number is not found");
    delete(&root,25);
    tarverse_inorder(root);
    return 0;
}
}
    

