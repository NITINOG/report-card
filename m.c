/* 
-----------------------------------------
            NITIN KUMAR 
        Module 1 Assignment
  Getting Started With Programming in C
-----------------------------------------
 */


#include<stdio.h>
#include<unistd.h>

int main() 
{
    char name[30] ;
    int class ;
    char sec ;
    float mth , eng , hnd , sc , ss , total ; 



//-----------------------------------------
    //WELCOME MESSAGE

    puts("...........WELCOME............. ") ;
    usleep(10000000) ;

    puts("ENTER DETAILS TO GET REPORT CARD") ;
    usleep(5000000) ;

    puts("..................................\n\n") ;



//-----------------------------------------
    //taking student information

    puts("ENTER STUDENT NAME : ") ;
    scanf("%[^\n]%*c" , &name ) ;

    puts("ENTER CLASS :") ; 
    scanf("%d" , &class) ;

    while ((getchar()) != '\n');

    puts("ENTER SECTION :") ;
    scanf("%c" , &sec) ;



//-----------------------------------------
    //taking students marks info 

    puts("\n\n ENTER MARKS ............ \n") ;
    usleep(10000000) ;

    puts("ENTER MARKS IN MATHS :") ;
    scanf("%f" , &mth) ;

    puts("ENTER MARKS IN ENGLISH :") ;
    scanf("%f" , &eng) ;
    
    puts("ENTER MARKS IN HINDI :") ;
    scanf("%f" , &hnd) ;
 
    puts("ENTER MARKS IN SCIENCE :") ;
    scanf("%f" , &sc) ;
 
    puts("ENTER MARKS IN SOCIAL SCIENCE :") ;
    scanf("%f" , &ss) ;



//-----------------------------------------
    //total sum of all subjects  

    total = mth + eng + hnd + sc + ss ;



//-----------------------------------------
    // REPORT CARD 

    if(total > 500 || total < 0) {
    printf("\n\n....ERROR -- ENTER DETAILS AGAIN....") ;
    exit(0) ; 
    }

    printf("\n\n....Generating Report card.....") ;
    usleep(3000000) ;

    puts("\n\n-----------------------------------------") ;
    puts("-----------------------------------------\n\n") ;
    puts("\t Jawahar Navodaya VIDYALYA \n") ;
    puts("\t  ANNUAL REPORT CARD \n\n\n") ;

    printf("Name Of Student : %s" , name) ;
    printf("\nClass : %d . Section : %c \n\n\n" , class , sec );
    

    printf("\t MARKS SECURED OUT OF 100 \n\n");

    printf("\tMATHEMATICS : %.1f\n \tENGLISH : %.1f\n \tHINDI : %.1f\n \tSCIENCE : %.1f\n \tSOCIAL SCIENCE : %.1f\n" ,mth,eng,hnd,sc,ss) ;

    printf("\n \t TOTAL MARKS SCORED : %.1f\n" ,total) ;



    char grade = 'x' ;

    if(total <= 500 && total > 450 ){
        grade = 'A' ;
    }else if(total <= 449 && total > 400 ){
        grade = 'B' ;
    }else if(total <= 399 && total > 350 ){
        grade = 'C' ;
    }else if(total <= 349 && total > 300 ){
        grade = 'D' ;
    }else if(total <= 299 && total > 200 ){
        grade = 'E' ;
    }else {
        grade = 'F' ;
    }
    if(grade == 'x'){
        printf("op") ;
    }else{
        printf("\tGRADE : %c ",grade ) ;
    }


    puts("\n\n-----------------------------------------") ;
    puts("-----------------------------------------\n\n") ;
 



return 0 ;
}