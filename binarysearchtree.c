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
				 search(q->right,num)
			 }
			 else{
				 search(q->left,num);
			 }
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
	 return; 
	 else{
	 
	if(num>temp->data)
	{
		if(temp->ptr->left==NULL);
		{
	ptr=(node*)malloc(sizeof(node));
	ptr->data=num;		
	 ptr->right=NULL;
	 ptr->left=NULL;
	 temp->right=ptr;
	 return;
	}
		else {
	temp=temp->right;
	insert(&temp,num);
}
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
}
 void delete(node **q,int num)
 {
	node *temp;
	
	 if(temp==NULL){
		 printf("the given no is not found");
		 return;
	 }
	 else{
		 if(q->data==num){
			if(temp->==NULL&&temp->right=NULL)
			free(temp)
			 
		 return ;
		 else{
			 if(num>q->data)
			 {
				 delete(q->right,num)
			 }
			 else{
				 delete(q->left,num);
			 }
		 }
	 }
 }
int main()
{
	node *root;
	root=NULL;
	insert(&root,5);
	insert(&root,6);
	insert(&root,7);
	traverse_inorder(root);
	if(search(root,8)==1)
	{
		printf("%dthe num %d is present in the tree",7);
		else
		printf("%dthe num %d is not found",7);
		return 0;
	}
}
