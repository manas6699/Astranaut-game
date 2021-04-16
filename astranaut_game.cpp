#include <iostream>

using namespace std;

void printintro(int difficulty){
    cout<<"Level   :  "<<difficulty<<endl;
    cout<<"==================================="<<endl;
    cout<<endl;
    cout << "****Hey Astronaut  it is year 2999, You are on moon !  ****" << endl;
        cout << "Unfortunately your space ship is damaged !" << endl;
      cout << "===========================================" << endl;
        cout << "UNFORTUNATELY We don't have your pre recorded data" << endl;
        cout << " Now to verify it's you , you have to clear the the 5 layers of encryption of our system" << endl;
        cout << "===========================================" << endl;
}
bool astranaut(int difficulty){
printintro(difficulty);

        
    
    
  

        const int a = rand() % 15;
        const int b = rand() % 15;

        const int sum = a + b;
        const int product = a * b;

        cout << "The code adds upto " << sum << endl;
        cout << "The code multiply upto " << product << endl;

        int guessA, guessB;
        std::cin >> guessA >> guessB;

        int guesssum = guessA + guessB;
        int guessproduct = guessA * guessB;
        if (guesssum == sum && guessproduct == product)
        {
            cout << "You Win!" << endl;
            return true;
        }

        else
            cout << "wrong! BE CAREFUL , ASTRANAUT !" << endl;
        return false;
    }


int main()

{ int leveldifficulty=1;
int const maxdifficulty=5;
    while (leveldifficulty<=maxdifficulty)
    {
       bool blevelcomplete =astranaut(leveldifficulty);

       if (blevelcomplete)
       {
           ++leveldifficulty;
       }
       
    }

    // std::cin.clear();
    // std::cin.ignore();
    cout<<"Hey!! astranaut you have broke the 5 layers of encryption !"<<endl;
    cout<<"WE  ARE SENDING A SPACESHIP TO RETURN HOME!!"<<endl;

    return 0;
}