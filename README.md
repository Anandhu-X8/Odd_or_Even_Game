# Odd_or_Even_Game

Alright, first i want you to forget you are on github; you are with one of your friends and are super bored. you want to play a game but
you dont happen to have anything to play with. Quite miserable, right? 
Well worry no more someone who was already in your position long ago had already found a solution. An interesting game which only requires your
hands to play the game. But dont look down yet because this you need more than your fingers to win this game.

introducing,
    ODD OR EVEN !!! [also known as hand-cricket (the sport game cricket)]

How are hands used?
    -first and foremost, you need to be familiar with the finger representation of the first six numbers.
    these will come in handy throughout the game.
    -also this can be played by only two teams at a time. a single player can also be considered a team.

well, that was it. now lets get into the rules and general gameplay

I) The toss
    this is the fist part. for this the players get into an agreement on which one selects ODD and which one selects EVEN. 
    exactly similar to choosing head or tails during a coin toss. then both of them show a number of their choosing simultaneously.
    add both of them up; if the sum is even, the one who chose EVEN wins the toss, if its odd, the other guy wins. simple.

II)Innings
    Now the toss is over, the winner of toss can choose either batting or bowling. if she choose batting, the other one must bowl and vice versa.
    this is known in the biz as an "Innings". once its over, the second Innings start with the roles reversed. all games have only 2 Innings*.
    (incase you find the terminology difficult, it doest matter. a demo game is included which will make you understand the rules)

RULES & GAMEPLAY
    now that we know the format of a game, lets dig into what exactly batting and bowling means with help of a demo game.

    As with any interesting games, i summon Alice and Bob. 
    alice chose even while bob chose odd. during toss, alice showed 5 and bob showed 3, since 8 is even alice won the toss.
    alice chose to bat first. 
         the objective of the batter(now alice) is to score as much runs(points) as possible. the objective of the bowler 
    is to take his wicket (make her out) as fast as possible. how are runs scored and wickets taken? lets see.
    the batter and bowler shows a number of their choosing at the same time. if they are same, the wicket is lost, if they are different,
    the batter gets as many points as the number he showed.
        [note that the numbers showed by players will be shown inside brackets for simplicity]
     1st Innings: remember, alice is batting. 
    alice[6]& bob[5] alice now has 6 runs.
    alice[4]& bob[1] alice now has 10 runs.
    alice[4]& bob[6] alice now has 14 runs.
    alice[5]& bob[5] alice's wicket is lost. therefore 1st Innings is over.
     2nd Innings: now alice is bowling and bob is batting. bob must score 15 runs to win.
    bob[3]& alice[2] bob now has 3 runs
    bob[6]& alice[5] bob now has 9 runs
    bob[1]& alice[1] bob lost his wicket, and also he lost the game. simple.

Thats all about the game. i hope i didnt make this look too complicated. now back to Github, why did i code this game in C++?
    i find programming really interesting, and decided to make a terminal game out of it in order to get a feel for actually 
    doing a "project" all by myself.
why C++?
    i love C++
why post this on Github?
    not because my code is too awesome to not share, but to make myself familiar with basic git workflow. I dont even know what
    fork and pull request is 
So yeah, thats all about it. on the slim chance that anyone else is reading this, thank you. i would really appreaciate a comment.
even if no one saw this, im ok. my friends were really impressed when i showed them this at the computer lab. made my day, even the 
teacher appreaciated me.


    additional notes
*also some importand notes: the game has some additional rules to make it fair for players
1. in case of tie: if during the second Innings, the batter needed 50 runs(need 51 to win) and scored exactly 50 runs(1 more run to win) 
but lost wicket at the very next ball. pretty frustating right? well introducing super over.
    super over means a small game to resolve tie, much like a sudden death. one more game with just 6 balls and 2 wickets for each batsman.
    (ball originates from the cricket terminology, for eg: the 1st Innings in demo game only lasted 4 balls)
    the following are valid super over Innings(dot means wicket is lost): [1 * 4 6 6 2], [5 6 5 3 * *] not that batter has an additional wicket
2.playing with any number of players: what if you have a total of 3 players, sucks for one to watch the other two playing, right?
introducing "common":
    here, each team has equal number of players and if one is left over, he will play as a common. common is a player who plays for both teams
    but only during their batting, and not during bowling. say another friend Charlie joined alice and bob. during alice's batting, after
    alice is out, Charlie can bat for alice using his wicket. after he is also out, bob bats (alice bowls) when he's down Charlie bats for bob
    [NB: common can never bowl, nor can open an Innings, the team players much play first]

                                             ~Fin~
