//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"
int main(int argc, const char * argv[]) 
{
    
    int z=5;
    struct node a,b,d,c,*head;
    typedef struct node NODE;
    a.value = z;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    
    //printf("%d\n", head ->value ); //what value for 5
    //printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    c.value=b.value;
    b.next=&c;
    c.next=NULL;
    c.value=head->next->value+3;
    //printf("%d\n", head->next->next->value ); //what value for 5
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)   
*/
    d.next=&a;
    d.value=head->value-3;
    head=&d;
    printf("d=%d\n",head->value);//value = 2
    printf("a=%d\n",head->next->value);
    printf("b=%d\n",head->next->next->value);
    printf("c=%d\n",head->next->next->next->value);

    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
    //  Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++)
        {
            printf("%3d",tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
        printf("\n");
    
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       tmp=head;
         while(1){
            if(tmp->next==NULL)
            {
                 printf("%3d",tmp->value);
                break;
            }
            printf("%3d",tmp->value);
            tmp=tmp->next;
           // What is missing???
        }
            printf("\n");
 //  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
    int x[]={2,5,8,11};
    head=(NodePtr)malloc(sizeof(NODE));
    tmp=head;
    for(int j=0;j<n;j++)
    {
        tmp->value =x[j];
        tmp->next= (NodePtr)malloc(sizeof(NODE));
        tmp=tmp->next;    
}   
tmp->next=NULL;
    // Exercise VI Free all node !!
         //use a loop to help
    printf("\n\n");
    while (head)
    {
        tmp=head;
        head = head->next;
        printf("%d",tmp->value);
        free(tmp);
        printf("%3d\n",tmp->value);
    }
    free(head);
     
    
    return 0;
    

}
