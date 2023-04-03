#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "linkedList.h"

int main()
{

    node_t newdata;
    node_t *head_ptr,*ptr1,*ptr2,*reff;
    head_ptr =(node_t*)malloc(sizeof(node_t));
    ptr1 =(node_t*)malloc(sizeof(node_t));
    ptr2 =(node_t*)malloc(sizeof(node_t));
    reff =(node_t*)malloc(sizeof(node_t));
    head_ptr->ID=12;
    head_ptr->age=20;
    head_ptr->salary=50000;
    strcpy(head_ptr->name,"omer mohmed");
    strcpy(head_ptr->titel,"maniger");
    head_ptr->next=ptr1;
    ptr1->ID=13;
    ptr1->age=22;
    ptr1->salary=50000;
    strcpy(ptr1->name,"mohamed mostafa");
    strcpy(ptr1->titel,"HR");
    ptr1->next=ptr2;
    ptr2->ID=14;
    ptr2->age=23;
    ptr2->salary=50000;
    strcpy(ptr2->name,"mohamed Ahmed");
    strcpy(ptr2->titel,"selse");
    ptr2->next=NULL;




    int i=1;
    printf("Choose the operation you want to perform \n");
    printf("1.Add a new employee data \n");
    printf("2.Delete the data of an employee. \n");
    printf("3.Modify the data of an employee. \n");
    printf("4.View the data of an employee. \n");
    printf("5.View all the employees data. \n");
    printf("6.Exit \n");
    scanf("%d",&i);
    while(i!=6)
    {

        switch (i)
        {
        case (1):
            create_new_empoyee(head_ptr);

            printf("1.Add a new employee data \n");
            printf("2.Delete the data of an employee. \n");
            printf("3.Modify the data of an employee. \n");
            printf("4.View the data of an employee. \n");
            printf("5.View all the employees data. \n");
            printf("6.Exit \n");

            scanf("%d",&i);
            break;
        case (2):
             reff=head_ptr;
            delete_employee_data(&reff,&head_ptr );

            printf("1.Add a new employee data \n");
            printf("2.Delete the data of an employee. \n");
            printf("3.Modify the data of an employee. \n");
            printf("4.View the data of an employee. \n");
            printf("5.View all the employees data. \n");
            printf("6.Exit \n");

            scanf("%d",&i);
            break;
        case (3):
            reff=head_ptr;
            modyfay_employee_data(reff );

            printf("1.Add a new employee data \n");
            printf("2.Delete the data of an employee. \n");
            printf("3.Modify the data of an employee. \n");
            printf("4.View the data of an employee. \n");
            printf("5.View all the employees data. \n");
            printf("6.Exit \n");

            scanf("%d",&i);
            break;
        case (4):
            reff=head_ptr;

            print_Empolyee_data(reff);

            printf("1.Add a new employee data \n");
            printf("2.Delete the data of an employee. \n");
            printf("3.Modify the data of an employee. \n");
            printf("4.View the data of an employee. \n");
            printf("5.View all the employees data. \n");
            printf("6.Exit \n");

            scanf("%d",&i);
            break;
        case (5):
            reff=head_ptr;
            print_Empolyee_all_data(reff);
            printf("1.Add a new employee data \n");
            printf("2.Delete the data of an employee. \n");
            printf("3.Modify the data of an employee. \n");
            printf("4.View the data of an employee. \n");
            printf("5.View all the employees data. \n");
            printf("6.Exit \n");

            scanf("%d",&i);
            break;

        default:
            if (i!=6)
            {
                printf("Please select only one of these operations \n");
                printf("1.Add a new employee data \n");
                printf("2.Delete the data of an employee. \n");
                printf("3.Modify the data of an employee. \n");
                printf("4.View the data of an employee. \n");
                printf("5.View all the employees’ data. \n");
                printf("6.Exit \n");
                scanf("%d",&i);

            }
            else
                break;

        }

    }

    return 0;
}
