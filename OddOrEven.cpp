/********************************************************
 This is  comparatively simple c++ program to implement
  one of my favourite games: odd or even'
This code is written entirely by me and i hope you enjoy my work.
The cost of this Project is around 6 hours. Peace <3
                        ~Anandhu S
**********************************************************/

#include <ctime>
#include <cstdlib> //for rand()
#include <iostream>
#include <string>
#include <iomanip> //to use setprecision()

using namespace std;
class Innings
{
private:
    int runs = 0;
    int balls = 0;
    bool wicket = true;

public:
    Innings(int runz);
    Innings();
    ~Innings();
    void addRuns(int R);
    void incBalls();
    void Print() const;
    int getRandom() const;
    bool DidLose(const Innings obj) const;
    // these two are the most important functions
    void HumanPlay1st(Innings &C);
    void CompPlay1st(Innings H);
};

Innings::Innings(int runz)
    : runs(runz)
{
}

Innings::Innings()
{
}

Innings::~Innings()
{
}

void Innings::addRuns(int R)
{
    runs += R;
}

void Innings::incBalls()
{
    balls++;
}

// this function will mimic comp choosing a number
int Innings::getRandom() const
{
    srand(time(0));
    int temp = rand();
    return temp % 6 + 1;
}

void Innings::Print() const
{
    cout << runs << " runs from " << balls << " balls.\n";
    cout << "Average score= " << setprecision(2) << (float)runs / balls;
}


//this func is called when the chaser loses his wicket
bool Innings::DidLose(const Innings Q) const // Checks if the calling
                                             // object is lost(has smaller runs)
{
    // inner func must be chasing
    if (runs == Q.runs)
    {
        cout << "Tie!!!";
        return false;
    }
    else if (runs < Q.runs)
    {
        cout << "Game Over!!!!";
        return true;
        
    }
    else
    {
        return false;
    }
}

void Innings::HumanPlay1st(Innings &K) // human is calling. K is computer
{
    while (wicket) // human bats, cp bowls
    {
        int bat;
        do
        {
            cout << "Bat: ";
            cin >> bat;
        } while (bat > 6 || bat < 1);
        int BC_temp = K.getRandom(); // bowling_computer
        cout << "computer bowled " << BC_temp << '\n';

        if (bat == BC_temp)
        {
            cout << "you are out! wicket lost\n";
            Print();
            wicket = false;
        }
        else
        {
            addRuns(bat);
            incBalls();
        }
    }

    cout << "\n\n************\n\n";

    // now computer will chase
    while (K.wicket)
    {
        int ball;
        do
        {
            cout << "Bowl: ";
            cin >> ball;
        } while (ball > 6 || ball < 1);
        int C_bat = K.getRandom();
        cout << "computer batted " << C_bat << '\n';

        if (C_bat == ball)
        {
            cout << "computer out! You Won\n";
            K.Print();
            K.wicket = false;
        }
        else
        {
            K.addRuns(C_bat);
            K.incBalls();
            if (DidLose(K))
            {
                cout << "Computer win, you lose.\n"; // comp won chasing
                K.Print();
                K.wicket = false;
            }
        }
    }
}

void Innings::CompPlay1st(Innings K) // computer is calling. K is human
{
    while (wicket) // computer bats. we bowl
    {
        int ball;
        do
        {
            cout << "bowl: ";
            cin >> ball;
        } while (ball > 6 || ball < 1);

        int C_bat = getRandom();
        cout << "computer batted " << C_bat << '\n';
        if (ball == C_bat)
        {
            cout << "computer is out!\n";
            Print();
            wicket = false;
        }
        else
        {
            addRuns(C_bat);
            incBalls();
        }
    }

    cout << "\n\n************\n\n";
    // now we chase. comp bowl
    while (K.wicket)
    {
        int H_bat;
        do
        {
            cout << "Bat ";
            cin >> H_bat;
        } while (H_bat > 6 || H_bat < 1);

        int C_ball = getRandom();
        cout << "computer bowled " << C_ball << '\n';
        if (C_ball == H_bat)
        {
            cout << "you are out! Computer Won\n";
            K.Print();
            K.wicket = false;
        }
        else
        {
            K.addRuns(H_bat);
            K.incBalls();
            if (DidLose(K))
            {
                cout << "Computer lost. You Won\n";
                K.Print();
                K.wicket = false; // eventho human won, its wick is lost
                                  // to terminate the program
            }
        }
    }
}
//branch vs
int main()
{
    Innings Human, Comp;
    string name;
    cout << "Enter player name: ";
    cin >> name;
    cout << "\nWelcome " << name << " to Odd or Even™ ";
    int H_toss;
    char T;
    do
    {
        cout << "\nOdd or Even (O | E): ";
        cin >> T;
    } while (T != 'O' && T != 'o' && T != 'E' && T != 'e'); //wow this is valid!

    switch (T)
    {
    case 'e':
    case 'E':
        H_toss = 0;
        break;
    case 'O':
    case 'o':
        H_toss = 1;
        break;

    default:
        cout << "not fair man.";
        break;
    }

    int H_hand;
    do
    {
        cout << "Toss: ";
        cin >> H_hand;
    } while (H_hand < 1 || H_hand > 6);

    int temp = Comp.getRandom();
    int fate = (H_hand + temp) % 2;
    if (fate == H_toss) // human won toss
    {
        cout << name << " won toss.\n";
        char toss;
        do
        {
            cout << "Bating[T] or Bowling[W] ?: ";
            cin >> toss;
        } while (toss != 'T' && toss != 't' && toss != 'W' && toss != 'w');

        if (toss == 't' || toss == 'T')
        {
            Human.HumanPlay1st(Comp);
        }
        else if (toss == 'w' || toss == 'W')
        {
            Comp.CompPlay1st(Human);
        }
    }
    else if (fate != H_hand) // computer won toss
    {

        cout << "computer won toss.\n";
        int C_hand = (Comp.getRandom()) % 2;
        if (C_hand == 0)
        {
            cout << "computer chose to bat\n";
            Comp.CompPlay1st(Human);
        }
        else
        {
            cout << "computer chose to bowl\n";
            Human.HumanPlay1st(Comp);
        }
    }

    cout << "\n\nWell played, " << name << '\n';
    return 0;
}
/*
    lessons:
    1.do not confuse = with ==
    2.be carefull with validation using do...while
    3.restart if there's something that isnt right
    4.add comments to increase code length so that
      you can show off in front of your friends XD
 */
// shoutout to OOP gang!!
//  powered by VSCode
