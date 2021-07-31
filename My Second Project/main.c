#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <time.h>
struct student
{
    char *name;
    int id;
    float attendence;
    float gpa;
    float percentage;
};
struct node
{
    char* nam;
    struct node *next;
}*nn,*top=NULL,*pp,*top1=NULL;
void merge(int,int,int);
void mergesort(int,int);
void teaching_staff();
void cricket_team();
void lab_details();
void course_details();
void time_table();
int day;
float a[60]={8.69,9.21,8.89,8.26,9.53,7.95,8.2,7.56,9.21,9.21,9.32,6,8.58,8.95,7,9.26,8.2,9.76,6,9.21,8.48,8.32,9,9.37,7.7,9.02,6,8.2,6,8.8,9,9,8.54,9.21,9,8.1,9.21,8.5,8.2,7.89,9.23,7.8,9.21,9,9.21,8.8,8.5,8.2,8.8,7.1,8.4,6,8.3,9.68,6,7.2,7.56,6,9.32,9},b[60],gp[60]={8.69,9.21,8.89,8.26,9.53,7.95,8.2,7.56,9.21,9.21,9.32,6,8.58,8.95,7,9.26,8.2,9.76,6,9.21,8.48,8.32,9,9.37,7.7,9.02,6,8.2,6,8.8,9,9,8.54,9.21,9,8.1,9.21,8.5,8.2,7.89,9.23,7.8,9.21,9,9.21,8.8,8.5,8.2,8.8,7.1,8.4,6,8.3,9.68,6,7.2,7.56,6,9.32,9};
int main()
{
     int num=60,n,i,count=0,r,p,s,t,z,j,high=59;
     struct student st[num];
     st[0].name="ADDI SATHVIKA";
     st[0].id=501;
     st[0].attendence=83.79;
     st[0].gpa=8.69;
     st[0].percentage=86.90;

     st[1].name="AMETI SADHANA";
     st[1].id=502;
     st[1].attendence=94.57;
     st[1].gpa=9.21;
     st[1].percentage=92.1;

     st[2].name="ANNAM NAVYA SREE";
     st[2].id=503;
     st[2].attendence=88.79;
     st[2].gpa=8.89;
     st[2].percentage=88.9;

     st[3].name="KADALI ANUSHA";
     st[3].id=504;
     st[3].attendence=81.11;
     st[3].gpa=8.26;
     st[3].percentage=82.6;

     st[4].name="BALAGA SATEESH";
     st[4].id=505;
     st[4].attendence=97.24;
     st[4].gpa=9.53;
     st[4].percentage=95.3;

     st[5].name="BANDI APOORVA";
     st[5].id=506;
     st[5].attendence=84;
     st[5].gpa=7.95;
     st[5].percentage=79.5;

     st[6].name="BAYAGANI SRI SATYA";
     st[6].id=507;
     st[6].attendence=86.18;
     st[6].gpa=8.2;
     st[6].percentage=82;

     st[7].name="BELAPURE ASHISH";
     st[7].id=508;
     st[7].attendence=88.74;
     st[7].gpa=7.56;
     st[7].percentage=75.6;

     st[8].name="BONDALA ROSHAN KUMAR";
     st[8].id=509;
     st[8].attendence=94.47;
     st[8].gpa=9.21;
     st[8].percentage=92.1;

     st[9].name="CHINTAMANENI MAHA LAKSHMI";
     st[9].id=510;
     st[9].attendence=96.57;
     st[9].gpa=9.21;
     st[9].percentage=92.1;

     st[10].name="CHUNDRU HARSHITHA";
     st[10].id=511;
     st[10].attendence=98.54;
     st[10].gpa=9.32;
     st[10].percentage=92.1;

     st[11].name="CILARAPU PRITHVI RAJ";
     st[11].id=512;
     st[11].attendence=70.56;
     st[11].gpa=6;
     st[11].percentage=60;

     st[12].name="DAMERA SRUTHI";
     st[12].id=513;
     st[12].attendence=81.11;
     st[12].gpa=8.58;
     st[12].percentage=85.8;

     st[13].name="DUGGASANI YASHWANTH REDDY";
     st[13].id=514;
     st[13].attendence=90.40;
     st[13].gpa=8.95;
     st[13].percentage=89.5;

     st[14].name="GANGULA ARVIND REDDY";
     st[14].id=515;
     st[14].attendence=88.57;
     st[14].gpa=7;
     st[14].percentage=70;

     st[15].name="GOGINENI GOPI KRISHNA";
     st[15].id=516;
     st[15].attendence=87;
     st[15].gpa=9.26;
     st[15].percentage=92.6;

     st[16].name="GUNDARAM ANUSHKA";
     st[16].id=517;
     st[16].attendence=95.57;
     st[16].gpa=8.8;
     st[16].percentage=88;

     st[17].name="KALAKATA YAGNA REDDY";
     st[17].id=518;
     st[17].attendence=98.57;
     st[17].gpa=9.76;
     st[17].percentage=97.6;

     st[18].name="KALLEDI SHREE SHRUTHA";
     st[18].id=519;
     st[18].attendence=70.1;
     st[18].gpa=6.0;
     st[18].percentage=60;

     st[19].name="KAMALA PRIYA VEGE";
     st[19].id=520;
     st[19].attendence=98.57;
     st[19].gpa=9.21;
     st[19].percentage=92.1;

     st[20].name="KAMMARI SAI ADITYA CHARY";
     st[20].id=521;
     st[20].attendence=74.80;
     st[20].gpa=8.48;
     st[20].percentage=84.8;

     st[21].name="KANAGALA RAMU";
     st[21].id=522;
     st[21].attendence=82.57;
     st[21].gpa=8.32;
     st[21].percentage=83.2;

     st[22].name="KANKANALA SRIJA";
     st[22].id=523;
     st[22].attendence=95.87;
     st[22].gpa=9;
     st[22].percentage=90;

     st[23].name="KANNEGUNDLA L N SRI RAM";
     st[23].id=524;
     st[23].attendence=94.01;
     st[23].gpa=9.37;
     st[23].percentage=93.7;

     st[24].name="KARUMANCHI LEELA VARA PRASAD";
     st[24].id=525;
     st[24].attendence=92.63;
     st[24].gpa=7.7;
     st[24].percentage=77;

     st[25].name="KESARI HRUDAY VIKAS REDDY";
     st[25].id=526;
     st[25].attendence=98.7;
     st[25].gpa=9.02;
     st[25].percentage=90.2;

     st[26].name="KETHAVATH SHANKAR";
     st[26].id=527;
     st[26].attendence=75.38;
     st[26].gpa=6;
     st[26].percentage=60;

     st[27].name="KODIGANTI RAVI KUMAR";
     st[27].id=528;
     st[27].attendence=90;
     st[27].gpa=8.2;
     st[27].percentage=82;

     st[28].name="KONDUTI YESHWANTH";
     st[28].id=529;
     st[28].attendence=85.57;
     st[28].gpa=6;
     st[28].percentage=60;

     st[29].name="KONERU LAKSHMI VINEELA";
     st[29].id=530;
     st[29].attendence=92.27;
     st[29].gpa=8.8;
     st[29].percentage=88;

     st[30].name="KOORA SUNAYANA";
     st[30].id=531;
     st[30].attendence=95.47;
     st[30].gpa=9.0;
     st[30].percentage=90;

     st[31].name="KUNA SNEHA";
     st[31].id=532;
     st[31].attendence=95.47;
     st[31].gpa=9.0;
     st[31].percentage=90;

     st[32].name="KUNTALA SAHITHI";
     st[32].id=533;
     st[32].attendence=95.47;
     st[32].gpa=8.54;
     st[32].percentage=85.4;

     st[33].name="LAMABAVAI KUMMERA SRINIVAS KARTHIK";
     st[33].id=534;
     st[33].attendence=97.24;
     st[33].gpa=9.21;
     st[33].percentage=92.1;

     st[34].name="MAVURI KIRANVINI";
     st[34].id=535;
     st[34].attendence=95.47;
     st[34].gpa=9.0;
     st[34].percentage=90;

     st[35].name="MUNNANGI PRANATHI";
     st[35].id=536;
     st[35].attendence=85;
     st[35].gpa=8.1;
     st[35].percentage=81;

     st[36].name="NALLANI CHAKRAVARTHULA VEDITH";
     st[36].id=537;
     st[36].attendence=95.47;
     st[36].gpa=9.21;
     st[36].percentage=79.16;

     st[37].name="NANNEPAGA SOWMYA SREE";
     st[37].id=538;
     st[37].attendence=85;
     st[37].gpa=8.5;
     st[37].percentage=85;

     st[38].name="NEELIMA REDDY KODEDHALA";
     st[38].id=539;
     st[38].attendence=85;
     st[38].gpa=8.2;
     st[38].percentage=82;

     st[39].name="NEERADI JAHNAVI";
     st[39].id=540;
     st[39].attendence=76;
     st[39].gpa=7.89;
     st[39].percentage=78.9;

     st[40].name="NUNEMUNTALA VARDHAN GOUD";
     st[40].id=541;
     st[40].attendence=93.17;
     st[40].gpa=9.23;
     st[40].percentage=92.3;

     st[41].name="PALTHIYA SURESH";
     st[41].id=542;
     st[41].gpa=7.8;
     st[41].attendence=88;
     st[41].percentage=78;

     st[42].name="PARSI NIHARIKA";
     st[42].id=543;
     st[42].gpa=9.21;
     st[42].attendence=94.57;
     st[42].percentage=92.1;

     st[43].name="PATTAMSETTI SAI ROHAN";
     st[43].id=544;
     st[43].attendence=95.57;
     st[43].gpa=9;
     st[43].percentage=90;

     st[44].name="POTLAPELLI SAI KOUSHIK";
     st[44].id=545;
     st[44].attendence=92.17;
     st[44].gpa=9.21;
     st[44].percentage=92.1;

     st[45].name="RAPARTHI SAI PRIYA";
     st[45].id=546;
     st[45].attendence=92.57;
     st[45].gpa=8.8;
     st[45].percentage=8;

     st[46].name="RAPOLE RAMSAI";
     st[46].id=547;
     st[46].attendence=88.57;
     st[46].gpa=8.5;
     st[46].percentage=85;

     st[47].name="RAYAPURTHI VIJAYA";
     st[47].id=548;
     st[47].attendence=90.04;
     st[47].gpa=8.2;
     st[47].percentage=82;

     st[48].name="REGATTE SAI KISHORE REDDY";
     st[48].id=549;
     st[48].attendence=92.42;
     st[48].gpa=8.8;
     st[48].percentage=88;

     st[49].name="REGULAPATI VENKAT GOUTHAM";
     st[49].id=550;
     st[49].attendence=87.71;
     st[49].gpa=7.1;
     st[49].percentage=71;

     st[50].name="RUDROJU SAITEJA";
     st[50].id=551;
     st[50].attendence=82.57;
     st[50].gpa=8.4;
     st[50].percentage=84;

     st[51].name="SABBITHI YAHWANTH";
     st[51].id=552;
     st[51].attendence=90;
     st[51].gpa=6;
     st[51].percentage=60;

     st[52].name="SIVVALA VINAY";
     st[52].id=553;
     st[52].attendence=92.65;
     st[52].gpa=8.3;
     st[52].percentage=83;

     st[53].name="SRIJA TULASI";
     st[53].id=554;
     st[53].attendence=91.9;
     st[53].gpa=9.68;
     st[53].percentage=96.8;

     st[54].name="SRUNGARAPU SAHITHI";
     st[54].id=555;
     st[54].attendence=88.48;
     st[54].gpa=6;
     st[54].percentage=60;

     st[55].name="SUNKARA VAISHNAVI LAKSHMI";
     st[55].id=556;
     st[55].attendence=90.26;
     st[55].gpa=7.2;
     st[55].percentage=72;

     st[56].name="TANUJA MALOTJ";
     st[56].id=557;
     st[56].attendence=88.50;
     st[56].gpa=7.56;
     st[56].percentage=75.6;

     st[57].name="TEEGALA LAXMI NANADAN RAO";
     st[57].id=558;
     st[57].attendence=85.92;
     st[57].gpa=6;
     st[57].percentage=60;

     st[58].name="THELUKUNTLA SAI CHANDRA";
     st[58].id=559;
     st[58].attendence=80.2;
     st[58].gpa=9.32;
     st[58].percentage=93.2;

     st[59].name="VARKALA PRAMILA";
     st[59].id=560;
     st[59].attendence=93;
     st[59].gpa=9.0;
     st[59].percentage=90;
     char aa[60][60]={"ADDI SATHVIKA","AMETI SADHANA","ANNAM NAVYA SREE","KADALI ANUSHA","BALAGA SATEESH","BANDI APOORVA","BAYAGANI SRI SATYA","BELAPURE ASHISH","BONADALA ROSHAN KUMAR","CHINTAMANENI MAHA LAKSHMI","CHUNDRU HARSHITHA","CILARAPU PRITHVI RAJ","DAMERA SRUTHI","DUGGASANI YASHWANTH REDDY","GANGULA ARAVIND REDDY","GOGINENI GOPI KRISHNA","GUNDARAM ANUSHKA","KALAKATA YAGNA REDDY","KALLEDI SHREE SHRUTHA","KAMALA PRIYA VEGE","KAMMARI SAI ADITYA CHARY","KANAGALA RAMU","KANKANALA SRIJA","KANNEGUNDLA L N SRI RAM","KARUMANCHI LEELA VARA PRASAD","KESARI HRUDAY VIKAS REDDY","KETHAVATH SHANKAR","KODIGANTI RAVI KUMAR","KONDUTI YESHWANTH","KONERU LAKSHMI VINEELA","KOORA SUNAYANA","KUNA SNEHA","KUNTALA SAHITHI","L K SRINIVAS KARTHIK","MAVURI KIRANVINI","MUNNANGI PRANATHI","NALLANI CHAKRVARTHULA VEDITH","NANNEPAGA SOWMYA SREE","NEELIMA REDDY KODEDHALA","NEERADI JAHNAVI","NUNEMUNTALA VARDHAN GOUD","PALTHIYA SURESH","PARSI NIHARIKA","PATTAMSETTI SAI ROHAN","POTLAPELLI SAI KOUSHIK","RAPARTHI SAI PRIYA","RAPOLE RAMSAI","RAYAPURTHI VIJAYA","REGATTE SAI KISHORE REDDY","REGULAPATI VENKAT GOUTHAM","RUDROJU SAI TEJA","SABBITHI YAHWANTH","SIVVALA VINAY","SRIJA TULASI","SRUNGARAPU SAHITHI","SUNKARA VAISHNAVI LAKSHMI","TANUJA MALOTJ","TEEGALA LAKSHMI NANADAN RAO","THELUKUNTLA SAI CHANDRA","VARKALA PRAMILA"};
     printf("\t\t\t\t\t\t\tVNR VIGNANA JYOTHI INSTITUTE OF ENGINNERING AND TECHNOLOGY");
     printf("\n\t\t\t\t\t\t\t\t\t   HYDERABAD,TELANGANA");
     printf("\n\t\t\t\t\t\t\t\t\t\tEstd.1995");
     printf("\n\t\t\t\t\t\t\t     DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING-(CSE)");
     printf("\n\t\t\t\t\t\t\t\t   WELCOME TO THE STUDENT MANAGEMENT SYSTEM");
     printf("\nCLASS\t\t:CSE-A");
     printf("\nCLASS STRENGTH\t:60");
     while(505)
     {
     printf("\n1.\tSTUDENT ACCOUNT LOGIN");
     printf("\n2.\tCLASS STUDENT DETAILS");
     printf("\n3.\tCLASS TEACHING STAFF");
     printf("\n4.\tCLASS CRICKET TEAM");
     printf("\n5.\tCOURSES REGISTERED FOR SEMESTER-II(2019-2020)");
     printf("\n6.\tCLASS RESULT DETAILS");
     printf("\n7.\tLABS");
     printf("\n8.\tCLASS TIME TABLE AND TIMINGS");
     printf("\n9.\tEXIT FROM THE PAGE");
     printf("\nENTER YOUR CHOICE:");
     scanf("%d",&n);
     switch(n)
     {
         case 1:login:
                printf("\nSTUDENT ID\t:");
                scanf("%d",&i);
                printf("\nPASSWORD\t:");
                scanf("%d",&p);
                if(i>500&&i<561)
                {
                    count++;
                    if(p==i)
                    {
                    r=p%10;
                    p=p/10;
                    s=p%10;
                    t=s*10+r;
                    t=t-1;
                    printf("\t\t\t\t\t\tWELCOME 19071A0%d",i);
                    printf("\n\t\t\tNAME:%s",st[t].name);
                    printf("\n\t\t\tHALL TICKET NUMBER:19071A0%d",st[t].id);
                    printf("\n\t\t\tCONSOLIDATED ATTENDENCE:%.2f",st[t].attendence);
                    printf("\n\t\t\tS-GPA FOR SEMESTER-I:%.2f",st[t].gpa);
                    printf("\n\n\t\t\t\t\t\tCOURSES REGISTERED FOR ACADEMIC YEAR(2019-2020)");
                    printf("\n\t\t\tSUBJECT CODE\t\t\tNAME OF SUBJECT\t\t\tNAME OF FACULTY");
                    printf("\n\t\t\t19BS1MT04\t\t\tLAAC\t\t\t\tDr.G.JITENDER REDDY");
                    printf("\n\t\t\t19BS1CH01\t\t\tCHEMISTRY\t\t\tDr.A.R.BALA VARDHANA RAO");
                    printf("\n\t\t\t19ES1IT01\t\t\tDATA STRUCTURES\t\t\tDr.B.V.KIRANMAYEE");
                    printf("\n\t\t\t19ES1EE01\t\t\tSMDA\t\t\t\tD.SWARNAKAR");
                    printf("\n\t\t\t19ES3ME02\t\t\tWORKSHOP\t\t\tDr.B.SATYA NARAYANA");
                    printf("\n\t\t\t19PW4CS01\t\t\tENGLISH\t\t\t\tK.ASHOK");
                    }
                else if(count==3)
                    {
                    printf("Please contact Administrator to unlock your account");
                    exit(0);
                    }
                else
                    {
                    printf("Your Entered User ID or Password is incorrect.");
                    printf("You have %d more attempts",3-count);
                    goto login;
                    }
            }
            else
            {
                printf("Your Entered User ID does not match with our records.");
                goto login;
            }
                break;
         case 2:class_a:
                printf("\n1.Roll List from Top");
                printf("\n2.Roll List from Bottom");
                printf("\nEnter your Choice:");
                scanf("%d",&z);
                if(z==1)
                {
    i=0;
    while(i<60)
    {
    nn=(struct node*)malloc(sizeof(struct node));
    nn->nam=aa[i];
    nn->next=NULL;
    if(top1==NULL)
    {
        top1=nn;
        top=nn;
    }
    else
    {
        top1->next=nn;
        top1=nn;
    }
    i++;
    }
    printf("\n\tHALL TICKET NUMBER\t\t\tSTUDENT NAME");
    i=0;
    pp=top;
    while(pp!=NULL)
    {
        if(i<9)
        {
        printf("\n\t19071A050%d\t\t\%s",i+1,pp->nam);
        }
        else
        {
        printf("\n\t19071A05%d\t\t\%s",i+1,pp->nam);
        }
        pp=pp->next;
        i++;
    }
    break;
                }
                if(z==2)
                {
    i=0;
    while(i<60)
    {
    nn=(struct node*)malloc(sizeof(struct node));
    nn->nam=aa[i];
    nn->next=NULL;
    if(top==NULL)
    {
        top=nn;
    }
    else
    {
        nn->next=top;
        top=nn;
    }
    i++;
    }
    pp=top;
    printf("\n\tHALL TICKET NUMBER\t\t\tSTUDENT NAME");
    i=0;
    while(pp!=NULL)
    {
        if(i<51)
        {
        printf("\n\t19071A05%d\t\t\%s",60-i,pp->nam);
        }
        else
        {
        printf("\n\t19071A050%d\t\t\%s",60-i,pp->nam);
        }
        pp=pp->next;
        i++;
    }
                    break;
                }
                else
                    goto class_a;
         case 3:teaching_staff();
                break;
         case 4:cricket_team();
                break;
         case 5:course_details();
                break;
         case 6:
                mergesort(0,high);
                printf("\n\t\t\tS.No\t\t\tRoll No.\t\t\tS-GPA\t\t\tNAME OF STUDENT");
                for(i=high;i>=0;i--)
                {
                    for(j=0;j<60;j++)
                    {
                        if(a[i]==gp[j])
                        {
                            if(j>8)
                            {
                                printf("\n\t\t\t%d\t\t\t19071A05%d\t\t\t%.2f\t\t\t%s",60-i,j+1,a[i],st[j].name);
                                gp[j]=0;
                                break;
                            }
                            else
                            {
                                printf("\n\t\t\t%d\t\t\t19071A050%d\t\t\t%.2f\t\t\t%s",60-i,j+1,a[i],st[j].name);
                                gp[j]=0;
                                break;
                            }
                        }
                    }
                }
                break;
         case 7:lab_details();
                break;
         case 8:time_table();
                break;
         case 9:exit(0);
         default:printf("\nInvalid Input!!\nPlease Try Again!!");
     }
     }
    /*double time_spent = 0.0;
	clock_t begin = clock();
	Sleep(3);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nTime elapsed to run your project is %f seconds", time_spent);*/
    return 0;
}

