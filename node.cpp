Un

struct Node{
Node * next;
int data;
}

void print(){

Node* temp= head;
while(temp!=NULL)
{

cout<<temp->data<<"->";
temp=temp->next;
}

cout<<endl;
}

Node* get_new_node(int data ){




void add_last(int data){
Node* new_node=
