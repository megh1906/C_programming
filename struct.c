// to enter employee information name id salary doj struct employee add

#include <stdio.h>
#include <string.h>

struct employee {
    char name [100];
    int id;
    char doj [100];
    struct {
        char house [100];
        char lane [100];
        char city [100];
    }add;
    };

    void main(){
        int n,i;
        struct employee e[100];
        printf ("enter number of employees:");
        scanf ("%d", &n);
        for (i=0; i<=n-1; i++){
            printf (" \nenter id,name,doj,house,lane,city");
            scanf ("%d%s%s%s%s%s", &e[i].id,&e[i].name,&e[i].doj,&e[i].add.house,&e[i].add.lane,&e[i].add.city);  
        }

        printf ("\nid\tname\tdoj\thouse\tlane\tcity\n");
        printf ("--------------------------------------------------------------------------------------------------------");
        for (i=0;i<=n-1;i++){
            printf ("\n%d\t%s\t%s\t%s\t%s\t%s\n", e[i].id,e[i].name,e[i].doj,e[i].add.house,e[i].add.lane,e[i].add.city);
        }

    }


// student marks
 #include <stdio.h>
#include <string.h>

struct student{
char name[100];
int rollno;
int marks; //total marks
};

void main (){
    int n,i;
    struct student s[100];

    printf ("enter no of students:");
    scanf ("%d",&n);
    for (i=0;i<=n-1;i++){
        printf (" \nenter name,rollno,marks:\n");
        scanf("%s%d%d", &s[i].name,&s[i].rollno,&s[i].marks);
    }

    printf ("\nname\trollno\tmarks\n");
    printf ("----------------------------------------------------");

    for (i=0;i<=n-1;i++){
      printf("\n%s\t%d\t%d\n", s[i].name,s[i].rollno,s[i].marks);   
    }
    
    }
    

    // title author price of 5 books

#include <stdio.h>
#include <string.h>

struct book{
    char title[100];
    char author [100];
    int price;
};

void main(){
    int n=5;
    int i;
    struct book b[100];
     for (i=0;i<=n-1;i++){
    printf ("\nenter title;author; price of book\n");
   
        scanf ("%s%s%d",&b[i].title,&b[i].author,&b[i].price);
    }

    printf ("\ntitle\tauthor\tprice\n");
    printf ("-----------------------------------------------");
    for (i=0;i<=n-1;i++){
       printf("\n%s\t%s\t%d\n",b[i].title,b[i].author,b[i].price);
    }
}