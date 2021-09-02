#include<stdio.h>
#include<stdlib.h>
struct circular
{
    char c;
    struct circular *next;
};
struct circular *f=NULL,*l=NULL;//Assigning first and last nodes to NULL
void insert(char item)
{
    struct circular *temp=(struct circular *)malloc(sizeof(struct circular));
    if(f==NULL)//Here checking for list empty or not
    {
        temp->c=item;
        temp->next=f;
        f=l=temp;
        
    }
    else
    {
        temp->c=item;
        temp->next=f;
        l->next=temp;
        l=temp;
    }
}
void display()
{
    struct circular *temp=f;
    do
    {
        printf("%c ",temp->c);
        temp=temp->next;
    }while(temp!=f);
}

void vowels()
{
    int x=0;
    struct circular *temp=f;
    do
    {
        x++;
        if(temp->c=='a'|| temp->c=='e'|| temp->c=='i'|| temp->c=='o'|| temp->c=='u')
        {
            
            printf("%c->%d->%p\n",temp->c,x,temp);
        }
        temp=temp->next;
    }while(temp!=f);
    
}



int main()
{
    char item='a';
    int i;
    for(i=1;i<27;i++)
    {
        insert(item);
        item++;
    }
    display();
    printf("\n");
    vowels();
    return 0;
    
    
}
