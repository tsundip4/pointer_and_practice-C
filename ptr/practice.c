#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*switch case*/

int main()
{
    char input;
    printf("take the first letter");
    scanf("%c", &input);
    switch(input)
    {
    case 'M':
        printf("Male");
        break;
    case 'F':
        printf("female");
        break;
    default:
        printf("you are neither male or female");

    }
    return 0;
}

/* goto statement to print name 10 times*/

int main()
{
    char name[10], i=0;
    printf("please type your name");
    gets(name);
    start:
        puts(name);// it will print the name stored in name array
        i++; // inrement of i
    if(i<10)
        goto start;
}

/* use of pointer to find the address of the given array*/

int main()
{
    char name[5];
    int i;
    char *p;

    p = &name;

   for(i=0; i<5; i++){
    printf("%d\n", p+i);
   }

   return 0;
}



/* use of pointer to swap two numbers*/


int main()
{
    int a, b;
    int *p, *q, temp;


    printf("take the number a and b");
    scanf("%d %d", &a, &b);

    p=&a;
    q=&b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf(" a =%d; b =%d", a, b);
}

/* how bit field works: how 8 bytes reduced to four bytes*/

struct name{
int roll:5;// it assumes that only 5 bit is required to roll
int rank:3;// only three bit is required
};
int main()
{
    struct name pose;
    printf("the size of pos is %d", sizeof(pose));
}



/* table for any number*/

int main()
{
    int num, i, sum;

    printf("enter the table you want to print out\n");
    scanf("%d", &num);

    sum  = num;

    printf("table for the %d \n", num);
    for(i=1; i<=10; i++){

        printf("%d * %d = %d\n ", num, i, sum);

        sum = num + i*num;
    }
}

/* sum of natural number */

int main()
{
    int num=1, sum=0, i, size;

    printf("take the natural number upto which u wnat to print sum");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        sum = sum + num;
        num++;
    }

    printf("the sum is %d", sum);
}


/* program to calculate the sum of natural number*/

int main()
{
    int i, sum =0, size;
    printf("enter the number upto which you wnat to print the sqaure of any number");
    scanf("%d",&size);

    for(i=1; i<=size; i++){
        sum = sum + pow(i,2);
    }

    printf("the sum is %d", sum);

    return 0;


}


/* c program to find smallest number among the given numbers*/

int main()
{
    int num[5]={5,4,2,0,6}, i;
    int temp = num[0];

    for(i=0; i<5; i++){
        if(num[i] < num[i+1]){

            temp = num[i];
            num[i+1]=num[i];
        }
    }
    printf("the smallest number is %d", temp);

}

/* c proogram to add the diagonal elements of the matrix*/


int main()
{
    int i, j, row_size, col_size, sum =0;

    printf("take the row_size and col_size of the matrix");
    scanf("%d %d", &row_size, &col_size);

    int A[row_size][col_size];


    if(row_size != col_size){
        printf("the size must be same");
        exit(1);

    }

    printf("take the elements of the matrix");

    for(i=1; i<=row_size; i++){
        for(j=1; j<=col_size; j++){
            scanf("%d", &A[i][j]);
        }
    }


        for(i=1; i<=row_size; i++){
            for(j=1; j<=col_size; j++){
                if(i==j){
                    sum = sum + A[i][j];
                }
            }
        }
    printf("the sum of the diagonal element is %d", sum);

}



/* c program to calculate the transpose of the matrix*/

// if we change the position of row and column in terms of i and j we can find the transpose

int main()
{
    int A[3][3]={1,2,3,4,5,6,7,8,9}, i, j;

    for(j=0; j<3; j++){
        for(i=0; i<3; i++){
            printf("%d ", A[i][j]);

        }
        printf("\n");

    }
    return 0;
}

/* to find the solution of quadratic equation*/

int main()
{
    int a, b,c, x1,x2;

    printf("take the value of a, b and c");
    scanf("%d%d%d", &a, &b, &c);

    if(b*b-4*a*c<0){
        printf("solution doesnot exist");
    }
    else
    {
        x1 = (-b+sqrt(b*b-4*a*c))/2*a;
        x2 = ((-b)-sqrt(b*b-4*a*c))/2*a;

        printf("the solutions are %d %d", x1, x2);
    }

}


/* sorting practice*/

int main()
{
    int num[5]={5,1,3,4,2};
    int length=0, size, temp, i;

    length = sizeof(num)/sizeof(num[0]);
    printf("size of array: %d\n", length);

    for(size=1; size<length-1; size++){
    for(i=0; i<length-1; i++){
        if(num[i]>num[i+1]){
            temp = num[i+1];
            num[i+1]=num[i];
            num[i]= temp;
        }
    }

    }
    printf("sorting of array in ascending order is: ");
    for(i=0; i<length; i++){
        printf("%d ", num[i]);
    }

    printf("\nthe lowest value in the array is %d", num[0]);
    printf("\nthe highest value in the array is %d", num[length-1]);
    return 0;

}

/* user login*/

int main()
{
    char name[20];
    char confirm_name[20];

    printf("please enter the name\n");
    gets(name);

    printf("please enetr your name for login\n");
    gets(confirm_name);

    if(strcmp(name, confirm_name)==0){
        printf("correct name");
    }
    else
        printf("incorrect name");

    return 0;
}

/* calculation of fibonacci series*/

int main()
{
    int a=1, b=1, sum, num, i;

    printf("take the valueupto which you want to print fibonacci series");
    scanf("%d", &num);


    for(i=0; i<num; i++){

        printf("%d", a);
        sum=a+b;
        a= b;
        b = sum;

    }

    return 0;


}



