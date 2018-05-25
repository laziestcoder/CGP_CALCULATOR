#include<bits/stdc++.h>
//#include <stdlib.h>
using namespace std;
void gpa()
{
    float cs=0, c=-1,cr=0,gs=0;
    string g;
    while(printf("CR = "), scanf("%f",&c)==1 && c)
    {
        cout<<"Grade = ";
        cs+=c;
        cin>>g;
        if(g=="A+")
        {
            gs+=c*4;
            cr+=c;
        }
        else if(g=="A")
        {
            gs+=c*3.75;
            cr+=c;
        }
        else if(g=="A-")
        {
            gs+=c*3.5;
            cr+=c;
        }
        else if(g=="B+")
        {
            gs+=c*3.25;
            cr+=c;
        }
        else if(g=="B")
        {
            gs+=c*3;
            cr+=c;
        }
        else if(g=="B-")
        {
            gs+=c*2.75;
            cr+=c;
        }
        else if(g=="C+")
        {

            gs+=c*2.5;
            cr+=c;
        }
        else if(g=="C")
        {
            gs+=c*2.25;
            cr+=c;
        }
        else if(g=="D")
        {
            gs+=c*2;
            cr+=c;
        }
        else if(g=="F")
        {
            gs+=c*0;
        }
    }

    cout<<"GPA = "<<(gs/cs)<<endl;
    cout<<"Total Point = "<<gs<<endl;
    cout<<"Total Completed CR = "<<cr<<endl;

}


void cgp()
{
    int i;
    float gp=0,gs,cs,cg,cc=0;
    printf("Input Completed CR and GPA: \n");
    for(i=1; i<=10; i++)
    {
        if(i==1)
            printf ("1st ");
        else if(i==2)
            printf ("2nd ");
        else if(i==3)
            printf ("3rd ");
        else
            printf ("%dth ",i);

        printf("semester : \n");
        printf("CR = ");
        scanf("%f",&cs);
        if(cs==0)
        {
            break;
        }
        printf("GPA = ");
        scanf("%f",&gs);
        gp+=gs*cs;
        cc+=cs;
        printf("\n\nTotal Completed CR = %.2f\n",cc);
        printf("Total GPA = %.3f\n",gp);
        printf("CGP = %.4f\n\n\n",gp/cc);
    }
}


int main ()
{
again:
    int n;
    printf("\t\t\tWelcome to CGP/GPA Calculator in context of IIUC Grading System\n\t\t\t\t\t\tby Towfiqul Islam\n");
    printf("What do you want ?\n\t1. Semester GPA Calculator\n\t2. CGPA Calculator\nInput: ");
    scanf("%d",&n);
    if(n==1)
        gpa();
    else if(n==2)
        cgp();


    cout<<"Want to calculate again ? (y/n)"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y')
    {
        system("cls");
        goto again;
    }
    else
    {
        system("cls");
        printf("THANK YOU FOR USING THIS CALCULATOR!");
        return 0;
    }
}
