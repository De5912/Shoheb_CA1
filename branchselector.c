#include<stdio.h>
int main()
{
	int choose;
	printf("These are btech courses:\n");
	printf("1.Btech CSE\n");
	printf("2.Btech CSE(Robotics)\n");
	printf("3. B.Tech AIML\n");
        printf("4. B.Tech ECE\n");
        printf("5. B.Tech Mechanical\n");
	printf("6. B.Tech CSE(AI&ML)\n");
	printf("7. B.Tech ECE");
        printf("8. Exit\n");
	printf("Select your desired branch of engineering");
	scanf("%d",choose);
	switch (choose) {
        case 1:
            printf("You selected B.Tech CSE\n");
            break;
        case 2:
            printf("You selected B.Tech CSE(Robtics)\n");
            break;
        case 3:
            printf("You selected B.Tech AIML\n");
            break;
        case 4:
            printf("You selected B.Tech ECE\n");
            break;
        case 5:
            printf("You have selected B.Tech Mechanical\n");
            return 0;
	case 6:
	    printf("You have selected B.Tech CSE(AI&ML)\n");
        case 7:
	    printf("You have selected B.Tech ECE\n");
	case 8:
	    printf("Exit");
        default:
            printf("Invalid choice. Try again.\n");
    }
    return 0;
}

