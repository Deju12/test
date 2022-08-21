#include <iostream>

#include <stdlib.h>
using namespace std;
void clear(){
 system("cls");
}
/* , , , , , , , , , , , , , , , , , ,
                                     ,
                                     ,
linked list implementation of stack  ,
                                     ,
                                     ,
                                     */

struct stackl{
int data;
stackl*nxt;
};
stackl*stackll=NULL;
stackl*headl=NULL;
stackl*topl=NULL;
/* , , , , , , , , ,
                   ,
                   ,
 new data adding   ,
    LLI STACK      ,
                   ,
                   */
stackl*adddata(){
stackl*st=new stackl;
cout<<"enter data : ";
cin>>st->data;
st->nxt=NULL;
return st;
}
/* , , , , , , , , ,
                   ,
                   ,
 push entered data ,
by linked list     ,
implementation     ,
                   */
void pushl(){
if(headl==NULL)
headl=stackll=topl=adddata();
else{
stackl*temp=adddata();
topl->nxt=temp;
topl=temp;
}
}
/* , , , , , , , ,
 display  data   ,
                 ,
 in LLIS         ,
                 ,
                 ,
                 */
void displayll(){
if(topl==NULL)
cout<<"\n\tNo data\n";
else{
stackl*temp=headl;
cout<<"[ ";
while(temp!=NULL){
cout<<temp->data<<",";
temp=temp->nxt;
}cout<<" ]";
}
}
/* , , , , , , , , ,
                   ,
                   ,
 pop or delete     ,
   data in LLIS    ,
                   ,
                   */
void popl(){
if(topl==NULL)
cout<<"\n\tunderflow\n";
else if(topl==stackll){
stackl*temp=headl;
topl=headl=stackll=temp->nxt;
delete temp;
cout<<"\n\tDeleted\n";
}
else{
stackl*temp=headl;
while(temp->nxt!=topl){
temp=temp->nxt;
}
temp->nxt=topl->nxt;
topl=temp;
cout<<"\n\tDeleted\n";
}
}
/* , , , , , , , , , , , , , , , ,
                                 ,
                                 ,
 array implementation of stack   ,
                                 ,
                                 ,
                                 */







int top= -1;
int stack[10];
int size=10;
/* , , , , , , , , ,
                   ,
                   ,
 entering data     ,
   in array        ,
   implementation  ,
                   */
int adddatastack(){
cout<<"\nplease enter data: ";
cin>>stack[top];
return stack[top];
}
/* , , , , , , , , ,
                   ,
                   ,
 push or add data  ,
 in AIS            ,
                   ,
                   */
void push(){
if(top==size-1)
cout<<"\nover flow";
else {
top++;
stack[top]=adddatastack();
clear();
 cout<<"\n\tDone\n";
}
}
/* , , , , , , , , ,2
                   ,
                   ,
 pop or delete data,
  in AIS           ,
                   ,
                   */
void pop(){
if(top==-1)
cout<<"\n\tunderflow\n";
else{
int temp=stack[top];
stack[top]=-1;
top--;
cout<<"\n\tDeleted\n";

}
}
/* , , , , , , , , ,
                   ,
                   ,
display entered    ,
    data in ASI    ,
                   ,
                   */
void displayarraystack(){
if(top==-1)
cout<<"\n no data";
else {
int temp=top;
while(temp!=-1){
cout<<"\n data at "<<temp<<": "<<stack[temp];
temp--;
}cout<<"\n";
}
}
/* , , , , , , , , , , , , , , , ,
                                 ,
                                 ,
 doubly linked list            ,
                                 ,
                                 ,
                                 */

struct bank{
int bacoun;
char costname[20];
bank*nxt ;
bank*prev;
};

bank*start=NULL, *tail=NULL;

/* , , , , , , , , ,
                   ,
                   ,
adding data by     ,
    DLL            ,
                   ,
                   */
bank*creatcostum(){
bank*cos=new bank;
cout<<"\nplease enter costumer name: ";
cin>>cos->costname;
cout<<"please enter account number : ";
cin>>cos->bacoun;
cos->nxt =cos->prev=NULL;
return cos;
}
/* , , , , , , , , ,
                   ,
                   ,
add data at front  ,
    by DLL         ,
                   ,
                   */