void lab_details()
{
     printf("\n\t\t\t\tLABS");
     printf("\n\t\t\t19ES2IT01-DATA STRUCTURES");
     printf("\n\t\t\t19BS2CH01-ENGINEERING CHEMISTRY");
     printf("\n\t\t\t19BS1MT05-STATISTICAL METHODS FOR DATA ANALYSIS- R LANGUAGE");
     printf("\n\t\t\t19ES2ME01-WORKSHP PRACTICES");
     printf("\n\t\t\t19HS2EN01-ENGLISH LANGUAGE COMMUNICATION SKILLS");
}

void cricket_team()
{
    printf("\n\t\t\t\t\tCRICKET TEAM");
    printf("\n\t\t\tBALAGA SATEESH\t\t\tALL ROUNDER");
    printf("\n\t\t\tVARDHAN\t\t\t\tBOWLER");
    printf("\n\t\t\tGOUTHAM\t\t\t\tBATSMAN");
    printf("\n\t\t\tKARTHIK\t\t\t\tALL ROUNDER");
    printf("\n\t\t\tADITYA\t\t\t\tBATSMAN");
    printf("\n\t\t\tSURESH\t\t\t\tBATSMAN");
    printf("\n\t\t\tPRITHVI\t\t\t\tALLROUNDER");
    printf("\n\t\t\tRAMSAI\t\t\t\tBATSMAN");
    printf("\n\t\t\tSRI RAM\t\t\t\tBATSMAN");
    printf("\n\t\t\tL V PRASAD\t\t\tALL ROUNDER");
    printf("\n\t\t\tNANDAN RAO\t\t\tBATSMAN");
}

