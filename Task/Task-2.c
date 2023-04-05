#include<stdio.h>
int main()
{
    int expression;

    printf("\n1.Veg\n2.Non-Veg");
    printf("\nEnter the choice");
    scanf("%d", &expression);

    switch(expression)
    {
      case 1:
             printf("\n1.Gujarati\n2.Chinese\n3.Punjai\n4.South Indian");
             printf("\nEnter the Choice");
             scanf("%d", &expression);

             switch(expression)
             {
                case 1:
                       printf("\nMatla undhiyu,rotli,daal bhat,chaas,papad,salad");
                       break;
                case 2:
                       printf("\nManchurian gravy,Schezwan Rice,Hakka Noodles");
                       break;
                case 3:
                       printf("\nShahi Panner,Butter Nan,Lassi,Masala Papad");
                       break;
                case 4:
                       printf("\nMasala Dosa,Menduvada,Daalvada,Idli,Rice,chaas");
                       break;       
                default:
                       printf("\nEnter the valid Choice.....");       
             }
             break;
        case 2:
               printf("Masala boil Egg,Khimo,Bhurji,Omlet");
               break;
        default:
                printf("Enter the valid Choice.......");                          
    }                                
}