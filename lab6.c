#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

#define TRUE 1

//./ds4rd.exe -d 054c:09CC -D DS4_BT -t -b | ./lab6

int randomValue();
void whichButton(int randomValue);
int returnTime (int updatedRound);

int main(void) {
    int t, b1, b2, b3, b4;
	int round = 0;
	
	int val = randomValue();
	int secondTime;
	int correctButton;
	scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4 );
	
	printf("This is a Bop-It Game!\n");
	printf("Press Circle button to start!\n");
	
	while(TRUE){
			scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4 );
			if(b1!=1 && b2==1 && b3!=1 && b4!=1) {
					break;
				}
			}

      while (TRUE) {
		scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4 );
		
		if(correctButton==1) {
		
		whichButton(val);
		printf("You have %d milliseconds to respond!\n", returnTime(round));
		correctButton =0;
		} 
		

		while(TRUE){
			scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4 );
			if(b1!=1 && b2!=1 && b3!=1 && b4!=1) {
					break;
				}
			}
		

		//added while to test button being pressed values
		while(TRUE){
			
			scanf("%d, %d, %d, %d, %d", &t, &b1, &b2, &b3, &b4 );
			if((b1==1) || (b2==1) || (b3==1) || (b4==1)){
					if((b1==1) && (val==1)) {
						val = randomValue(); //redeclares to world variable
						round++;
						secondTime = t;
						correctButton = 1;
						break;
					} 
					else if((b2==1) && (val==2)) {
						val = randomValue();
						round++;
						secondTime = t;
						correctButton = 1;
						break;
					}
					else if((b3==1) && (val==3)) {
						val = randomValue();
						round++;
						secondTime = t;
						correctButton = 1;
						break;
					}
					else if((b4==1) && (val==4)) {
						val = randomValue();
						round++;
						secondTime = t;
						correctButton = 1;
						break;
					} 
					else if((b1==1) && (val!=1)) {
						printf("Wrong button! \n You lose! \n You made it through %d rounds", round);
						return 0;
					}
					else if((b2==1) && (val!=2)) {
						printf("Wrong button! \n You lose! \n You made it through %d rounds", round);
						return 0;
					}
					else if((b3==1) && (val!=3)) {
						printf("Wrong button! \n You lose! \n You made it through %d rounds", round);
						return 0;
					}
					else if((b4==1) && (val!=4)) {
						printf("Wrong button! \n You lose! \n You made it through %d rounds", round);
						return 0;
					} 
			
			}
			else {
				
				if(returnTime(round) + secondTime>= t) {
					break;
					}
		
						else {
							printf("Out of time! \n You lose! \n You made it through %d rounds", round);
							return 0;
						}
			
				}
			
		}
		
      }
	  
	  printf("Wrong button! \n You lose! \n You made it through %d rounds", round);
	  return 0;

}
	  
int returnTime (int updatedRound) {
		  int valT = 2600 - (100 * updatedRound);
		  return valT;
	  }
	  
void whichButton(int randomValue) {
		  
		  if(randomValue==1) {
			  printf("Press the Triangle button!\n");
		  }
		  else if(randomValue==2) {
			  printf("Press the Circle button!\n");
		  }
		  else if(randomValue==3) {
			  printf("Press the Cross button!\n");
		  }
		  else if(randomValue==4) {
			  printf("Press the Square button!\n");
		  }
	  }
	  
int randomValue() {
		  
		 int ran;
		 //srand(time(NULL));
		 ran = (rand() % 4) + 1;
		  
		if(ran==1) {
		  return 1;
		}
		else if(ran==2) {
		  return 2;
		}
		else if(ran==3) {
		  return 3;
		}
		else if(ran==4) {
		  return 4;
		}
	  }