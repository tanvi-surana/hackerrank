/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
   
   node* new_node=root;
    int i=0;
   while(s[i]!='\0')
   {
       if(s[i]=='0')
       {
           root=root->left;
           if(root->data!='\0')
           {
               printf("%c",root->data);
               root=new_node;
           }
           i++;
       }
       else
       {
          root=root->right;
           if(root->data!='\0')
           {
               printf("%c",root->data);
               root=new_node;
           }
           i++; 
       }    
   }    
    
    
}