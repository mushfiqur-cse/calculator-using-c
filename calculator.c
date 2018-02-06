#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("COLOR 8E");
    char ch;
    float p,q,sum,sub,prod,div,value,result;
    int n1,n2,remainder;
    int r,c,r1,c1,d,sum2=0;
    int mat_1[20][20],mat_2[20][20],sum_1[20][20],sub_1[20][20],multiply[20][20],transpose[20][20];

    while(1)
    {
        printf("\n\nCHOOSE YOUR CALCULATOR MOOD..\n\n\t\t1.BASIC CALCULATOR- PRESS 'B'\n\n\t\t2.SCIENTIFIC CALCULATOR- PRESS 'S'\n\n\t\t3.BASE CONVERTER- PRESS 'C'\n\n\t\t4.MATRIX- PRESS'M'");
        printf("\n\n\n\t\t<< Enter 'Q' to  Quit Calculation >>");
        printf("\n\n\n\t\tCALCULATOR MOOD: ");
        ch=getche();
        printf("\n\n\n\t\t<< Enter 'Q' to  Quit Calculation >>");
        system("cls");
        if(ch=='b'||ch=='B')
            {
                printf("\n\n\t\tEnter '+' for addition..");
                printf("\n\t\tEnter '-' for subtraction..");
                printf("\n\t\tEnter '*' for multiplication..");
                printf("\n\t\tEnter '/' for division..");
                printf("\n\t\tEnter 'm' to get remainder..");
                printf("\n\t\tEnter 'r' to get square root..");
                printf("\n\t\tEnter 's' to get Pow value..");

                printf("\n\n\t\tEnter Your Choice: ");
                ch=getche();
                system("cls");

        switch(ch)
        {
        case '+':
            printf("\n\n\t\tHow many numbers do u wnat to add: ");
            scanf("%d",&n1);
            printf("\n\t\tEnter %d Numbers Separately Using a Space: ",n1);
            for(n2=1;n2<=n1;n2++)
            {
                scanf("%f",&value);
                sum=sum+value;
            }
            printf("\n\t\tSum is: %.2f\n\n",sum);
            printf("==================================================================================\n");
        break;

        case '-':
            printf("\n\n\t\tEnter 1st Number: ");
            scanf("%f",&p);
            printf("\n\t\tEnter 2nd Number: ");
            scanf("%f",&q);
            sub=p-q;
            printf("\n\t\tSubtract of: %.2f - %.2f  =  %.2f\n\n",p,q,sub);
            printf("==================================================================================\n");
        break;

        case '*':
            printf("\n\n\t\tEnter 1st Number: ");
            scanf("%f",&p);
            printf("\n\t\tEnter 2nd Number: ");
            scanf("%f",&q);
            prod=p*q;
            printf("\n\t\tProduct of: %.2f * %.2f  =  %.2f\n\n",p,q,prod);
            printf("==================================================================================\n");
        break;

        case '/':
            printf("\n\n\t\tEnter 1st Number: ");
            scanf("%f",&p);
            printf("\n\t\tEnter 2nd Number: ");
            scanf("%f",&q);
            div=p/q;
            printf("\n\t\tResult of: %.2f / %.2f  =  %.2f\n\n",p,q,div);
            printf("==================================================================================\n");
        break;

        case 'm':
        case 'M':
            printf("\n\n\t\tEnter 1st Number: ");
            scanf("%d",&n1);
            printf("\n\t\tEnter 2nd Number: ");
            scanf("%d",&n2);
            remainder=n1%n2;
            printf("\n\t\tRemainder is: %d\n\n",remainder);
            printf("==================================================================================\n");
        break;

        case 'r':
        case 'R':
            printf("\n\n\t\tEnter a Number: ");
            scanf("%f",&p);
            printf("\n\t\tSquare Root of  %.2f  =  %.2f..\n\n",p,sqrt(p));
            printf("==================================================================================\n");
        break;

        case 's':
        case 'S':
            printf("\n\n\t\tEnter Base Value: ");
            scanf("%f",&p);
            printf("\n\t\tEnter Power Value: ");
            scanf("%f",&q);
            printf("\n\t\tResult is:  %.2f..\n\n",pow(p,q));
            printf("==================================================================================\n");
        break;

        default:
            printf("\n\n\t\t\tERROR! Wrong Input..\n\n");
        break;

        }
            }
        else if(ch=='s'||ch=='S')
        {
            printf("\n\n\tPress (a/b/c/d/e)\n\t\t\ta. sin()\n\n\t\t\tb. cos()\n\n\t\t\tc. tan()\n\n\t\t\td. log ( 10 base )\n\n\t\t\te. log (e base)\n\n\t\tPress: ");
            ch=getche();
            system("cls");
                switch(ch)
            {
                case 'a':
                case 'A':
                    printf("\n\t\tsin of ");
                    scanf("%f",&value);
                    result=(value*M_PI)/180;
                    printf("\n\t\tResult is:  %.2f\n\n",sin(result));
                    printf("==================================================================================\n");
                break;

                case 'b':
                case 'B':
                    printf("\n\t\tcos of ");
                    scanf("%f",&value);
                    result=(value*M_PI)/180;
                    printf("\n\t\tResult is:  %.2f\n\n",cos(result));
                    printf("==================================================================================\n");
                break;

                case 'c':
                case 'C':
                    printf("\n\t\ttan of ");
                    scanf("%f",&value);
                    result=(value*M_PI)/180;
                    printf("\n\t\tResult is:  %.2f\n\n",tan(result));
                    printf("==================================================================================\n");
                break;

                case 'd':
                case 'D':
                    printf("\n\n\t\tEnter a Number to Calculate \n\n\t\tIt's log ( base is 10 ): ");
                    scanf("%f", &p);

                    result = log10(p);

                    printf("\n\n\t\tNatural Log of %.3f = %.3f\n\n", p, result);
                    printf("==================================================================================\n");
                break;

                case 'e':
                case 'E':
                    printf("\n\n\t\tEnter a Number to Calculate \n\n\t\tIt's log ( base is e ): ");
                    scanf("%f", &p);

                    result = log(p);

                    printf("\n\n\t\tln of %.3f = %.3f\n\n", p, result);
                    printf("==================================================================================\n");
                break;

                default:
                    printf("\n\n\t\tInvalid Character!\n\n");
                    printf("==================================================================================\n");
                break;
            }
        }
        else if(ch=='c'||ch=='C')
        {
            printf("\n\n\t\t1.DECIMAL TO BINARY\n\n\t\t2.BINARY TO DECIMAL\n\n\t\tPlease Enter Your Choice (1/2): ");
            scanf("%d", &n1);
            system("cls");

            if(n1==1)
            {
            int num, remainder, base=1, binary=0;
            printf("\n\n\t\tEnter a Decimal Integer: ");
            scanf("%d", &num);

                while (num > 0)
                {
                remainder = num % 2;
                binary = binary + remainder * base;
                num = num / 2;
                base = base * 10;
                }
                printf("\n\t\tYour Binary Equivalent is: %d\n\n", binary);
                printf("==================================================================================\n");
            }

            else if(n1==2)
            {
            int num, remainder, decimal=0, base=1;
            printf("\n\n\t\tEnter a Binary Number(1 and 0): ");
            scanf("%d", &num);

                while (num > 0)
                {
                remainder = num % 10;
                decimal = decimal + remainder * base;
                num = num / 10 ;
                base = base * 2;
                }
            printf("\n\t\tYour Decimal Equivalent is: %d\n\n", decimal);
            printf("==================================================================================\n");
            }
            else
                printf("\n\n\t\t\tInvalid Character!\n\n");
        }

        else if(ch=='m'||ch=='M')
        {
            printf("\n\n\t\t1.MATRIX ADDITION\n\n\t\t2.MATRIX SUBTRACTION\n\n\t\t3.MATRIX MULTIPLICATION\n\n\t\t4.MATRIX TRANSPOSE\n\n\t\tPlease Enter Your Choice (1/2/3/4): ");
            scanf("%d", &n1);
            system("cls");

            if(n1==1)
            {
                printf("\n\n\t\tEnter The Number of Rows: ");
                scanf("%d",&r);
                printf("\n\t\tEnter The Number of Columns: ");
                scanf("%d",&c);
                system("cls");

                printf("\n\n\t\tEnter The Elements of First Matrix: \n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                    {
                        printf("\n\t\tEnter The Element of a%d%d: ",n1+1,n2+1);
                        scanf("%d",&mat_1[n1][n2]);
                    }
                printf("\n\n\t\tEnter The Elements of Second Matrix: \n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                    {
                        printf("\n\t\tEnter The Element of b%d%d: ",n1+1,n2+1);
                        scanf("%d",&mat_2[n1][n2]);
                    }

                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                sum_1[n1][n2]=mat_1[n1][n2]+mat_2[n1][n2];

                printf("\n\n\t\tSum of Entered Two Matrix is: \n\n\n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                    {
                        printf("\t\t%d", sum_1[n1][n2]);
                            if(n2==c-1)
                            printf("\n\n");
                    }
                    printf("==================================================================================\n");
            }
            else if(n1==2)
            {
                printf("\n\n\t\tEnter The Number of Rows: ");
                scanf("%d",&r);
                printf("\n\t\tEnter The Number of Columns: ");
                scanf("%d",&c);
                system("cls");

                printf("\n\n\t\tEnter The Elements of First Matrix: \n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                    {
                        printf("\n\t\tEnter The Element of a%d%d: ",n1+1,n2+1);
                        scanf("%d",&mat_1[n1][n2]);
                    }
                printf("\n\n\t\tEnter The Elements of Second Matrix: \n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                {
                    printf("\n\t\tEnter The Element of b%d%d: ",n1+1,n2+1);
                    scanf("%d",&mat_2[n1][n2]);
                }

                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                sub_1[n1][n2]=mat_1[n1][n2]-mat_2[n1][n2];

                printf("\n\n\t\tSubtract of Entered Two Matrix is: \n\n\n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                {
                    printf("\t\t%d", sub_1[n1][n2]);
                    if(n2==c-1)
                        printf("\n\n");
                }
                printf("==================================================================================\n");
            }
            else if(n1==3)
            {
                printf("\n\n\t\tEnter The Number of Rows of Matrix_1: ");
                scanf("%d",&r);
                printf("\n\t\tEnter The Number of Columns of Matrix_1: ");
                scanf("%d",&c);

                printf("\n\n\n\t\tEnter The Elements of First Matrix: \n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                    {
                        printf("\n\t\tEnter The Element of a%d%d: ",n1+1,n2+1);
                        scanf("%d",&mat_1[n1][n2]);
                    }
                system("cls");

                printf("\n\n\t\tEnter The Number of Rows of Matrix_2: ");
                scanf("%d",&r1);
                printf("\n\t\tEnter The Number of Columns of Matrix_2: ");
                scanf("%d",&c1);

                if ( c != r1 )
                {
                    printf("\n\n\t\tDimension Error!\n");
                    printf("==================================================================================\n");
                }

                else
                {
                    printf("\n\n\n\t\tEnter The Elements of Second Matrix: \n");
                    for(n1=0;n1<r1;++n1)
                        for(n2=0;n2<c1;++n2)
                        {
                            printf("\n\t\tEnter The Element of b%d%d: ",n1+1,n2+1);
                            scanf("%d",&mat_2[n1][n2]);
                        }

                    for ( n1 = 0 ; n1 < r ; ++n1 )
                    {
                        for ( n2 = 0 ; n2 < c1 ; ++n2 )
                        {
                            for ( d = 0 ; d < r1 ; ++d )
                            {
                                sum2 = sum2 + mat_1[n1][d]*mat_2[d][n2];
                            }

                                multiply[n1][n2] = sum2;
                                sum2 = 0;
                        }
                    }

                    system("cls");

                    printf("\n\n\t\tProduct of Entered Matrices: \n\n\n");

                    for ( n1 = 0 ; n1 < r ; ++n1 )
                    {
                        for ( n2 = 0 ; n2 < c1 ; ++n2 )
                        printf("\t\t%d", multiply[n1][n2]);

                        printf("\n\n");
                    }
                    printf("==================================================================================\n");
                }
            }

            else if(n1==4)
            {
                printf("\n\n\t\tEnter The Number of Rows of Matrix_1: ");
                scanf("%d",&r);
                printf("\n\t\tEnter The Number of Columns of Matrix_1: ");
                scanf("%d",&c);

                printf("\n\n\n\t\tEnter The Elements of First Matrix: \n");
                for(n1=0;n1<r;++n1)
                    for(n2=0;n2<c;++n2)
                    {
                        printf("\n\t\tEnter The Element of a%d%d: ",n1+1,n2+1);
                        scanf("%d",&mat_1[n1][n2]);
                    }
                system("cls");

                for( n1 = 0 ; n1 < r ; ++n1 )
                {
                    for( n2 = 0 ; n2 < c ; ++n2 )
                    {
                        transpose[n2][n1] = mat_1[n1][n2];
                    }
                }
                printf("\n\n\t\tTranspose of Entered Matrix is: \n\n");

                for( n1 = 0 ; n1 < c ; ++n1 )
                {
                    for( n2 = 0 ; n2 < r ; ++n2 )
                    {
                        printf("\t\t%d",transpose[n1][n2]);
                    }
                    printf("\n\n");
                }
                printf("==================================================================================\n");

            }

            else
                printf("\n\n\t\tInvalid Character!\n");

        }
        else if(ch=='q'||ch=='Q')
                    exit(0);

        else
            printf("\n\n\t\tInvalid Character!\n");
    }
    getch();
    return 0;
}
