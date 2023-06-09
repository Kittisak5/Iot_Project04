#include<stdio.h>
#define line printf("++++++++++++++++++++++++++++++++\n");

void calSquareArea(){
double  widths,longs;
double areaSquare,areatriangle;

line
printf("SHAPE AREA\n");
line
printf("Pic Square.1\n");
printf("Input widths:   "); scanf("%lf",&widths);
printf("Input longs:   "); scanf("%lf",&longs);
areaSquare =  widths * longs;
printf("Area square is: %.2lf\n",areaSquare);
line


}void calTriangleArea(){
double  bases,highs;
double areatriangle;

line
printf("SHAPE AREA\n");
line
printf("Pic Square.1\n");
printf("Input widths:   "); scanf("%lf",&bases);
printf("Input longs:   "); scanf("%lf",&highs);
areaSquare =  bases * bases /2 ;
printf("Area square is: %.2lf\n",areatriangle);
line
}






void main(){
int i;
line
printf("SHAPE AREA\n");
line
for (i=1; i<=8; i++){
    calSquareArea();
}















}