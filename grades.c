#include <stdio.h>
#include <string.h>
struct Grades {
	char  categories[50];
	int weight;
	int grade;
};
int main()
{
  char input[256] ;
  char  categories[256];
  int weight;
  float grade;
  int num;
  float finalgrade = 0;
  int totalweight = 0;
  int aw = 0;
  float b;
  float c;
  float d;
  int bw;
  int cw;
  int dw;
  char choice[256];
  	char  name [256];
	float cat;
	char cata;
//	float aw;
	float tp;
	float pg;
	float fk;
	float dg;
 printf("How many categories make up your grade?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &num);
struct Grades gradeArr[num];
for ( int i = 0; i < num; i++)
{
 printf("What is the name of category %d?\n", i + 1);
  fgets(input, 256, stdin);
  sscanf(input, "%s", categories);
  strcpy(gradeArr[i].categories, categories);
  printf("What percentage of the gradebook is %s worth?\n", categories);
  while (1)
  {
	fgets(input, 256, stdin);
//	sscanf(input, "%f", &weight);
	if (sscanf(input, "%d", &weight) == 1) break;

	printf("Not a valid percentage - try again!\n");	
  }
  gradeArr[i].weight = weight;
  printf("What is your grade in %s?\n", categories);
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%f", &grade) == 1) break;
        printf("Not a valid grade  - try again!\n");
  }
  gradeArr[i].grade = grade;
// totalweight = totalweight + gradeArr[i].weight;
// if (totalweight > 100)
// { 
// printf("The weight of your grades adds up to over 100
 
 finalgrade = finalgrade + (gradeArr[i].grade * gradeArr[i].weight);
//  printf("%d\n", gradeArr[i].weight); 
 }

 printf("Your current grade is equal to %f\n", finalgrade / 100);
 if (num == 3)
 {
 printf("Which grade category would you like to know more about? Choose one of the following(Case sensitive): %s %s %s\n", gradeArr[0].categories, gradeArr[1].categories, gradeArr[2].categories);
  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);
 	if ((strcmp(choice, gradeArr[0].categories)) == 0)
	{
		aw = gradeArr[0].weight;
		b = gradeArr[1].grade;
		bw = gradeArr[1].weight;
		cw = gradeArr[2].weight;
		c = gradeArr[2].grade;
	//	printf("%d\n", aw);
	//	printf("%d\n", bw);
	//	printf("%d\n", cw);
	//	printf("%f\n", b);
	//	printf("%f\n", c);
	}
        if ((strcmp(choice, gradeArr[1].categories)) ==  0)
        {
                aw = gradeArr[1].weight;
                b = gradeArr[0].grade;
                bw = gradeArr[0].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
	//	 printf("%d\n", aw);
        }
	 if ((strcmp(choice, gradeArr[2].categories)) ==  0)
        {
                aw = gradeArr[2].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[0].weight;
                c = gradeArr[0].grade;
//		 printf("%d\n", aw);
        }
 //printf("%d\n", gradeArr[0].weight);
 //printf("%d\n", gradeArr[1].weight);
 //printf("%d\n", gradeArr[2].weight);
// printf("%d\n", aw);
 }
 if (num == 2) 
 {
 printf("Which grade category would you like to know more about? Choose one of the following: %s %s\n", gradeArr[0].categories, gradeArr[1].categories);
  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);
         if ((strcmp(choice, gradeArr[0].categories)) == 0)
        {
                aw = gradeArr[0].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
               //  printf("%d\n", aw);
        }
        if ((strcmp(choice, gradeArr[1].categories)) ==  0)
        {
                aw = gradeArr[1].weight;
                b = gradeArr[0].grade;
                bw = gradeArr[0].weight;
//                 printf("%d\n", aw);
        }
      //   if ((strcmp(choice, gradeArr[2].categories)) ==  0)
       // {
        //        aw = gradeArr[2].weight;
        //         printf("%d\n", aw);
       // }
}
 if (num == 1) 
 {
 printf("Which category would you like to know more about? Choose one of the following: %s\n", gradeArr[0].categories);

  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);  

        if ((strcmp(choice, gradeArr[0].categories)) == 0)
        {
                aw = gradeArr[0].weight;
                 printf("%d\n", aw);
        }
     //   if ((strcmp(choice, gradeArr[1].categories)) ==  0)
     //   {
     //           aw = gradeArr[1].weight;
     //            printf("%d\n", aw);
    //    }
    //     if ((strcmp(choice, gradeArr[2].categories)) ==  0)
    //    {
    //            aw = gradeArr[2].weight;
  //               printf("%d\n", aw);
