#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
struct Character
{
    int power,superpower,HP,final1,final2,up1,up2,low1,low2;
};
struct Character Naruto;//1 TEAM 1
Naruto.up1 = 30;
Naruto.low1 = 20;
srand(time(NULL));
Naruto.final1 = (rand()%(Naruto.up1-Naruto.low1+1))+Naruto.low1;
Naruto.power = Naruto.final1;//RASENGAN!!!!
Naruto.up2 = 50;
Naruto.low2 = 45;
srand(time(NULL));
Naruto.final2 = (rand()%(Naruto.up2-Naruto.low2+1))+Naruto.low2;
Naruto.superpower = Naruto.final2;//RASEN SHURIKEN!!!!
Naruto.HP = 100;//Naruto HP
struct Character Kakashi;//2    TEAM 1
Kakashi.up1 = 25;
Kakashi.low1 = 20;
srand(time(NULL));
Kakashi.final1 = (rand()%(Kakashi.up1-Kakashi.low1+1))+Kakashi.low1;
Kakashi.power = Kakashi.final1; //CHIDORI!!!!!!  
Kakashi.up2 = 40;
Kakashi.low2 = 35;
srand(time(NULL));
Kakashi.final2 = (rand()%(Kakashi.up2-Kakashi.low2+1))+Kakashi.low2;
Kakashi.superpower = Kakashi.final2; //SUSANOO!!!!
Kakashi.HP = 100;//Kakashi HP
struct Character Madara;//3 TEAM 1
Madara.up1 = 35;
Madara.low1 = 30;
srand(time(NULL));
Madara.final1 = (rand()%(Madara.up1-Madara.low1+1))+Madara.low1;
Madara.power = Madara.final1; //FIRE STYLE MAJESTICK DESTROYER FLAME!!!!!
Madara.up2 = 60;
Madara.low2 = 55;
srand(time(NULL));
Madara.final2 = (rand()%(Madara.up2-Madara.low2+1))+Madara.low2;
Madara.superpower = Madara.final2; //DEEP FOREST BLOOM!!!!
Madara.HP = 100;//Madara HP
struct Character Sasuke;//1 TEAM 2
Sasuke.up1 = 25;
Sasuke.low1 = 15;
srand(time(NULL));
Sasuke.final1 = (rand()%(Sasuke.up1-Sasuke.low1+1))+Sasuke.low1;
Sasuke.power = Sasuke.final1;//FIRE STYLE:FIRE BALL JUTSU!!!!!!
Sasuke.up2 = 45;
Sasuke.low2 = 40;
srand(time(NULL));
Sasuke.final2 = (rand()%(Sasuke.up2-Sasuke.low2+1))+Sasuke.low2;
Sasuke.superpower = Sasuke.final2; //KIRIN!!!!!
Sasuke.HP = 100;//Sasuke HP
struct Character Jiraiya;//2    TEAM 2
Jiraiya.up1 = 40;
Jiraiya.low1 =35;
srand(time(NULL));
Jiraiya.final1 = (rand()%(Jiraiya.up1-Jiraiya.low1+1))+Jiraiya.low1;
Jiraiya.power = Jiraiya.final1; //NINJA ART : TOAD MOUTH TRAP!!!!!
Jiraiya.up2 = 50;
Jiraiya.low2 = 45;
srand(time(NULL));
Jiraiya.final2 = (rand()%(Jiraiya.up2-Jiraiya.low2+1))+Jiraiya.low2;
Jiraiya.superpower = Jiraiya.final2; //JIRAIYA'S TOAD GENJUTSU!!!!!
Jiraiya.HP = 100;//Jiraiya HP
struct Character Itachi;//3 TEAM 2
Itachi.up1 = 20;
Itachi.low1 = 15;
srand(time(NULL));
Itachi.final1 = (rand()%(Itachi.up1-Itachi.low1+1))+Itachi.low1;
Itachi.power = Itachi.final1; //PHOENIX FLOWER JUTSU!!!!
Itachi.up2 = 50;
Itachi.low2 = 40;
srand(time(NULL));
Itachi.final2 = (rand()%(Itachi.up2-Itachi.low2+1))+Itachi.low2;
Itachi.superpower = Itachi.final2; //GENJUTSU!!!!
Itachi.HP = 100;//Itachi HP
int PS1,PS2,min1,min2,max1,max2,result1,result2,attack11,attack12,attack13,attack21,attack22,attack23,damage,hp1,hp2,again;
//STARTING
playagain:
again = 0;
//PLAYER
printf("\n\n\t\t\t\t\t\t\t    ______________________");
printf("\n\n\t\t\t\t\t\t\t    WELCOME TO NARUTO GAME");
printf("\n\t\t\t\t\t\t\t    ______________________\n\n\n");
printf("\n\t\t\t\t\t\t\t       ________________");
printf("\n\t\t\t\t\t\t\t      |                |");
printf("\n\t\t\t\t\t\t\t      |TEAM 1 VS TEAM 2|");
printf("\n\t\t\t\t\t\t\t      |                |");
printf("\n\t\t\t\t\t\t\t     --------------------");
printf("\n\t\t\t\t\t\t\t     --------------------");
printf("\n\n\nTEAMS :- ");
printf("\n\n\t TEAM 1\t\t\t TEAM 2\n\n\t1.NARUTO\t\t1.SASUKE\n\t2.KAKASHI\t\t2.JIRAIYA\n\t3.MADARA\t\t3.ITACHI");
printf("\n\n\n\n\t\t   LET'S PLAY...");
printf("\n\n\nPLAYER SELECT ONE CHARACTER FROM TEAM 1 : ");
scanf("%d",&PS1);
switch(PS1)
{
case 1:
case 2:
case 3:
//COMPUTER
max1=3;
min1=1;
srand(time(NULL));
result1 = (rand()%(max1-min1+1))+min1;
PS2 = result1;
printf("\n\nCOMPUTER SELECT ONE CHARACTER FROM TEAM 2 : %d",PS2);
break;
default:
printf("\n\n\n\n-->THIS CHARACTER DOES NOT EXIST");
goto end;
break;
}///end of switch
//1 VS 1
if(PS1==1 && PS2==1){
    printf("\n\n\n\t-->NARUTO HP : 100      VS      SASUKE HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 1
        printf("\n\nTEAM 1\nNARUTO ATTACKS :-\n\n1.RASENGAN!!!! (LOW)\n2.RASEN SHURIKEN!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack11);
        if(attack11 != 1 && attack11 != 2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack11 == 1){//Attack11
        attack11 = Naruto.power;}
        if(attack11 == 2){
        attack11 = Naruto.superpower;}
        //TEAM 2 CHAR 1
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack21 = result2;
        printf("\n\nTEAM 2\nSASUKE ATTACKS :-\n\n1.FIRE STYLE : FIRE BALL JUTSU!!!! (LOW)\n2.CHIDORI!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack21);
        if(attack21 == 1){//Attack21
            attack21 = Sasuke.power;}
        if(attack21 == 2){
        attack21 = Sasuke.superpower;}
        //DAMAGE
        hp1 = Naruto.HP - attack21;
        hp2 = Sasuke.HP - attack11;
        Naruto.HP = hp1;
        Sasuke.HP = hp2;
        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
                printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - NARUTO\nLOSS : TEAM 2 - SASUKE\n\nNARUTO = LOW HP      VS      SASUKE = DIED\n\n");
                printf("\n\t\t\t\t\t\t\t      |                |");
                printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
                printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - SASUKE\nLOSS : TEAM 1 - NARUTO\n\nNARUTO = DIED      VS      SASUKE = LOW HP\n\n");
                printf("\n\t\t\t\t\t\t\t      |                |");
                printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
                printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION : \n\nDRAW\n\nNARUTO HP = %d      VS      SASUKE HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - SASUKE\nLOSS : TEAM 2 - NARUTO\n\nNARUTO HP = %d      VS      SASUKE HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - NARUTO\nLOSS : TEAM 1 - SASUKE\n\nNARUTO HP = %d       VS      SASUKE HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\nNARUTO HP = %d      VS      SASUKE HP = %d",hp1,hp2);
    }
}
//1 VS 2
if(PS1==1 && PS2==2){
    printf("\n\n\n\t-->NARUTO HP : 100      VS      JIRAIYA HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 1
        printf("\n\nTEAM 1\nNARUTO ATTACKS :-\n\n1.RASENGAN!!!! (LOW)\n2.RASEN SHURIKEN!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack11);
        if(attack11!=1 && attack11!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack11 == 1){//Attack11
        attack11 = Naruto.power;}
        if(attack11 == 2){
        attack11 = Naruto.superpower;}

        //TEAM 2 CHAR 2
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack22 = result2;
        printf("\n\nTEAM 2\nJIRAIYA ATTACKS :\n\n1.NINJA ART : TOAD MOUTH TRAP!!!! (LOW)\n2.JIRAIYA'S TOAD GENJUTSU!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack22);
        if(attack22 == 1){//Attack22
            attack22 = Jiraiya.power;}
        if(attack22 == 2){
        attack22 = Jiraiya.superpower;}
        //DAMAGE
        hp1 = Naruto.HP - attack22;
        hp2 = Jiraiya.HP - attack11;
        Naruto.HP = hp1;
        Jiraiya.HP = hp2;
        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - NARUTO\nLOSS : TEAM 2 - JIRAIYA\n\nNARUTO = LOW HP      VS      JIRAIYA = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - JIRAIYA\nLOSS : TEAM 1 - NARUTO\n\nNARUTO = DIED      VS      JIRAIYA = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION :\n\nDRAW\n\nNARUTO HP = %d      VS      JIRAIYA HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - JIRAIYA\nLOSS : TEAM 2 - NARUTO\n\nNARUTO HP = %d      VS      JIRAIYA HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - NARUTO\nLOSS : TEAM 1 - JIRAIYA\n\nNARUTO HP = %d      VS      JIRAIYA HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\n-->NARUTO HP = %d      VS      JIRAIYA HP = %d",hp1,hp2);
    }
}
//1 VS 3
if(PS1==1 && PS2==3){
    printf("\n\n\t-->NARUTO HP : 100      VS      ITACHI HP : 100");
    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 1
        printf("\n\nTEAM 1\nNARUTO ATTACKS :-\n\n1.RASENGAN!!!! (LOW)\n2.RASEN SHURIKEN!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack11);
        if(attack11!=1 && attack11!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack11 == 1){//Attack11
        attack11 = Naruto.power;}
        if(attack11 == 2){
        attack11 = Naruto.superpower;}
        //TEAM 2 CHAR 2
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack23 = result2;
        printf("\n\nTEAM 2\nITACHI ATTACKS :-\n\n1.PHOENIX FLOWER JUTSU!!!! (LOW)\n2.GENJUTSU!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack23);
        if(attack23 == 1){//Attack23
            attack23 = Itachi.power;}
        if(attack23 == 2){
        attack23 = Itachi.superpower;}
        //DAMAGE
        hp1 = Naruto.HP - attack23;
        hp2 = Itachi.HP - attack11;
        Naruto.HP = hp1;
        Itachi.HP = hp2;
        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - NARUTO\nLOSS : TEAM 2 - ITACHI\n\nNARUTO = LOW HP      VS      ITACHI = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - ITACHI\nLOSS : TEAM 1 - NARUTO\n\nNARUTO = DIED      VS      ITACHI = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION :\n\nDRAW\n\nNARUTO HP = %d      VS      ITACHI HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - ITACHI\nLOSS : TEAM 2 - NARUTO\n\nNARUTO HP = %d      VS      ITACHI HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - NARUTO\nLOSS : TEAM 1 - ITACHI\n\nNARUTO HP = %d      VS      ITACHI HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\n-->NARUTO HP = %d      VS      ITACHI HP = %d",hp1,hp2);
    }
}

//2 VS 1
if(PS1==2 && PS2==1){
    printf("\n\n\n\t-->KAKASHI HP : 100      VS      SASUKE HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 2
        printf("\n\nTEAM 1\nKAKASHI ATTACKS :-\n\n1.CHIDORI!!!! (LOW)\n2.SUSANOO!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack12);
        if(attack12!=1 && attack12!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack12 == 1){//Attack12
        attack12 = Kakashi.power;}
        if(attack12 == 2){
        attack12 = Kakashi.superpower;}
        //TEAM 2 CHAR 1
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack21 = result2;
        printf("\n\nTEAM 2\nSASUKE ATTACKS :-\n\n1.FIRE STYLE : FIRE BALL JUTSU!!!! (LOW)\n2.CHIDORI!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack21);
        if(attack21 == 1){//Attack21
            attack21 = Sasuke.power;}
        if(attack21 == 2){
        attack21 = Sasuke.superpower;}
        //DAMAGE
        hp1 = Kakashi.HP - attack21;
        hp2 = Sasuke.HP - attack12;
        Kakashi.HP = hp1;
        Sasuke.HP = hp2;
        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - KAKASHI\nLOSS : TEAM 2 - SASUKE\n\nKAKASHI = LOW HP      VS      SASUKE = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - SASUKE\nLOSS : TEAM 1 - KAKASHI\n\nKAKASHI = DIED      VS      SASUKE = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION : \n\nDRAW\n\nKAKASHI HP = %d      VS      SASUKE HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - SASUKE\nLOSS : TEAM 2 - KAKASHI\n\nKAKASHI HP = %d      VS      SASUKE HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - KAKASHI\nLOSS : TEAM 1 - SASUKE\n\nKAKASHI HP = %d       VS      SASUKE HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\nKAKASHI HP = %d      VS      SASUKE HP = %d",hp1,hp2);
    }
}
//2 VS 2
if(PS1==2 && PS2==2){
    printf("\n\n\n\t-->KAKASHI HP : 100      VS      JIRAIYA HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 2
        printf("\n\nTEAM 1\nKAKASHI ATTACKS :-\n\n1.CHIDORI!!!! (LOW)\n2.SUSANOO!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack12);
        if(attack12!=1 && attack12!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack12 == 1){//Attack12
        attack12 = Kakashi.power;}
        if(attack12 == 2){
        attack12 = Kakashi.superpower;}
        //TEAM 2 CHAR 2
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack22 = result2;
        printf("\n\nTEAM 2\nJIRAIYA ATTACKS :\n\n1.NINJA ART : TOAD MOUTH TRAP!!!! (LOW)\n2.JIRAIYA'S TOAD GENJUTSU!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack22);
        if(attack22 == 1){//Attack22
            attack22 = Jiraiya.power;}
        if(attack22 == 2){
        attack22 = Jiraiya.superpower;}
        //DAMAGE
        hp1 = Kakashi.HP - attack22;
        hp2 = Jiraiya.HP - attack12;
        Kakashi.HP = hp1;
        Jiraiya.HP = hp2;
        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - KAKASHI\nLOSS : TEAM 2 - JIRAIYA\n\nKAKASHI = LOW HP      VS      JIRAIYA = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - JIRAIYA\nLOSS : TEAM 1 - KAKASHI\n\nKAKASHI = DIED      VS      JIRAIYA = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION :\n\nDRAW\n\nKAKASHI HP = %d      VS      JIRAIYA HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - JIRAIYA\nLOSS : TEAM 2 - KAKASHI\n\nKAKASHI HP = %d      VS      JIRAIYA HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - KAKASHI\nLOSS : TEAM 1 - JIRAIYA\n\nKAKASHI HP = %d      VS      JIRAIYA HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\n-->KAKASHI HP = %d      VS      JIRAIYA HP = %d",hp1,hp2);
    }
}
//2 VS 3
if(PS1==2 && PS2==3){
    printf("\n\n\t-->KAKASHI HP : 100      VS      ITACHI HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 2
        printf("\n\nTEAM 1\nKAKASHI ATTACKS :-\n\n1.CHIDORI!!!! (LOW)\n2.SUSANOO!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack12);
        if(attack12!=1 && attack12!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack12 == 1){//Attack12
        attack12 = Kakashi.power;}
        if(attack12 == 2){
        attack12 = Kakashi.superpower;}
        //TEAM 2 CHAR 2
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack23 = result2;
        printf("\n\nTEAM 2\nITACHI ATTACKS :-\n\n1.PHOENIX FLOWER JUTSU!!!! (LOW)\n2.GENJUTSU!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack23);
        if(attack23 == 1){//Attack23
            attack23 = Itachi.power;}
        if(attack23 == 2){
        attack23 = Itachi.superpower;}
        //DAMAGE
        hp1 = Kakashi.HP - attack23;
        hp2 = Itachi.HP - attack12;
        Kakashi.HP = hp1;
        Itachi.HP = hp2;
        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
                printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - KAKASHI\nLOSS : TEAM 2 - ITACHI\n\nKAKASHI = LOW HP      VS      ITACHI = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - ITACHI\nLOSS : TEAM 1 - KAKASHI\n\nKAKASHI = DIED      VS      ITACHI = LOW HP\n\n",hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION :\n\nDRAW\n\nKAKASHI HP = %d      VS      ITACHI HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - ITACHI\nLOSS : TEAM 2 - KAKASHI\n\nKAKASHI HP = %d      VS      ITACHI HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - KAKASHI\nLOSS : TEAM 1 - ITACHI\n\nKAKASHI HP = %d      VS      ITACHI HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\n-->KAKASHI HP = %d      VS      ITACHI HP = %d",hp1,hp2);
    }
}
//3 VS 1
if(PS1==3 && PS2==1){
    printf("\n\n\n\t-->MADARA HP : 100      VS      SASUKE HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 3
        printf("\n\nTEAM 1\nMADARA ATTACKS :-\n\n1.FIRE STYLE MAJESTICK DESTROYER FLAME!!!! (LOW)\n2.DEEP FOREST BLOME!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack13);
        if(attack13!=1 && attack13!=2){
           printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack13 == 1){//Attack13
        attack13 = Madara.power;}
        if(attack13 == 2){
        attack13 = Madara.superpower;}
        //TEAM 2 CHAR 1
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack21 = result2;
        printf("\n\nTEAM 2\nSASUKE ATTACKS :-\n\n1.FIRE STYLE : FIRE BALL JUTSU!!!! (LOW)\n2.CHIDORI!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack21);
        if(attack21 == 1){//Attack21
            attack21 = Sasuke.power;}
        if(attack21 == 2){
        attack21 = Sasuke.superpower;}

        //DAMAGE
        hp1 = Madara.HP - attack21;
        hp2 = Sasuke.HP - attack13;
        Madara.HP = hp1;
        Sasuke.HP = hp2;

        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - MADARA\nLOSS : TEAM 2 - SASUKE\n\nMADARA = LOW HP      VS      SASUKE = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - SASUKE\nLOSS : TEAM 1 - MADARA\n\nMADARA HP = DIED      VS      SASUKE = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION : \n\nDRAW\n\nMADARA HP = %d      VS      SASUKE HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - SASUKE\nLOSS : TEAM 2 - MADARA\n\nMADARA HP = %d      VS      SASUKE HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - MADARA\nLOSS : TEAM 1 - SASUKE\n\nMADARA HP = %d       VS      SASUKE HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\nMADARA HP = %d      VS      SASUKE HP = %d",hp1,hp2);
    }
}
//3 VS 2
if(PS1==3 && PS2==2){
    printf("\n\n\n\t-->MADARA HP : 100      VS      JIRAIYA HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 3
        printf("\n\nTEAM 1\nMADARA ATTACKS :-\n\n1.FIRE STYLE MAJESTICK DESTROYER FLAME!!!! (LOW)\n2.DEEP FOREST BLOOM!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack13);
        if(attack13!=1 && attack13!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack13 == 1){//Attack13
        attack13 = Madara.power;}
        if(attack13 == 2){
        attack13 = Madara.superpower;}

        //TEAM 2 CHAR 2
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack22 = result2;
        printf("\n\nTEAM 2\nJIRAIYA ATTACKS :\n\n1.NINJA ART : TOAD MOUTH TRAP!!!! (LOW)\n2.JIRAIYA'S TOAD GENJUTSU!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack22);
        if(attack22 == 1){//Attack22
            attack22 = Jiraiya.power;}
        if(attack22 == 2){
        attack22 = Jiraiya.superpower;}

        //DAMAGE
        hp1 = Madara.HP - attack22;
        hp2 = Jiraiya.HP - attack13;
        Madara.HP = hp1;
        Jiraiya.HP = hp2;

        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
                printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - MADARA\nLOSS : TEAM 2 - JIRAIYA\n\nMADARA = LOW HP      VS      JIRAIYA = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - JIRAIYA\nLOSS : TEAM 1 - MADARA\n\nMADARA HP = DIED      VS      SASUKE = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION :\n\nDRAW\n\nMADARA HP = %d      VS      JIRAIYA HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - JIRAIYA\nLOSS : TEAM 2 - MADARA\n\nMADARA HP = %d      VS      JIRAIYA HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - MADARA\nLOSS : TEAM 1 - JIRAIYA\n\nMADARA HP = %d      VS      JIRAIYA HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\n-->MADARA HP = %d      VS      JIRAIYA HP = %d",hp1,hp2);
    }
}
//3 VS 3
if(PS1==3 && PS2==3){
    printf("\n\n\t-->MADARA HP : 100      VS      ITACHI HP : 100");

    while((hp1!=0 || hp1==0 )||(hp2!=0||hp2==0)){
        //TEAM 1 CHAR 3
        printf("\n\nTEAM 1\nMADARA ATTACKS :-\n\n1.FIRE STYLE MAJESTICK DESTROYER FLAME!!!! (LOW)\n2.DEEP FOREST BLOOM!!!! (HIGH)\n->SELECT ONE ATTACK : ");
        scanf("%d",&attack13);
        if(attack13!=1 && attack13!=2){
            printf("\n\n\n\n-->THIS ATTACK DOES NOT EXIST");
            goto end;} 
        if(attack13 == 1){//Attack13
        attack13 = Madara.power;}
        if(attack13 == 2){
        attack13 = Madara.superpower;}

        //TEAM 2 CHAR 2
        max2=2;
        min2=1;
        srand(time(NULL));
        result2 = (rand()%(max2-min2+1))+min2;
        attack23 = result2;
        printf("\n\nTEAM 2\nITACHI ATTACKS :-\n\n1.PHOENIX FLOWER JUTSU!!!! (LOW)\n2.GENJUTSU!!!! (HIGH)\n->COMPUTER SELECT ONE ATTACK : %d",attack23);
        if(attack23 == 1){//Attack23
            attack23 = Itachi.power;}
        if(attack23 == 2){
        attack23 = Itachi.superpower;}

        //DAMAGE
        hp1 = Madara.HP - attack23;
        hp2 = Itachi.HP - attack13;
        Madara.HP = hp1;
        Itachi.HP = hp2;

        //RESULT
        if(hp1<0 || hp2<0){
            if(hp1>hp2){
                printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - MADARA\nLOSS : TEAM 2 - ITACHI\n\nMADARA = LOW HP      VS      ITACHI = DIED\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
                goto finish;}
            else{printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - ITACHI\nLOSS : TEAM 1 - MADARA\n\nMADARA HP = DIED      VS      ITACHI = LOW HP\n\n");
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        }
        if(hp1 == 0 && hp2 == 0){//Draw 
            printf("\n\n\nFINAL DECISION :\n\nDRAW\n\nMADARA HP = %d      VS      ITACHI HP = %d",hp1,hp2);
            goto finish;} 
        if(hp1==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 2 - ITACHI\nLOSS : TEAM 2 - MADARA\n\nMADARA HP = %d      VS      ITACHI HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 2 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        if(hp2==0){
            printf("\n\n\nFINAL DECISION : \n\nWIN : TEAM 1 - MADARA\nLOSS : TEAM 1 - ITACHI\n\nMADARA HP = %d      VS      ITACHI HP =%d\n\n",hp1,hp2);
            printf("\n\t\t\t\t\t\t\t      |                |");
            printf("\n\t\t\t\t\t\t\t      |   TEAM 1 WIN   |");
            printf("\n\t\t\t\t\t\t\t      |                |");
            goto finish;}
        printf("\n\n-->MADARA HP = %d      VS      ITACHI HP = %d",hp1,hp2);
    }
}

//PLAYAGAIN
finish:
    Naruto.HP = 100;
    Sasuke.HP = 100;
    Madara.HP = 100;
    Jiraiya.HP = 100;
    Itachi.HP = 100;
    Kakashi.HP = 100;
    hp1 = 20;
    hp2 = 20;
printf("\n\n\nFOR PLAY AGAIN PRESS 1 : ");
scanf("%d",&again);
if(again==1){
    goto playagain;
}
else{
    goto exit;
}
exit:
end:
printf("\n\n\n\n\n     _____________");
printf("\n\n       GAME END");
printf("\n     _____________");
printf("\n\n\n--------------------------");
printf("\n\n       SAYONARA ^_^");
printf("\n\n--------------------------");
    return 0;
}
