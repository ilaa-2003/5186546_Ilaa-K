#include<stdio.h>
int main(){
    int days;
    while(1){
        printf("Enter the number of days: ");
        scanf("%d",&days);
        if(days>=1 && days<=7){
            switch (days)
            {
                case 1:
                    printf("Monday\n");
                    break;
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
        
                default:
                    break;
            }
            break;
    }else{
        printf("Invalid input. Please enter a number between 1-7\n");
    }
}
return 0;
}

