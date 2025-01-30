#include <iostream>
#include <ctime>
int main()
{
    srand(time(0));
    int guess=rand()%10+1;
    std::cout<<"Guessing Game!"<<"\n";
    int num;
    while (num!=guess)
    {
    std::cout<<"Pick a Number Between 1 to 10 :";
    std::cin>>num;
        if (num>guess)
        {
            std::cout<<"Your guess is bigger try again"<<"\n";
            
        }
        if (num<guess)
        {
            std::cout<<"your guess is smaller try again "<<"\n";
            
        }
        if (num==guess)
        {
            std::cout<<num<<"=="<<guess<<" "<<"it is a match"<<"\n";
            break;
        }
    }
    
}