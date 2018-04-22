//Vote Calculator
//By:Jonathan Gan w/ Shaun McCartney

//This program should simulate a poll for Mayor of Center City.
//There must be 5 candidates: John Cole, Anne Drake, Alex Wood, Mary Lee and Ethan Barn.
//The simulation must be able to input the number of voters and present the results in terms of percentage for each candidate, in order of votes.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*main () //Initializes main
{
    char* can_names[5]= {"John Cole" , "Anne Drake" , "Alex Wood" , "Mary Lee" , "Ethan Barn"};
    int votes;

    printf("Please enter the number of voters: ");
    scanf("%d", &votes);


    time_t t;
    int num;
    srand ((unsigned)time(&t));
    num = (rand()% votes);
    int Voteamounts[5];
    int i=0;

    if(num>0 && num < votes && i<5)
        {
    Voteamounts[i] = num;
    num = (votes- num);
    i++;
        };

    printf("\n");
    printf("The statistic for the pole are: \n");
    printf("\n");
    printf("------------------------------------------\n");
    printf("Rank   Candidate     Votes     Percentage \n");
    printf("------------------------------------------\n");
    printf("1       %str          %d        %d", can_names[0], Voteamounts[1], (votes/Voteamounts[1])*100);


};
*/

int main()
{
    time_t currentTime;
    time(&currentTime);                  //Time necessary for random values
    srand((unsigned)currentTime);

    int numVoters;
    int candidatesVotes[5];              //Array for candidates


    printf("This is a poll simulation for Mayor of Center City.");
    printf("\nThe Candidates are: \n\n- John Cole\n- Anne Drake\n- Alex Wood\n- Mary Lee\n- Ethan Barn");

    printf("\n\nEnter The Number of voters that participated: ");
    scanf("%d",&numVoters);                //Receiving the number of votes that will be counted and created an array for it
    int theVotes[numVoters];

    int i = 0;
    int JC = 0;
    int AD = 0;
    int AW = 0;                           //Dummy counter variables
    int ML = 0;
    int EB = 0;


    while(i<numVoters)                    //The loop that tests each randomly generated vote and determines which candidate it is awarded to
    {
        theVotes[i]= (rand()%5)+1;

        if(theVotes[i]==1)
        {
            JC++;
        }

        if(theVotes[i]==2)
        {
            AD++;
        }
         if(theVotes[i]==3)
        {
            AW++;
        }

        if(theVotes[i]==4)
        {
            ML++;
        }
        if(theVotes[i]==5)
        {
            EB++;
        }


        i++;
    }

     candidatesVotes[1]=JC;  //Assigning the votes counters values to the relevent array position
     candidatesVotes[2]=AD;
     candidatesVotes[3]=AW;
     candidatesVotes[4]=ML;
     candidatesVotes[5]=EB;

     char names[5][100] = {"John Cole", "Anne Drake", "Alex Wood","Mary Lee","Ethan Barn"}; //Array storing the names of the candidates in the same order that their corisponding votes are stored

   /* i = 1;

    while(i<6)
    {
        printf("\n Candidate number %d : %d votes",i,candidatesVotes[i]);
        i++;
    }
*/
   printf("\nThe Poll Statistics Are: \n\n-----------------------------------------------------------\n");
   printf("Rank\tCandidates\tVotes\tPercentage\n\n");

   int c = 0;
   int j = 0;
   int temp = 0;
   float dum = 0;
   float sum = 0;
   char dummy[60] = "";
   i = 1;


   while(i<6)                       //Adding all the votes together to store the number of votes in a float variable for calculation purposes
   {
       sum =sum+candidatesVotes[i];
       i++;
   }

   for (c = 1; c < 6; c++)                     //Loop for descending order sorting
	{
		for (j = 1; j < 6; j++)                                      //Loop for comparing array values
		{
			if (candidatesVotes[j] < candidatesVotes[c])             //Descending loop condition
			{
				temp = candidatesVotes[c];                           //Using temporary variable for storing last value
				candidatesVotes[c] = candidatesVotes[j];             //Replacing value
				candidatesVotes[j] = temp;

                strcpy(dummy, names[c-1]);
				strcpy(names[c-1], names[j-1]);                      //Code for sorting cadidate names in order of the sorted vote values
                strcpy(names[j-1], dummy);

			}
		}
	}


	i = 1;
	while(i<6)                                                       //Formatted Output
    {                                                                //Outputting each candidates and their results in rank order
        printf("\n#%d\t",i);
        printf("%s\t%d\t",names[i-1],candidatesVotes[i]);
        dum =(candidatesVotes[i]/sum)*100;
        printf("%.2lf %%",dum);

        i++;
    }

    printf("\n\n-----------------------------------------------------------");

}
