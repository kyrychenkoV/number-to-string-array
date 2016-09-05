#include <stdio.h>
#include <string.h>
void arrayTostring(char temparray[],char outputarray[],int arraydigit[],int size);
int main(){
    char temparray[6]={0},array[40]={0};
    int arraydigit[]={-1,5,2,45};
    int size=sizeof(arraydigit)/sizeof(int);
    arrayTostring(temparray,array,arraydigit,size);

    return 0;
}
void arrayTostring(char temparray[],char outputarray[],int arraydigit[],int size){
    int i;
    printf ("Number \n");
    for(i=0;i< size;i++){
        printf ("%d ",arraydigit[i]);
        sprintf(temparray,"%d",arraydigit[ i]);
        strcat(outputarray,temparray);
    }
    printf ("\nString %s",outputarray);

}