void add_costumer_firs(){
bank*cos=creatcostum();
if(start==NULL){
start=tail=cos;
}
else{
start->prev=cos;
cos->nxt =start;
start=cos;
}
}
/* , , , , , , , , ,
                   ,
                   ,
add data at end    ,
    by DLL         ,
                   ,
                   */
void add_costumer_ends(){
bank*cos=creatcostum();
if(start==NULL){
start=tail=cos;
}
else
tail->nxt=cos;
cos->prev=tail;
tail=cos;
}
/* , , , , , , , , ,
                   ,
                   ,
display data in    ,
    DLL            ,
                   ,
                   */
void displaydl(){
bank*temp=start;
if(temp==NULL)
cout<<"\n\tNo data\n";
else{
while(temp!=NULL){
cout<<"\nName : "<<temp->costname<<endl;
cout<<"Account number : "<<temp->bacoun<<endl;
temp=temp->nxt;
}
}
}
/* , , , , , , , , , , , , , , , ,
                                 ,
                                 ,
 singly linked list              ,
                                 ,
                                 ,
                                 */
struct node{
char name[20];
int accno;
node *nxt ;
};

struct node *head = NULL;

/* , , , , , , , , ,
                   ,
                   ,
entering data in   ,
    SLL            ,
                   ,
                   */
node*addnode(){
node*st = new node;
cout << "\nPlease enter costumer name : ";
cin >> st->name;
cout << "Please enter account number : ";
cin >> st->accno;
st->nxt = NULL;
return st;
}
/* , , , , , , , , ,
                   ,
                   ,
add data at end    ,
    by SLL         ,
                   ,
                   */
void add_node_at_end (){
node *temp;
node*st=addnode();
if (head == NULL)
head =st;
else
{ temp = head;
while (temp->nxt != NULL)
{ temp = temp->nxt;
}
temp->nxt = st;
} }
/* , , , , , , , , ,
                   ,
                   ,
display data       ,
         in SLL    ,
                   ,
                   */
void display(){
node *temp;
temp = head;
do
{ if (temp == NULL)
cout << "\tNo data" << endl;
else
{
cout << "\n name : " << temp->name << endl;
cout << "account number : " << temp->accno << endl;
cout << endl;
temp = temp->nxt;
}
} while (temp != NULL);
}
/* , , , , , , , , ,
                   ,
                   ,
delete data from   ,
    front by SLL   ,
                   ,
                   */
void delete_start_node(){
node *temp;
if (head == NULL)
cout << "\n\tno costumer\n" << endl;
else{
temp = head;
head = head->nxt;
delete temp;
cout<<"\n\tDeleted\n";
}}
/* , , , , , , , , ,
                   ,
                   ,
delete data from   ,
    end by SLL     ,
                   ,
                   */
void delete_end_node(){
node *temp1, *temp2;
if (head == NULL)
cout << "\n\tno costumer\n" << endl;
else if(head->nxt==NULL){
    temp1=head;
    head=temp1->nxt;
    cout<<"\n\tDeleted\n";
}
    else
      {
    temp1 = head;
while (temp1->nxt != NULL)
{ temp2 = temp1;
temp1 = temp1->nxt;
}
temp2->nxt=temp1->nxt;
cout<<"\n\tDeleted\n";
} }
/* , , , , , , , , ,
                   ,
                   ,
add data at front  ,
    by SLL         ,
                   ,
                   */
