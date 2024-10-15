#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include <time.h>
int deposit(FILE*fp,int);
int withdraw(FILE*fp,int);
int check_balance(FILE*fp,int);
int change_pin(FILE*fp,int);
int fastcash(FILE*fp,int);


int main()
{ 
	system("color f3");
	int id,c_id,pin,c_pin,balance,transaction;
	int choice;
	int count4,count5,count6;
	FILE *f,*fp;
	
	 time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("*********************************************************************************************WELCOME TO ATM********************************************************************************************************\n");
	printf("Enter Bank Id\n");
	scanf("%d",&c_id);
	f=fopen("customer1.txt","r");
	    while(fscanf(f,"%d %d %d",&id,&pin,&balance)!= EOF)
		{
				if (id==c_id)
			{
				system("cls");
				  time_t now = time(NULL);
        printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
        printf("*********************************************************************************************WELCOME TO ATM********************************************************************************************************\n");
		printf("Enter pin code\n");
		pw:
		scanf("%d",&c_pin);
		if(pin==c_pin)
		   {
			fclose(f);
			begain:
			system("cls");
		 time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("*********************************************************************************************WELCOME TO ATM********************************************************************************************************\n");
		printf("\t\t\t\t\t \t\t\t\t\t          1.Deposit\n");
		printf("\t\t\t\t\t \t\t\t\t\t          2.Withdraw\n");
		printf("\t\t\t\t\t \t\t\t\t\t          3.Check Balance\n");
		printf("\t\t\t\t\t \t\t\t\t\t          4.Change PIN\n");
		printf("\t\t\t\t\t \t\t\t\t\t          5.Fastcash\n");
		printf("\t\t\t\t\t \t\t\t\t\t          6.Exit\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("Please enter your choice\n");
		checkOption:
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:

			fp=fopen("customer1.txt","r");
			deposit(fp,c_id);
			fclose(fp);
 			  if(remove("customer1.txt")==0)
			   {
       		
	   		   }
			   else
			   {
	   			
	  		   }
       		rename("temp.txt","customer1.txt");
			break;
		case 2:
		    fp=fopen("customer1.txt","r");
			withdraw(fp,c_id);
			fclose(fp);
			  if(remove("customer1.txt")==0)
			   {
       		  
	   		   }
			  else
			   { 
	   			
	  		   }
       		 rename("temp.txt","customer1.txt");
			 break;
		case 3:
			fp=fopen("customer1.txt","r");
			check_balance(fp,c_id);
			fclose(fp);
			 break;
		case 4:
			fp=fopen("customer1.txt","r");
			change_pin(fp,c_id);
			fclose(fp);
				if(remove("customer1.txt")==0)
				{
					
	   		    }
				   else
				{
	   			
	  		    }
       		 rename("temp.txt","customer1.txt");
			 break;
		case 5:
			fp=fopen("customer1.txt","r");
			fastcash(fp,c_id);
			fclose(fp);
				if(remove("customer1.txt")==0)
				{
       		
	   		    }
			   else
			   {
	   			
	  		   }
       		 rename("temp.txt","customer1.txt");
			 break;
		case 6:
						system("cls");
			        time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

			printf("=======================================================================================Thank You For Using Our service============================================================================================");
            goto ed;		
			break;
	default:
			if(count5<3)
			{
				count5++;
				printf("Invalid Choice\n");
				goto checkOption;
			}
			else
			{
				    system("cls");
				    		        time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

					printf("\t\t\t\t\t\t\t\t\t\t   Too many attempts\n");
					printf("\t\t\t\t\t\t\t\t\t\t   Please take out your card\n");
					 printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

			}	
		}
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		trans:
		printf("\n\t\tIf You Want To Continue Transcation Presss 1[YES] or 0[NO]\n");
        scanf("%d",&transaction);
               if(transaction==1)
                      {
	goto begain;
                      }
                else if(transaction==0)
                      {
                      printf("=======================================================================================Thank You For Using Our service============================================================================================");
                      }
                else
                      {
	            if(count6<3)
                	{
                		count6++;
	                      goto trans;
                     }
	            else
	               {
		           printf("----------------------------------------------------------------------------You attempt more than 3 times you can't try furthur-----------------------------------------------------------");
	                }
                        }
		
		ed:
	//fclose(fp);
	return 0;			  	
}
             else
             {
             		Beep(610,500);
					system("cls");
			        time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					count4++;
					if(count4<3)
				   {
						printf("Please Enter Valid PIN\n");
				        goto pw;
				   }
				else
				   {
					printf("\t\t\t\t\t\t\t\t\t\t   Too many attempts\n");
					printf("\t\t\t\t\t\t\t\t\t\t   Please take out your card\n");
				   }
			 }
}
}
}
int deposit(FILE*fp,int c_id)
{
		     int id,amt,balance,pin;
		     int count;
		     FILE *temp_fp=fopen("temp.txt","w");
		     system("cls");
		      time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            while(fscanf(fp,"%d%d%d",&id,&pin,&balance)!= EOF)
			   {
			   if(id==c_id)
			   {
				dp:
					printf("Enter the amount to deposit\n");
				scanf("%d",&amt);
				if(amt%500!=0)
				{
					Beep(610,500);
					      system("cls");
			              time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					if(count<3)
				   {
				   		count++;
						printf("Please Enter the Multiplication of 500\n");
				        goto dp;
				   }
				else
				   {
					printf("\t\t\t\t\t\t\t\t\t\t   Too many attempts\n");
					printf("\t\t\t\t\t\t\t\t\t\t   Please take out your card\n");
					    fprintf(temp_fp,"%d %d %d \n",id,pin,balance);	
					    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
					     printf("\n\t\t\t__________________________________________________________ Thank You For Using Our Service___________________________________________________________________");
				   }
				   }
				else
				   {
			          balance=amt+balance;
			          system("cls");
			          time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

			          printf("\t\t\tYou Have Deposit Amount of Rs. %d\n  \t\t\t\tYour New Balance is %d\n",amt,balance);
			          fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
			          printf("\n\t\t\t__________________________________________________________ Thank You For Using Our Service___________________________________________________________________");

            }
            }
        else
            {
        	 fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
		    }
   }
	fclose(temp_fp);
}
int withdraw(FILE*fp,int c_id)
{
	 FILE *temp_fp=fopen("temp.txt","w");
	 int id,amt,balance,pin;
     int count1;
     system("cls");
        		 time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	with:
        printf("\n\t Enter the amount you want to withdraw :");
        scanf("%d",&amt);
         if (amt % 500 != 0)
        {
        	    system("cls");
         		time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

            		count1++;
					if(count1<3)
					{
						Beep(610,500);
						printf("\t\tPlease Enter the amount in  multiplication 500\n");
				        goto with;
					}
					else
					{
					   printf("\t\t\t\t\t\t\t\t\t\t   Too many attempts\n");
					   printf("\t\t\t\t\t\t\t\t\t\t   Please take out your card\n");
					   while(fscanf(fp,"%d%d%d",&id,&pin,&balance)!= EOF)
					    fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
					    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
					     printf("\n\t\t\t__________________________________________________________ Thank You For Using Our Service___________________________________________________________________");
					}
		}
        else
            {
        	system("cls");
        	 time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            while(fscanf(fp,"%d%d%d",&id,&pin,&balance)!= EOF)
			   {
			   if(id==c_id)
			   {
        if (amt > balance)
        {
            printf(" you don't have enought balance\n");
            fprintf(temp_fp,"%d %d %d\n",id,pin,balance);
        }
        else
        {
            balance=balance-amt;
            printf("\t\t\tYou Have Withdraw Amount of Rs. %d\n  \t\t\t\tYour New Balance is %d\n",amt,balance);
            fprintf(temp_fp,"%d %d %d\n",id,pin,balance);
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n\t\t\t__________________________________________________________ Thank You For Using Our Service___________________________________________________________________");

        }
        }
              else
           {
        	 fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
		   }
               }
            }
	fclose(temp_fp);
}
int check_balance(FILE*fp,int c_id)
{
	system("cls");
    time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("*********************************************************************************************WELCOME TO ATM********************************************************************************************************\n");
	int id,balance,pin;
          while(fscanf(fp,"%d %d %d",&id,&pin,&balance)!= EOF)
			   {
			   if(id==c_id)
			   {
	printf("Your balance is %d\n",balance);
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
}
}
int change_pin(FILE*fp,int c_id)
{
	FILE *temp_fp=fopen("temp.txt","w");
	int pin,c_pin,id,pin1,balance;
	int count2;
	system("cls");
	time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	ch:
		  while(fscanf(fp,"%d%d%d",&id,&pin,&balance)!= EOF)
			   {
			   if(id==c_id)
			   {
	printf("Please previous your pin\n");
	scanf("%d",&c_pin);
	if(pin==c_pin)
		{

			    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	         printf("Enter new PIN\n");
			scanf("%d",&pin1);
			printf("Your pin is updated sucessfully\n");
		    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	        	 fprintf(temp_fp,"%d %d %d \n",id,pin1,balance);
        }
                else
				    {
					printf("Enter pin is invalid");
					if(count2<2);
					{
						count2++;
						goto ch;
					}
                    printf("\n");
				    }
               }
               else
        {
        	 fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
		}
                }
	        fclose(temp_fp);
}

int fastcash(FILE*fp,int c_id)
{
	 int id,pin,balance;
	int choice1;
	system("cls");
	time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");


		 FILE *temp_fp=fopen("temp.txt","w");
		   while(fscanf(fp,"%d%d%d",&id,&pin,&balance)!= EOF)
			   {
			   if(id==c_id)
			   {
			printf("\t\t\t\t\t \t\t\t\t\t\t          1.Rs,500\n");
			printf("\t\t\t\t\t \t\t\t\t\t\t          2.Rs,1000\n");
			printf("\t\t\t\t\t \t\t\t\t\t\t          3.Rs,3000\n");
			printf("\t\t\t\t\t \t\t\t\t\t\t          4.Rs,5000\n");
			printf("\t\t\t\t\t \t\t\t\t\t\t          5.Rs,10000\n");
			printf("\t\t\t\t\t \t\t\t\t\t\t          6.Rs,25000\n");
			printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Enter your choice\n");
			scanf("%d",&choice1);
			switch(choice1)
			{
				case 1:
						if(balance<=500)
			{
             printf("Insufficient Balanace");
         }
         else
		 {
		 	system("cls");
					balance -= 500;
						time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\tYou have withdrawn an amount of 500 \n\t\t Your new balance is %d\n",balance);
    }
        break;
        case 2:
        	if(balance<=1000)
			{
				printf("Insufficient Balance");
			}
			system("cls");
        balance -= 1000;
			time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\tYou have withdrawn an amount of 1000 \n \t\tYour new balance is %d\n",balance);
        break;
        case 3:
        	if(balance<=1000)
			{
             printf("Insufficient Balanace");
         }
         else
		 {
		 	system("cls");
		balance -= 3000;
			time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\tYou have withdrawn an amount of 3000 \n \t\tYour new balance is %d\n", balance);
    }
        break;
        case 4:
        		if(balance<=5000)
			{
             printf("Insufficient Balanace");
         }
         else
		 {
		 	system("cls");
		 		time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		balance -= 5000;
        printf("\t\tYou have withdrawn an amount of 5000 \n\t\t Your new balance is %d\n", balance);
    }
        break;
        case 5:
        		if(balance<=10000)
			{
             printf("Insufficient Balanace");
         }
         else
		 {
		 	system("cls");
		balance -= 10000;
			time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\tYou have withdrawn an amount of 10000 \n \t\tYour new balance is %d\n", balance);
    }
			break;
		case 6:
			if(balance<=25000)
			{
             printf("Insufficient Balanace");
         }
         else
		 {
		 	system("cls");
		 		time_t now = time(NULL);
    printf("\n\n\t\t\t\t\t \t\t\t\t\t          %s", ctime(&now));
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			balance-=25000;
			printf("\t\tYou have withdrawn an amount of 25000 \n\t\t Your new balance is %d\n", balance);
		}
			break;

			default :
				printf("Invalid choice");

				break;
		}
		    	 fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
		    }
		else
        {
        	 fprintf(temp_fp,"%d %d %d \n",id,pin,balance);
		}
  	}
  	fclose(temp_fp);
}

