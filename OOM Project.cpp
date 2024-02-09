#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;
class QUIZ
{
	public:
		void start()
		{
			int countr,r,r1,count,i,n;
			float score;
			char choice;
			char get;
			char playername[20];
			
			mainhome:
				
			cout<<"\t\t\tC PROGRAM QUIZ GAME\n";
			cout<<"\n\t\t________________________________________\n";

			cout<<"\n\t\t\t   WELCOME ";
			cout<<"\n\t\t\t      to ";
			cout<<"\n\t\t\t   THE GAME ";
			cout<<"\n\t\t________________________________________";
			cout<<"\n\t\t________________________________________";
			cout<<"\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ";
			cout<<"\n\t\t________________________________________";
			cout<<"\n\t\t________________________________________";
			cout<<"\n\t\t > Press S to start the game";
			cout<<"\n\t\t > Press V to view the highest score  ";
			cout<<"\n\t\t > Press R to reset score";
			cout<<"\n\t\t > press H for help            ";
			cout<<"\n\t\t > press Q to quit             ";
			cout<<"\n\t\t________________________________________\n\n";
			cin>>choice;
			
			choice=toupper(get);
			
			if(choice=='V')
			{
				system("cls");
				show_record();
				get;
				goto mainhome;
			}
			else if(choice=='H')
			{
				system("cls");
				help();
				get;
				goto mainhome;
			}
			else if(choice=='R')
			{
				system("cls");
				reset_score();
				get;
				goto mainhome;
			}
			else if(choice=='Q')
			{
				exit(1);
			}
			
			else if(choice=='S')
			{
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:";
				cin>>playername;

				cout<<"\n\t\t ------------------  Welcome "<<playername<<" to C Program Quiz Game --------------------------\n\n";
				cout<<"\n\n\t\t Here are some tips you might wanna know before playing:";
				cout<<"\n\t\t -------------------------------------------------------------------------";
				cout<<"\n\t\t >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND";
				cout<<"\n\t\t >> In warmup round you will be asked a total of 3 questions to test your";
				cout<<"\n\t\t    general knowledge. You are eligible to play the game if you give atleast 2";
				cout<<"\n\t\t    right answers, otherwise you can't proceed further to the Challenge Round.";
				cout<<"\n\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a";
				cout<<"\n\t\t    total of 10 questions. Each right answer will be awarded $100,000!";
				cout<<"\n\t\t    By this way you can win upto ONE MILLION cash prize!!!!!..........";
				cout<<"\n\t\t >> You will be given 4 options and you have to press A, B ,C or D for the";
				cout<<"\n\t\t    right option.";
				cout<<"\n\t\t >> You will be asked questions continuously, till right answers are given";
				cout<<"\n\t\t >> No negative marking for wrong answers!";
				cout<<"\n\n\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!";
				cout<<"\n\n\n\t\t Press Y  to start the game!\n";
				cout<<"\n\t\t\t\tOR\n";
				cout<<"\n\t\t Press any other key to return to the main menu!\n\n\n";
				cin>>get;
				cout<<endl;
				
				if(toupper(get)=='Y')
				{
					goto home;
				}
				
				home:
					count=0;
					for(i=1;i<=4;i++)
					{
						r1=i;
			
						switch(r1)
						{
							case 1:
								cout<<"\n\n\t\tQ1. Which of the following is a Palindrome number?";
								cout<<"\n\n\t\tA.42042\t\tB.101010\n\n\t\tC.23232\t\tD.01234";
								cin>>get;
								if (toupper(get)=='C' or toupper(get)=='c')
								{
									cout<<"\n\n\t\tCorrect Answer!!!";
									count++;
									get;
									break;
								}
								else
								{
									cout<<"\n\n\t\tWrong!!! The correct answer is C.23232";
									get;
									break;
								}
								
							case 2:
								cout<<"\n\n\t\tQ2. If a is an integer variable, a=5/2; then will return a value _________";
								cout<<"\n\n\t\tA. 2.5 \t\tB. 3 \n\n\t\tC. 2 \t\t D. 0";
								cin>>get;
								if(toupper(get)=='C' or toupper(get)=='c')
								{
									cout<<"\n\n\t\tAnother Correct Answer!!!";
									count++;
									get;
									break;
								}
								else
								{
									cout<<"\n\n\t\tWrong!!! The correct answer is C. 2";
									get;
									break;
								}
								
							case 3:
								cout<<"\n\n\t\tQ3. The keyword 'break' cannot be used within : ";
								cout<<"\n\n\t\tA. do-while \t\tB. if-else \n\n\t\tC. for \t\tD. while";
								cin>>get;
								if(toupper(get)=='B' or toupper(get)=='b')
								{
									cout<<"\n\n\t\t Fabulous ... Correct Answer!!!";
									count++;
									get;
									break;
								}
								else
								{
									cout<<"\n\n\t\tWrong!!! The correct answer is B. if-else";
									get;
									break;
								}
								
							case 4:
								cout<<"\n\nWhat is the National Game of England?";
								cout<<"\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball";
								cin>>get;
								if(toupper(get)=='C')
								{
									cout<<"\n\nCorrect!!!";
									countr++;
									get;
									break;
								}
								else
								{
									cout<<"\n\nWrong!!! The correct answer is C.Cricket";
									get;
									break;
			   					}
			   					
			   					if(count>=3)
			   					{
			   						goto test;
								}
								else
								{
									cout<<"\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME";
									get;
									goto mainhome;
								}
								
								test:
									system("cls");
									cout<<"\n\n\t*** CONGRATULATION "<<playername<<" you are eligible to play the Game ***";
									cout<<"\n\n\n\n\t!Press any key to Start the Game!";
									if(toupper(choice)=='p')
									{
										goto game;
									}
									
									
							game:
								countr=0;
								for(i=1; i<=10; i++)
								{
									system("cls");
									
									r=i;
									
									switch(r)
									{
										case 1:
											cout<<"\n\nWhat is the National Game of England?";
											cout<<"\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball";
											cin>>get;
											if(toupper(get)=='C' or toupper(get)=='c')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get;
												break;
											}
											else
											{
												cout<<"\n\nWrong!!! The correct answer is C.Cricket";
												get;
												goto score;
												break;
										    }

										case 2:
											cout<<"\n\n\nStudy of Earthquake is called............,";
											cout<<"\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology";
											cin>>get;
											if (toupper(get)=='A' or toupper(get)=='a')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get;
												break;
											}
											else
										    {
												cout<<"\n\nWrong!!! The correct answer is A.Seismology";
												get;
												goto score;
												break;
										    }

								        case 3:
											cout<<"\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ";
											cout<<"\n\nA.6\t\tB.7\n\nC.8\t\tD.9";
											cin>>get;
											if (toupper(get)=='C' or toupper(get)=='c')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get;
												break;
											}
											else
											{
											   	cout<<"\n\nWrong!!! The correct answer is C.8";
											   	get;
												goto score;
										       	break;
										    }

								        case 4:
											cout<<"\n\n\nThe Laws of Electromagnetic Induction were given by?";
											cout<<"\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb";
											cin>>get;
											if (toupper(get)=='A')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get;
												break;
											}
											else
										    {
								                cout<<"\n\nWrong!!! The correct answer is A.Faraday";
												get;
												goto score;
										        break;
											}

								        case 5:
											cout<<"\n\n\nIn what unit is electric power measured?";
											cout<<"\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units";
											cin>>get;
											if (toupper(get)=='B')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get; 
												break;
											}
											else
										    {
										       	cout<<"\n\nWrong!!! The correct answer is B.Power";
										       	get;
												goto score;
										       	break;
										    }

										case 6:
											cout<<"\n\n\nWhich element is found in Vitamin B12?";
											cout<<"\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron";
											cin>>get;
											if (toupper(get)=='B' )
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get;
												break;
											}
											else
										    {
												cout<<"\n\nWrong!!! The correct answer is B.Cobalt";
												goto score;
											get;
											break;
											}

