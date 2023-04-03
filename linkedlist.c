#include "linkedList.h"

#define null (void*)0
int counter =2;

void create_new_empoyee(node_t *head_ptr)
{

    node_t *new_empoyee,*temp;
    temp=head_ptr;

    new_empoyee =(node_t*)malloc(sizeof(node_t));
    if(temp==NULL)
    {
        printf("please enter the name of the empoyee  \n");
        fflush(stdin);
        gets(new_empoyee->name);

        printf("please enter the salary of the empoyee  \n");
        scanf("%d",&(new_empoyee->salary));

        printf("please enter the titel of the empoyee  \n");
        fflush(stdin);
        gets(new_empoyee->titel);


        printf("please enter the id of the empoyee \n");
        scanf("%i",&(new_empoyee->ID));
        printf("please enter the age of the empoyee \n");
        scanf("%i",&(new_empoyee->age));


        head_ptr=new_empoyee;
        printf("\n\n");
        counter++ ;
        return ;
    }
    while (temp!=NULL)
    {
        if (temp->next==NULL)
        {
            printf("please enter the name of the empoyee  \n");
            fflush(stdin);
            gets(new_empoyee->name);

            printf("please enter the salary of the empoyee  \n");
            scanf("%d",&(new_empoyee->salary));

            printf("please enter the titel of the empoyee  \n");
            fflush(stdin);
            gets(new_empoyee->titel);


            printf("please enter the id of the empoyee \n");
            scanf("%i",&(new_empoyee->ID));
            printf("please enter the age of the empoyee \n");
            scanf("%i",&(new_empoyee->age));
            new_empoyee->next=NULL;
            temp->next=new_empoyee;

            printf("\n\n");
            counter++ ;
            return ;
        }
        temp=temp->next;

    }

}

void delete_employee_data(node_t **head,node_t **head_ptr)
{
    int i=0;

    int id;
    printf("pleas enter id \n");
    scanf("%d",&id);
    node_t *temp;
    node_t *temp2=(*head);
    if(*head==NULL)
    {
        printf("the linked list is empty \n");
        return ;
    }
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL ;
        counter--;
        printf("Delete the data of an employee is succed \n");

        return ;
    }
    while(*head!=NULL)
    {
        if((*head)->ID==id)
        {

            break;
        }

        (*head)=(*head)->next;
        i++;
        if (i>counter)
            break;
    }
    if(i==0)
    {

        (*head)=(*head)->next;
        temp2->next=NULL;
        *head_ptr=(*head);

        free(temp2);
        counter--;
        printf("Delete the data of an employee is succed \n");

        return;
    }
    if (i>counter)
        printf("i am not found employee \n ");
    else
    {
        for(int j=0; j<i-1; j++)
        {
            temp2=temp2->next;
        }

        temp=temp2->next;
        temp2->next=temp->next;
        temp->next=NULL;
        free(temp);
        counter--;
        printf("Delete the data of an employee is succed \n");
    }

}
void print_Empolyee_data(node_t *head)
{

    int i=0;
    int id;
    printf("pleas enter id \n");
    scanf("%d",&id);
    if(head==NULL)
    {
        printf("the linked list is empty \n");
        return ;
    }

    while (head!=NULL)
    {
        if (head->ID==id)
        {
            printf("the name of the employee : %s\n",head->name);
            printf("the salary of the employee  :%d\n",head->salary);
            printf("the titel of the employee :%s\n",head->titel);
            printf("the id of the employee:%i\n",head->ID);
            printf("the age of the employee:%i\n",head->age);
            printf("\n\n");
            break;
        }



        head=head->next;

    }


}
void print_Empolyee_all_data(node_t *head)
{

    if(head==NULL)
    {
        printf("the linked list is empty \n");
        return ;
    }
    int i=1;
    while (i==1)
    {

        printf("the name of the employee : %s\n",head->name);
        printf("the salary of the employee  :%d\n",head->salary);
        printf("the titel of the employee :%s\n",head->titel);
        printf("the id of the employee:%i\n",head->ID);
        printf("the age of the employee:%i\n",head->age);
        printf("\n\n");

        if(head->next==NULL)
        {
            i=0;


        }

        if(head->next!=NULL)
        {
            head=head->next;

        }
    }
}
int modyfay_employee_data(node_t *head )
{
    int i=0;
    int id;
    printf("pleas enter id \n");
    scanf("%d",&id);
    node_t *temp;
    node_t *temp2=head;
    if(head==NULL)
    {
        printf("the linked list is empty \n");
        return ;
    }

    while(head!=NULL)
    {
        if(head->ID==id)
        {

            break;
        }

        head=head->next;
        i++;
        if (i>counter)
            break;
    }
    if(i==0)
    {


        printf("please enter the name of the empoyee  \n");
        fflush(stdin);
        gets(head->name);

        printf("please enter the salary of the empoyee  \n");
        scanf("%d",&(head->salary));

        printf("please enter the titel of the empoyee  \n");
        fflush(stdin);
        gets(head->titel);


        printf("please enter the id of the empoyee \n");
        scanf("%i",&(head->ID));
        printf("please enter the age of the empoyee \n");
        scanf("%i",&(head->age));


        printf("\n\n");

        printf("modefay the data of an employee is succed \n");

        return ;


    }
    if (i>counter)
        printf("i am not found employee \n ");
    else
    {
        for(int j=0; j<i-1; j++)
        {
            temp2=temp2->next;
        }


        printf("please enter the name of the empoyee  \n");
        fflush(stdin);
        gets(head->name);

        printf("please enter the salary of the empoyee  \n");
        scanf("%d",&(head->salary));

        printf("please enter the titel of the empoyee  \n");
        fflush(stdin);
        gets(head->titel);


        printf("please enter the id of the empoyee \n");
        scanf("%i",&(head->ID));
        printf("please enter the age of the empoyee \n");
        scanf("%i",&(head->age));


        printf("\n\n");

        printf("modefay the data of an employee is succed \n");
        return ;
    }

}




