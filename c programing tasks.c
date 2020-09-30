Task 1:

#include<stdio.h>
main()
{
   char name[20];
   int age;'
   double ph;
   printf("\nEnter your name,age and phone number\n");
   scanf("%s %d %lf",name,&age,&ph);
   printf("\n Name:%s \n Age:%d \n Phonenumber:%lf",name,age,ph);
}

Task 2:

#include<stdio.h>
main()
{  float c,f;
   printf("Enter the temperature in fahrenheit");
   scanf("%f",&f);
   c=5*(f-32)/9;
   printf("Temperature in celsius:%f",c);
}

Task 3:
#include<stdio.h>
main()
{
   float aver;
   int p,c,m,sum;
   printf("Enter your marks");
   scanf("%d %d %d",&p,&c,&m);
   sum=p+c+m;
   aver=sum/3;
   printf("\nThe sum is:%d\nThe average is:%f",sum,aver);
}

Task 4:
#include<stdio.h>
#include<string.h>
main()
{
   char fn,ln,firstname;
   printf("\nEnter your first name");
   printf("\nEnter your last name");
   gets(firstname);
   gets(ln);
   fn=strcat(firstname,ln);
   puts(firstname);
}

Task 5:
#include<stdio.h>
main()
{
   int n,rev,rem;
   printf("Enter the number");
   scanf("%d",&n);
   while(n!=0);
{
   rem=n%10;
   rev=rev*10+rem;
   n=n/1;

}

Task 6:
#include<stdio.h>
main()
{
   int n,a,rem,res=0;
   printf("Enter a three digit number");
   scanf("%d",&n);
   a=n;
   while(a!=0)
{
   rem=a%10;
   res=res+rem*rem*rem;
   a=a/10;
}
   if(res==n)
   printf("%d is an armstrong number",n);
   else
   printf("%d is not an armstrong number",n);
}

Task 7:
#include<stdio.h>
#include<string.h>
main()
{
   char a[100],b[100];
   printf("Enter a string");
   gets(a);
   strcpy(b,a);
   strrev(b);
   if(strcmp(a,b)==0)
   printf("The string is a palindrome\n");
   else
   printf("The string is not a palindrome");
}


Task 8:
#include<stdio.h>
main()
{
   int n,i;
   printf("Enter a number");
   scanf("%d",&n);
   for(i=1;i<=10;++i)
{
   printf("%d * %d=%d\n",n,i,n*i);
}
}

Task 9:
#include<stdio.h>
main()
{
   int i,j,r;
   printf("Enter the no.of.rows");
   scanf("%d",&r);
   for(i=r;i>=1;--i)
{
    for(j=1;j<=1;++j)
  {
    printf("%d ",j);
  }
    printf("\n");
}
}


Task 10:
#include<stdio.h>
main()
{
    int c,n,fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
{
    fact=fact*c;
    printf("Factorial of %d=%d\n",n,fact);
}

}


Task 11:
{
#include<stdio.h>
#include<string.h>
{
   struct Book{
      char title[50];
      char author[50];
      char genre[50];
};
void printbook(struct Book book);
main()
{
    struct Book;
    strcpy(Book.title,"Python");
    strcpy(Book.author,"Mycaptain");
    strcpy(Book.genre,"programming");
    printbook(book);
}
void printbook(struct Book book){
     printf("Book Title:%s\n",book.title);
     printf("Book author:%s\n",book.author);
     printf("Book genre:%s\n",book.genre);
}


Task 12:
#include<stdio.h>
main()
{
    float a,b,cel,fah;
    int x;
    printf("Enter your choice");
    scanf("%d",&x);
    switch(x)
{
    case 1:
         printf("enter the value of celsius");
         scanf("%f",&a);
         fah=((9*a)/5)+32;
         printf("\nFahrenheit temperature:%f",fah);
         break;
    case 2:
         printf("Enter the value of fahrenheit");
         scanf("%f",&b);
         cel=5*(b-32)/9;
         printf("\n Celsius temperature:%f",cel);
         break;
    default:
         exit(0);
}

}


Task 13:
#include<stdio.h>
main()
{
   int a[50],i,n,large,small;
   printf("Enter the no.of.elements");
   scanf("%d",&n);
   printf("enter the array");
   for(i=0;i<n;++i)
{
    scanf("%d",&a[i]);
    lar=small=a[0];
   for(i=1;i<n;i++)
{
    if(a[i]>large)
       large=a[i];
    if(a[i]<small)
       small=a[i];
}
   printf("the largest element is:%d",large);
   printf("\nThe smallest element is:%d",small);
}

         