void course_details()
{
    printf("\n\t\t\t\t\t\tCOURSES REGISTERED FOR ACADEMIC YEAR(2019-2020)");
    printf("\n\t\t\tSUBJECT CODE\t\t\tNAME OF SUBJECT\t\t\tNAME OF FACULTY");
    printf("\n\t\t\t19BS1MT04\t\t\tLAAC\t\t\t\tDr.G.JITENDER REDDY");
    printf("\n\t\t\t19BS1CH01\t\t\tCHEMISTRY\t\t\tDr.A.R.BALA VARDHANA RAO");
    printf("\n\t\t\t19ES1IT01\t\t\tDATA STRUCTURES\t\t\tDr.B.V.KIRANMAYEE");
    printf("\n\t\t\t19ES1EE01\t\t\tSMDA\t\t\t\tD.SWARNAKAR");
    printf("\n\t\t\t19ES3ME02\t\t\tWORKSHOP\t\t\tDr.B.SATYA NARAYANA");
    printf("\n\t\t\t19PW4CS01\t\t\tENGLISH\t\t\t\tK.ASHOK");
}
void teaching_staff()
{
    printf("\n\t\t\t\t\t\tTEACHING STAFF");
    printf("\n\t\t\tSTAFF CODE\t\t\tNAME OF SUBJECT\t\t\tNAME OF FACULTY");
    printf("\n\t\t\t19BS1MT04\t\t\tLAAC\t\t\t\tDr.G.JITENDER REDDY");
    printf("\n\t\t\t19BS1CH01\t\t\tCHEMISTRY\t\t\tDr.A.R.BALA VARDHANA RAO");
    printf("\n\t\t\t19ES1IT01\t\t\tDATA STRUCTURES\t\t\tDr.B.V.KIRANMAYEE");
    printf("\n\t\t\t19ES1EE01\t\t\tSMDA\t\t\t\tD.SWARNAKAR");
    printf("\n\t\t\t19ES3ME02\t\t\tWORKSHOP\t\t\tDr.B.SATYA NARAYANA");
    printf("\n\t\t\t19PW4CS01\t\t\tENGLISH\t\t\t\tK.ASHOK");
}
void time_table()
{
            m:
                printf("Enter the day to display time timetable:");
                scanf("%d",&day);
                 switch(day)
            {
            case 1:
                printf("\n\t\t\tMONDAY TIME TABLE");
                printf("\n\t\tSMDA CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tENGLISH CLASS WORK(10.00AM TO 11.00AM ");
                printf("\n\t\tCHEMISTRY CLASS WORK(11.0PM TO 12.00PM)");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tEC/DS LABORATORY(12.40PM TO 3.40PM)");
                break;
            case 2:
                printf("\n\t\t\tTUESDAY TIME TABLE");
                printf("\n\t\tEC/DS LABORATORY(9.00AM TO 12.00PM)");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tLAAC CLASS WORK(12.40PM TO 1.40PM)");
                printf("\n\t\tSMDA CLASS WORK(1.40PM TO 2.40PM)");
                printf("\n\t\tPRP CLASS(2.40PM TO 3.40PM)");
                break;
             case 3:
                printf("\n\t\t\tWEDNESDAY TIME TABLE");
                printf("\n\t\tENGLISH CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tDATA STRUCTURES CLASS WORK(10.00AM TO 11.00AM)");
                printf("\n\t\tLAAC CLASS WORK(11.00AM TO 12.00PM )");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tCHEMISTRY CLASS WORK(12.40PM TO 1.40PM)");
                printf("\n\t\tR-LANGUAGE LABORATORY(1.40PM TO 3.40PM)");
                break;
             case 4:
                printf("\n\t\t\tTHURSDAY TIME TABLE");
                printf("\n\t\tWORKSHOP PRACTICES(9.00AM TO 12.00PM)");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tCHEMISTRY CLASS WORK(12.40PM TO 1.40PM)");
                printf("\n\t\tDATA STRUCTURES CLASS WORK(1.40PM TO 2.40PM)");
                printf("\n\t\tSPORTS(2.40PM TO 3.40PM)");
                break;
             case 5:
                printf("\n\t\t\tFRIDAY TIME TABLE");
                printf("\n\t\tENGLISH CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tLAAC CLASS WORK(10.00AM TO 11.00AM)");
                printf("\n\t\tDATA STRUCTURES CLASS WORK(11.00AM TO 12.00PM )");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tELCS LABORATORY(12.00PM TO 3.40PM)");
                break;
             case 6:
                printf("\n\t\t\tSATURDAY TIME TABLE");
                printf("\n\t\tLAAC CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tDATA STRUCTURES CLASS WORK(10.00AM TO 11.00AM)");
                printf("\n\t\tSMDA CLASS WORK(11.00AM TO 12.00PM )");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tENGLISH CLASS WORK(12.40PM TO 1.40PM)");
                printf("\n\t\tMTP CLASS(1.40PM TO 2.40PM)");
                printf("\n\t\tLIBRARY(2.40PM TO 3.40PM)");
                break;
             case 7:
                printf("\n COLLEGE REMAINS HOLIDAY ON SUNDAY");
                break;
             default:
                printf("INVALID ENTRY");
                goto m;
            }
}
void mergesort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
    else
    {
        return;
    }
}
void merge(int low,int mid,int high)
{
    int i,j,h;
    for(h=low,i=low,j=mid+1;h<=mid&&j<=high;i++)
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
    }
    while(h<=mid)
    {
      b[i]=a[h];
      i++;
      h++;
    }
    while(j<=high)
    {
      b[i]=a[j];
      i++;
      j++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}