								        case 7:
											cout<<"\n\n\nWhat is the National Name of Japan?";
											cout<<"\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon";
											cin>>get;
											if (toupper(get)=='D')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get;
												break;
											}
											else
										    {
												cout<<"\n\nWrong!!! The correct answer is D.Nippon";
												get;
												goto score;
												break;
											}

								        case 8:
											cout<<"\n\n\nHow many times a piece of paper can be folded at the most?";
											cout<<"\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper";
											cin>>get;
											if (toupper(get)=='B')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get; 
												break;
											}
											else
											{
												cout<<"\n\nWrong!!! The correct answer is B.7";
												get;
												goto score;
												break;
										    }

								        case 9:
											cout<<"\n\n\nWhat is the capital of Denmark?";
											cout<<"\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray";
											cin>>get;
											if (toupper(get)=='A')
											{
												cout<<"\n\nCorrect!!!";
												countr++; 
												get;
												break;
											}
											else
										    {
												cout<<"\n\nWrong!!! The correct answer is A.Copenhagen";
												get;
												goto score;
												break;
											}

								        case 10:
											cout<<"\n\n\nWhich is the longest River in the world?";
											cout<<"\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon";
											cin>>get;
											if (toupper(get)=='A')
											{
												cout<<"\n\nCorrect!!!";
												countr++;
												get; 
												break;
											}
											else
										    {
												cout<<"\n\nWrong!!! The correct answer is A.Nile";
												get;
												break;
												goto score;
											}
									}
								}
								
								score:
									system("cls");
									score=(float)countr*100000;
									if(score>0.00 && score<1000000)
									{
										cout<<"\n\n\t\t**************** CONGRATULATION *****************";
										cout<<"\n\t You won $"<<score;
										goto go;
									}
									
									else if(score==1000000.00)
									{
									    cout<<"\n\n\n \t\t**************** CONGRATULATION ****************";
									    cout<<"\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!";
									    cout<<"\n\t\t You won $"<<score;
									    cout<<"\t\t Thank You!!";
									}
									else
									{
										cout<<"\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********";
									    cout<<"\n\t\t Thanks for your participation";
									    cout<<"\n\t\t TRY AGAIN";
										goto go;
									}
									
									go:
										puts("\n\n Press Y if you want to play next game");
										puts(" Press any key if you want to go main menu");
										if (toupper(get)=='Y')
										{
											goto home;
										}	
										else
										{
											void edit_score(float score,char playername[20]);
											goto mainhome;
										}
								
								
						}
					}
		}
	}
		
		void show_record()
		{
			system("cls");
			char name[20];
			float scr;
			FILE *f;
			f=fopen("score.txt","r");
			fscanf(f,"%s%f",&name,&scr);
			printf("\n\n\t\t*************************************************************");
			printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
			printf("\n\n\t\t*************************************************************");
			fclose(f);	
		}
		
		void reset_score()
		{
			system("cls");
			float sc;
			char nm[20];
			FILE *f;
			f=fopen("score.txt","r+");
			fscanf(f,"%s%f",&nm,&sc);
			sc=0;
			fprintf(f,"%s,%.2f",nm,sc);
			fclose(f);	
		}
		
		void help()
		{
			system("cls");
			cout<<"\n\n                              HELP";
			cout<<"\n -------------------------------------------------------------------------";
			cout<<"\n ......................... C program Quiz Game...........";
			cout<<"\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND";
			cout<<"\n >> In warmup round you will be asked a total of 3 questions to test your general";
			cout<<"\n    knowledge. You will be eligible to play the game if you can give atleast 2";
			cout<<"\n    right answers otherwise you can't play the Game...........";
			cout<<"\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked";
			cout<<"\n    total 10 questions each right answer will be awarded $100,000.";
			cout<<"\n    By this way you can win upto ONE MILLION cash prize in USD...............";
			cout<<"\n >> You will be given 4 options and you have to press A, B ,C or D for the";
			cout<<"\n    right option";
			cout<<"\n >> You will be asked questions continuously if you keep giving the right answers.";
			cout<<"\n >> No negative marking for wrong answers";

			cout<<"\n\n\t*********************BEST OF LUCK*********************************";
			cout<<"\n\n\t*****C++ PROGRAM QUIZ GAME is developed by CODE WITH KP TEAM********\n\n\n\n";
		}
		
		void edit_score()
		{
			system("cls");
			float score;
			float sc;
			char nm[20];
			FILE *f;
			f=fopen("score.txt","r");
			fscanf(f,"%s%f",&nm,&sc);
			if (score>=sc)
			{
				sc=score;
				fclose(f);
				f=fopen("score.txt","w");
				fprintf(f,"%s\n%.2f",nm,sc);
				fclose(f);
			}
		}
};


int main()
{
	system("color b");
	system("color 2f");
	QUIZ Q;
	Q.start();
	Q.show_record();
	Q.reset_score();
	Q.edit_score();
	Q.help();
	return 0;
}
