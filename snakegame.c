#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int height=20,width=20;
int x,y,fruitX,fruitY;//coordinates of the snake and food respectively
void input(){
    if(kbhit()){

    }
}
void setup(){
    x=height/2;
    y=width/2;//start the snake from the middle
    label1:
    fruitX=rand()%20;
    if(fruitX==0)
    goto label1;
    label2:
    fruitY=rand()%20;
    if(fruitY==0)
    goto label2;
}
void draw(){
    int i,j;
    for(i=0;i<=height;i++){
        for(j=0;j<=width;j++){
            if(i==0||i==height||j==0||j==width){
                printf("*");
            }
            else
            {
                if(i==x && j==y){
                    printf("0");
                }
                else if(i==fruitX && j==fruitY){
                    printf("@");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
int main(){
    setup();
    draw();
}