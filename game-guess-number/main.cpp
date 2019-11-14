#include <iostream>
#include <random>

int generateRandomNumber(int min, int max)
{
    static std::random_device randomDevice;
    static std::mt19937 engine{randomDevice()};
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(engine);
}

int main ()
{
    
    std::cout <<"Enter your level from 1 to 10:"<< std::endl;
    int level = 0;
    std::cin >> level;
    const int bigestPossibleNumber = level * 100;
 
    int randomNumber = generateRandomNumber(0, bigestPossibleNumber);
    std::cout<< randomNumber << std::endl;
    bool endGame = false;
    int trialCount = 0;
    while (trialCount < 10)
    {
    	int userNumber{0};
    	std::cout<<"Enter your number:"<<std::endl;
    	std::cin >> userNumber;
    	if (userNumber == randomNumber) 
    	{
      		std::cout<<"YOU WIN!"<<std::endl;
      		break;
      	}
    	else if(userNumber < randomNumber) 
    	{
      		std::cout<<"Your number is smaller"<<std::endl;
     		trialCount++;
      	}
    	else if(userNumber > randomNumber) 
    	{
      		std::cout<<"Your number is bigger"<<std::endl;
		trialCount++;
    	}
   
    }
    if (trialCount == 10) 
    {
    	std::cout << "You lose" << std::endl; 
    }
}
