

#include<stdio.h>

#include<math.h>

double principal=0,mount=0;

int year=0;

int n=1;

double rate;

 

void danli(){

    printf("������ı���");

    scanf("%lf",&principal);

    printf("���������ޣ�");

    scanf("%d",&year);
    printf("�����������ʣ�");

    scanf("%lf",&rate);

    mount=principal+principal*rate*year;

    printf("��ϢΪ��%.2lf\n",mount); 

}

 

void fuli(){

 

    printf("�����뱾��");

    scanf("%lf",&principal);

    printf("���������ޣ�");

    scanf("%d",&year);

    printf("�����������ʣ�");

    scanf("%lf",&rate);

    printf("�������긴������:");

    scanf("%d",&n);

    rate=pow((1+rate/n),n)-1;

    mount=principal*pow((1+rate),year);

    printf("��ϢΪ��%.2lf\n",mount);

 

}

 

void principaljisuan(){

    printf("���������������棺");

    scanf("%lf",&mount);  

    printf("���������ޣ�");

    scanf("%d",&year);

    printf("�����������ʣ�");

    scanf("%lf",&rate);

    printf("�������긴������:");

    scanf("%d",&n);

    rate=pow((1+rate/n),n)-1;

    principal=mount/pow((1+rate),year);

    printf("������豾��Ϊ��%.2lf\n",principal);

 

}

 
void time()
{
	int flat=0;
    
    printf("�����뱾����:"); 
    scanf("%lf",&mount); 
    printf("��������ر���:"); 
    scanf("%lf",&rate); 
    printf("�����뱾��:"); 
    scanf("%lf",&principal); 
    for(n=1;n<100;n++)    //��ٷ���100������ļ�Ϣ����
    {
        if((principal*(pow((1+rate),n)))>=mount)
        {
            printf("��Ϣ����:%d\n\n",n);
            flat=1;
            break;
        }
    }
    if(flat==0)
        printf("��100����û�з��ϼ�Ϣ����!\n\n");
    
}

void lilv()
{
    
    printf("�����뱾����:"); 
    scanf("%lf",&mount); 
    printf("�����븴���������꣩:"); 
    scanf("%d",&year); 
    printf("�����뱾��:"); 
    scanf("%lf",&principal); 
    rate=pow(mount/principal, 1.0/year)-1;
    printf("������Ϊ:%lf",rate);
}

 main(){

    int num=0;

printf("|----------------------------------------|\n");

printf("|          1.��������                    |\n");

printf("|          2.��������                    |\n");

printf("|          3.���㱾��                    |\n");

printf("|          4.���޼���                    |\n");

printf("|          5.���ʹ���                    |\n");

printf("|----------------------------------------|\n");

printf("������ѡ��");

scanf("%d",&num);

switch(num){

case 1:

    fuli(); 

    break;

case 2:

   danli();

    break;

case 3:

    principaljisuan();

break;
 case 4:

     time();
			
 break;
 case 5:

   lilv();

	break;





}

}