#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],b[50],s[50],sum,i,j,m,n,temp,d,f;
    printf("enter the size of first array");
    scanf("%d",&n);
    printf("the elements of first array is");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }  }  }
            printf("the sorted array is");
            for(i=0;i<n;i++)
                printf("%d\n",a[i]);
                printf("enter the size of second array");
                scanf("%d",&m);
                printf("the elements of second array is");
                for(i=0;i<m;i++)
                    scanf("%d",&b[i]);
                for(i=0;i<m;i++)
                {
                    for (j=i+1;j<m;j++)
                    {
                        if(b[i]>b[j])
                        {
                            d=b[i];
                            b[i]=b[j];
                            b[j]=d;
                            }}}
                            printf("the sorted array is");
                            for(i=0;i<m;i++)
                                printf("%d\n",b[i]);
                            sum=n+m;
                            for(i=0;i<n;i++)
                                s[i]=a[i];
                            for(i=0;i<m;i++)
                            s[i+n]=b[i];
                            printf("the merged array is");
                            for(i=0;i<sum;i++)
                                printf("\n%d",s[i]);
                            for(i=0;i<sum;i++)
                            {
                                for(j=i+1;j<sum;j++)
                                {
                                    if(s[i]>s[j])
                                    {
                                        f=s[i];
                                        s[i]=s[j];
                                        s[j]=f;
                                    }
                                }
                            }
                            printf("the sorted array is");
                            for(i=0;i<sum;i++)
                                printf("%d\n",s[i]);
                                getch();
}



