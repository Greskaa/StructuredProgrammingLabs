#include <stdio.h>
int main(){
int day , month, year;
scanf("%d %d %d",&day,&month,&year);
if(day>31 || month > 12 ){
printf("NO");
}
else {
if((month == 1 || month ==3 || month == 5 || month == 7 || month ==8 || month ==10 || month == 12)&& (day>=1)&& (day<=31))
{
printf("YES");
}

else if(month == 2){
if((year%400==0) || ((year%4==0) && (year%100!=0)) && (day>=1 && day<=29))
{
printf("YES");
}
else {
printf("NO");
}
}
else {
printf("NO");
}

}
return 0;
}
