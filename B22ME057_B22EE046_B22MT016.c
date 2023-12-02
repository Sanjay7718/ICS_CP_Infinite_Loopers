#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
    int x;
    printf("Enter the Password Strength Requirement : ");
    scanf("%d",&x);
    int passwordsize = 10;
    char password[passwordsize+1];
    if(x==50){
        char num[] = "0123456789";
        int size = strlen(num);
        srand(time('\0'));
        for(int i=0;i<passwordsize;i++){
            int index = rand()%size;
            password[i]=num[index];
        }
        password[passwordsize]='\0';
        printf("%s",password);
    }else if(x==65){
        char num2[]="0123456789abcdefghijklmnopqrstuvwxyz";
        int size2=strlen(num2);
        srand(time('\0'));
        for(int i=0;i<passwordsize;i++){
            int index2 = rand()%size2;
            password[i]=num2[index2];
        }
        password[passwordsize]='\0';
        printf("%s",password);
    }else if(x==75){
        char num3[]="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int size3=strlen(num3);
        srand(time('\0'));
        for(int i=0;i<passwordsize;i++){
            int index3 = rand()%size3;
            password[i]=num3[index3];
        }
        password[passwordsize]='\0';
        printf("%s",password);
    }else if(x==85){
        char num4[]="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ+-?=";
        int size4=strlen(num4);
        srand(time('\0'));
        for(int i=0;i<passwordsize;i++){
            int index4 = rand()%size4;
            password[i]=num4[index4];
        }
        password[passwordsize]='\0';
        printf("%s",password);
    }else if(x==100){
        char num51[]="0123456789";
        char num52[]="abcdefghijklmnopqrstuvwxyz";
        char num53[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char num54[]="+-?=!@#$";
        char num5[]="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ+-?=!@#$";
        srand(time(NULL));
        int size51=strlen(num51);
        int size52=strlen(num52);
        int size53=strlen(num53);
        int size54=strlen(num54);
        int size5=strlen(num5);
        password[0]=num51[rand()%size51];
        password[1]=num51[rand()%size51];
        password[2]=num52[rand()%size52];
        password[3]=num52[rand()%size52];
        password[4]=num53[rand()%size53];
        password[5]=num53[rand()%size53];
        password[6]=num54[rand()%size54];
        password[7]=num54[rand()%size54];
        password[8]=num5[rand()%size5];
        password[9]=num5[rand()%size5];
        password[passwordsize]='\0';
        int size6=strlen(password);
        for (int i=size6-1;i>0;i--){
            int j=rand()%(i+1);
            char temp = password[i];
            password[i]=password[j];
            password[j]=temp;
    }
        password[passwordsize]='\0';
        printf("%s",password);
    }else{
        printf("Incorrect Strength Option");
    }
    return 0;
}