void add_node_first(){
if (head == NULL)
head = addnode();
else{
node*st=addnode();
st->nxt=head;
head=st;
}
}
int main(){
cout<< "\t\t\tWell come to 4th year computer engineering ";
cout<<"\n\t\t\t Data structure and algorithm assignment";
int x;
int r=1;
while(1){
r=1;
cout<<"\npleas select one data structure\n";
cout<<"\n\t1.Linked list\n\t2.Stack\n";
cout << "\nPlease enter your choice:";
cin >>x;
clear();
switch(x)
{
    //after linked list
 case 1:
 while(r==1){
cout<<"\n\t\t\t LINKED LIST\n\n";
 cout<<"\n\t1.Singly linked list";
 cout<<"\n\t2.Doubly linked list\n\t3.back\n";
 cout<<"\npleas enter your choice : ";
 cin>>x;
 clear();
 switch(x){
     //after singly linked list
 case 1:
 while(r==1){
        cout<<"\n\t\t\tSINGLY LINKED LIST\n\n";
 cout << "\n\t1.Add costumer at end\n\t2.Display the list\n";
 cout<<"\t3.Delete costumer from front\n\t4.Delete costumer from end";
 cout<<"\n\t5.Add costumer at front\n\t6.back"<<endl;
 cout<<"\npleas enter your choice : ";
 cin>>x;
 clear();
 switch(x){
 case 1:add_node_at_end();
 clear();
 cout<<"\n\tDone\n";break;
 case 2: cout<<"\n\t\tList\n";
 display(); cout<<"\n\t\tEnd\n";break;
 case 3:delete_start_node();
 break;
case 4:delete_end_node();
 break;
case 5:add_node_first();
clear();
 cout<<"\nDone\n";break;
 case 6:r=0; break;
 default:cout <<"\n\nInvalid choice: Please try again.\n";
 }
}r=1;
 break;
 case 2:
     //after doubly linked list
 while(r==1){
        cout<<"\n\t\t\t DOUBLY LINKED LIST\n\n";
 cout<<"\n\t1:Add costumer at front\n";
 cout<<"\t2:Add costumer at end \n\t3:Display the list\n\t4.Back\n";
 cout<<"\npleas enter your choice : ";
 cin>>x;
 clear();
 switch(x){
 case 1:add_costumer_firs();
 clear();
 cout<<"\n\tDone\n";break;
 case 2:add_costumer_ends();
 clear();
 cout<<"\n\tDone\n";break;
 case 3:cout<<"\n\t\tList\n";
 displaydl(); cout<<"\n\t\tEnd\n";break;
 case 4:r=0;break;
 default:cout <<"\n\nInvalid choice: Please try again.\n";
 }
} r=1;
 break;
 case 3:r=0;break;
 default:cout <<"\n\nInvalid choice: Please try again.\n";
 }
 }r=1;
 break;
 case 2:
     //after stack
 while(r==1){
        cout<<"\n\t\t\t STACK\n\n";
 cout<<"\n\t1.Linked list implementation of stack\n";
 cout<<"\t2.Array implementation of stack\n\t3.back\n";
 cout<<"\npleas enter your choice : ";
 cin>>x;
 clear();
 switch(x){
 case 1:
     //after linked list implementation of stack
 while(r==1){
    cout<<"\n\t\t LINKED LIST IMPLEMENTATION OF STACK\n\n";
 cout<<"\n\t1.push data\n\t2.pop data\n";
cout<<"\t3.display data\n\t4.back\n";
 cout<<"\npleas enter your choice : ";
 cin>>x;
 clear();
switch(x){
 case 1:pushl();
 clear();
 cout<<"\n\tDone\n";break;
 case 3:cout<<"\n\t\tList\n";
 displayll();break;
case 2:popl();break;
 case 4:r=0;break;
 default:cout <<"\n\nInvalid choice: Please try again.\n";
 }
 } r=1;
 break;
 case 2:
     //after array implementation of stack
 while(r==1){
        cout<<"\n\t\t\t ARRAY IMPLEMENTATION OF STACK\n\n";
 cout<<"\n\t1.push data\n\t2.pop data\n\t3.display\n\t4.back\n";
cout<<"\npleas enter your choice : ";
cin>>x;
clear();
switch(x){
 case 1:push();
break;
 case 2:pop();break;
 case 3:cout<<"\n\t\tList\n";
 displayarraystack();break;
case 4:r=0;break;
 default:cout <<"\n\nInvalid choice: Please try again.\n";
 }
 } r=1; break;
 case 3:r=0;break;
 default:cout <<"\n\nInvalid choice: Please try again.\n";
 }
 }r=1;
 break;
default:cout <<"\n\nInvalid choice: Please try again.\n";
}
}
return 0;
}
