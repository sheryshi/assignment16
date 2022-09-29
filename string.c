// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,k,sum=0;
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int b[3][3]={9,8,7,6,5,4,3,2,1};
//     int c[3][3];
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//     sum=sum+a[i][j]+b[i][j];
//     c[i][j]=sum;
//     sum=0;
//     printf(" %d",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,k,sum=0;
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int b[3][3]={9,8,7,6,5,4,3,2,1};
//     int c[3][3];

//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             for(k=0;k<=2;k++)
//             {
//                 sum=sum+(a[i][k]*b[k][j]);
//             }
//                 c[i][j]=sum;
//                 sum=0;
            
//         }
//     }

//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf(" %d",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int c[3][3],sum=0;

    
//     sum=a[0][0]+a[1][1]+a[2][2];
//     printf("  sum of left diagonal is %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     int c[3][3],sum=0;

    
//     sum=a[0][2]+a[1][1]+a[2][0];
//     printf("  sum of right diagonal is %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,sum=0;
//     int c[3][3];
//     int a[3][3]={1,2,3,4,5,6,7,8,9};

//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//         sum=sum+a[i][j];
//         }
//         c[i][j]=sum;
      
//           printf("sum of rows  %d",c[i][j]);
//         sum=0;
         
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,sum=0;
//     int c[3][3];
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     for(j=0;j<=2;j++)
//     {
//         for(i=0;i<=2;i++)
//         {
//             sum=sum+a[i][j];
//         }
//         c[j][i]=sum;
      
//         printf(" sum of column %d",c[j][i]);
//          sum=0;
        
//         printf("\n");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             if(i>j)
//             {
//                 a[i][j]=0;
//                 printf(" %d",a[i][j]);
//             }
//             else
//             printf(" %d",a[i][j]);
//         }
//         printf("\n"); 
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     int a[3][3]={1,2,3,4,5,6,7,8,9};
    
//     printf("lower traingular matrices\n");
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             if(j>i)
//             {
//                 a[i][j]=0;
//                 printf(" %d",a[i][j]);
//             }
//             else
            
//             printf(" %d",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,max=0,index=0,sum=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==1)
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
            index=i;
        }
        printf("%d",max);
        printf("\n");
    }

    return 0;
}

