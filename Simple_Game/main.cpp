#include <iostream>

void start_game();
void end_game(int score);

using namespace std;

int main()
{
    string user_input;
    cout << "================ Welcome ================"<< endl;
    cout << "if you want to play game then enter 'play' to start : ";

    cin >> user_input;

    if(user_input == "play")
    {
      start_game();
    }
    else
    {
        end_game(0);
    }

}

void start_game() {

    char answer;
    int score =0;

    //question start here
    cout << "\n How much is 3+3 " << endl;
    cout << "a) 4" << endl;
    cout << "b) 6" << endl;
    cout << "c) 3" << endl;
    cout << "d) 0 " << endl;

    cout << "please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer;

    if (answer == 'b') {
        cout << "\n Congrats you choose right Answer !" << endl;
        score++;
    }
    else{
        cout << "\n Sorry you choose wrong Answer !" << endl;

    }
    //question ends here


    //question start here
    cout << "\n Who is the CEO of Google " << endl;
    cout << "a) Bill Gates" << endl;
    cout << "b) Jeff Bezos" << endl;
    cout << "c) Suleman" << endl;
    cout << "d) Sundar Pichai " << endl;

     cout << "please enter 'a' 'b' 'c' 'd' and press enter: ";
    cin >> answer;

    if (answer == 'b') {
        cout << "\n Congrats you choose right Answer !" << endl;
        score++;
    }
    else{
        cout << "\n Sorry you choose wrong Answer !" << endl;

    }

    //question ends here
    end_game(score);


}

void end_game(int score){
    cout << "\n Thanks for Playing" << endl;
    cout << "Your score is " << score << endl;
}