//        }
}
  if (num == 4) 
 {
 printf("Which category would you like to know more about? Choose one of the following: %s %s %s %s\n", gradeArr[0].categories, gradeArr[1].categories, gradeArr[2].categories, gradeArr[3].categories);

  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);
         if ((strcmp(choice, gradeArr[0].categories)) == 0)
        {
                aw = gradeArr[0].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
                d = gradeArr[3].grade;
		dw = gradeArr[3].weight;
		// printf("%d\n", aw);
        }
        if ((strcmp(choice, gradeArr[1].categories)) ==  0)
        {
                aw = gradeArr[1].weight;
                b = gradeArr[0].grade;
                bw = gradeArr[0].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
                d = gradeArr[3].grade;
                dw = gradeArr[3].weight;
               //  printf("%d\n", aw);
        }
         if ((strcmp(choice, gradeArr[2].categories)) ==  0)
        {
                aw = gradeArr[2].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[0].weight;
                c = gradeArr[0].grade;
                d = gradeArr[3].grade;
                dw = gradeArr[3].weight;
//		 printf("%d\n", aw);
        }
	 if ((strcmp(choice, gradeArr[3].categories)) ==  0)
        {
                aw = gradeArr[3].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
                d = gradeArr[0].grade;
                dw = gradeArr[0].weight;
                // printf("%d\n", aw);
        }
 }
	printf("How many total points are in that category?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &tp);
	printf("How many points do you currently have in that category?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &pg);
	printf("How many points is your last assignment worth?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &fk);
	printf("What overall grade do you want in the class?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &dg);
	if ( num == 2 )
	{
		float NesPercCat2()
		{
			return((dg-(bw*b*.01))/aw)*100;
		}
		float a = NesPercCat2();
		printf("To get a %f percent in the class you need end with a %f percent overall in this category\n", dg, a);
		float NesPointCat2()
		{
			return(.01*a*tp + .01*a*fk - pg);
		}
		float x = NesPointCat2();
		printf("You need to get %f points out of %f points on your last assignment to get a %f in the class\n", x, fk, dg);
		float NesGradeCat2()
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat2();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);
	}
	if ( num == 3 )
		{
			float NesPercCat3()
		{
			return((dg-(bw*b*.01)-(cw*c*.01))/aw)*100;
		}
		float a = NesPercCat3();
		printf("To get a %f percent in the class you need end with a %f percent overall in this category\n", dg, a);
		float NesPointCat3()
		{
			return(.01*a*tp + .01*a*fk - pg);
		}
		float x = NesPointCat3();
		printf("You need to get %f points out of %f points on your last assignment to get a %f in the class\n", x, fk, dg);
		float NesGradeCat3()
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat3();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);
	}

	if ( num == 4 )
		{
			float NesPercCat4()
		{
			return((dg-(bw*b*.01)-(cw*c*.01)-(dw*d*.01))/aw)*100;
		}
		float a = NesPercCat4();
		printf("To get a %f percent in the class you need end with a %f percent overall in this category\n", dg, a);
		float NesPointCat4()
		{
			return(.01*a*tp + .01*a*fk - pg);
		}
		float x = NesPointCat4();
		printf("You need to get %f points out of %f points on your last assignment to get a %f in the class\n", x, fk, dg);
		float NesGradeCat4()
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat4();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);
	}
}
