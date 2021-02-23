/* Add your name here */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(NULL)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here
    /*for (int i = 0; i < 2; i ++)
        cout << rand()%6+1 << '\t';
        cout << sum << '\t';
    */
    char start_game;
    cout << "welcome to the game" << endl;
    cout << "The game of craps is perhaps the most famous of all dice games. The player begin by throwing two standard dice. If the sum of these dice is 7 or 11, the player wins./n If the sum is 2,3 or 12, the player loses. Otherwise, the sum becomes the player’s point./n The player continues to roll until either the point comes up again, in which case the player wins,/n or the player throws 7, in which case they lose." <<endl;
    cout << "would you like to play (Y/N)";                       // begin game
    cin >> start_game;                                            
    int first_roll = 0;    //on and off condition for first while loop
    int winning_roll = 0;  // sets winning condition after first while loop
    int score = 0;          // extra condition to enter and exit second while loop
    char next;                 //conditions for Y/N in second while loop without starting first loop
    while (start_game == 'y' || start_game == 'Y')
    {
        int roll1 = rand()%6+1; //rolls from 1-6
        int roll2 = rand()%6+1;
        int total = roll1+roll2; // total
        while(first_roll == 0)   // only loops once
        {
            cout << "First_roll: " << first_roll << endl;
            winning_roll = roll1 + roll2;  //sets the winning roll
            cout << "you rolled a " << roll1 << " and " << roll2 << " giving you a total of " << total << " 1 " << endl;
                if (total == 7 || total == 11)  //winning conditon for first roll only
                {
                    cout << "You Won on your first roll congrats" << endl;
                    cout << "would you like to play again "<< endl;
                    cin >> start_game;
                    first_roll = 1;
                }
                else if (total == 2 || total == 3 || total == 12) //losing conditon for first roll only
                {
                    cout << "You Lost" << endl;
                    cout << "would you like to play again "<< endl;
                    cin >> start_game;
                    first_roll = 1;
                }
                else // entering second while loop
                {
                    cout << "your winning roll is " << winning_roll << endl;
                    cout << "would you like to roll again (Y/N)";
                    cin >> next;
                    if (next == 'n' || next == 'N')
                    {
                        start_game = 'n';
                    } 
                    score = score + total;
                }
            first_roll = -1; // condition to not loop the first while again
        }    
            while (score > 0 && (total != winning_roll || total == 7) && (next == 'y' || next == 'Y'))    //three conditions to enter and exit second while loop
            {
                    roll1 = rand()%6+1;
                    roll2 = rand()%6+1;
                    total = roll1 + roll2; //resets rolls and total
                    cout << "you rolled " << roll1 << "and" << roll2 << " giving you a total of " << total << " 2 " << endl;
                    if (total == 7) // sets losing condition for second loop only
                    {
                        cout << "sorry you lose "<< endl;
                        score = -1;
                        cout << "would you like to play again "<< endl;
                        cin >> start_game;
                    }
                    if (total == winning_roll)  //sets winning condition for second loop only
                    {
                        cout << "You Win " << endl;
                        score = -1;
                        cout << "would you like to play again "<< endl;
                        cin >> start_game;
                    }
                    else //continues to loop till one of the two conditions is filled
                    {
                        cout << "would you like to roll again (Y/N)";
                        cin >> next;
                        if (next == 'n' || next == 'N')
                    {
                        start_game = 'n';
                    } 
                    }
            }        
    }
    cout << "End Game" << endl; 
}
        /*
        cout <<"welcome" << endl;
        int nr_prob = 0;
        int nr_correct = 0;
        int nr_incorrect = 0;
        const int MAX_TRIES = 3;
        char start_game;
        cout<<"do you want a new question? (Y/N)";
        cin >> start_game;
        while (start_game == 'Y' || start_game == 'y')
        {
            int op1 = rand()%11;
            int op2 = rand()%11;
            int correct_answer = op1*op2
            int user_answer = 0
            int nr_tries = 0
            bool is_incorrect = true;
            bool more_tries = true;
            do
            {
                do{
                    cout << "Enter the result of" << op1 << " X " << op2 << " " <<endl;
                    cin >> user_answer;
            }
            while(user_answer < 0 || user_answer > 100);
            {
                cout << "please enter a value between. 0 and 100";
                cin >> user_answer;
            }

            is_incorrect = user_answer != correct_answer;
            
            nr_tries++;
            more_tries = nr_tries < MAX_TRIES;

            }
            while(is_incorrect && more_tries);

            nr_prob++;
            if (is_incorrect)
                nr_incorrect++;
                cout << "sorry, your answers were incorrect! Let's play more" endl;
            else

                nr_correct++;
                switch(nr_tries)
                {
                    case 1: cout << "great job"  << endl; break;
                    case 2: cout << "good job"   << endl; break;
                    case 3: cout << "you got it" << endl;
                }
            cout<<"do you want a new question? (Y/N)";
            cin >> start_game;
        }
    cout << "Nr prob =" << nr_prob << endl;
    cout << "Nr incorrect =" << nr_incorret << endl;
    cout << "Nr correct" = << nr_correct << endl;
    */