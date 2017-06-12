#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int simulate(int testVal)
//testVal is the current dollar number being simulated. The dollar numbers run from 100 to 900
{
time_t t;
 srand((unsigned) time(&t));
	int retVal = 0;
	int winMoney = testVal + 1000;
	for(int x = 0; x < 10000; x++)
	//runs the test 100 times
	{
		
		int pass = 0;
		//changes to 1 if the number passes the current test
		int simNum = testVal;
		//gives a number that represents the testVal given to the program
		for(int y = 0; y != 1; y)
		//keeps running the sim until x meets one of the end conditions
		{
			int random = rand() % 100;
			//generates a random number from 0 to 100
			if(simNum >= winMoney)
			{
				pass = 1;
				y = 1;
				//if it succeeds, passnum will be greater than or equal to 1000
			}
			else if(simNum <=0)
			{
			pass = 0;
				y = 1;
			}
			if(random >= 53)
			{
				simNum -= 100;
			}
			else
			{
				simNum += 100;
			}
			
			
		}
		retVal = retVal + pass;
	}
	return retVal;
}

int main()
{
//int percentages[];
//intermediate values have the same percentage as the first number less than them divisible by 100
	for(int x = 0; x < 1000; x ++)
	{
		if(simulate(x) >= 99)
		{
			printf("%i: %i\n", x, simulate(x));
			break;
		}
		}
	//percentages[9] = simulate(950);
	//for(int y = 0; y < 50; y++)
	//{
		//printf("%i: %i\n\n", y+1, percentages[y]);
	//}

}