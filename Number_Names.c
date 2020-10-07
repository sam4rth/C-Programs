#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    printf("Enter a Number For its Spelling :");
    scanf("%d",&num);
    printf ("\n\n\n%d is spelled as : ",num);
    switch (num) {
        case 1:
            printf("One\n");
            break; 
        case 2:
            printf("Two\n");
            break; 
        case 3:
            printf("Three\n");
            break; 
        case 4:    
        	printf("Four\n");
        	break;
        case 5:    
        	printf("Five\n");
        	break;
		case 6:    
        	printf("Six\n");
        	break;
		case 7:    
        	printf("Seven\n");
        	break;
		case 8:    
        	printf("Eight\n");
        	break;
		case 9:    
        	printf("Nine\n");
        	break;
		case 10:    
        	printf("Ten\n");
        	break;	
		default:
            printf("\n\n\nSorry not in 1 to 10 \n");
    }
	getch();

	return 0;

}
