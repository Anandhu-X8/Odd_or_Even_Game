This is my best attempt to replicate the popular game played in my home town, known as _Odd or Even_ (Hand cricket).
Orginally, it is intended to be played by using just hands, making it very covenient to be played on the go.

## RULE

The game requires both players to show/play a desired number, in the range 1 to 6 ; details will be explained shortly.
The game can be divided into two parts or innings as defined:
in the first innings, one player bats while other bowls, in the next innings, the roles are reversed.

### Batting & Bowling

the batter and Bowler will show reveal their choice of numbers at the same time, now there are two possibilities

1. they both show different numbers, then whatevere number is shown by the batter gets added to his total score
2. they are the same, in this case the batter is declared as out; if this is the first innings then the current bowler must now bat
   and try to beat the opponents score.

### Toss

the choice of who plays which role in the first innings is decided using a toss, here both players first choose either odd or even
and then choose a single number. if the sum of both numbers is odd, then the player who selected odd can choose whether to bat or bowl.
and vice versa.

### example

let Alice and Bob are playing, for toss, Alice choose even and Bob, odd
toss:
Alice:3 Bob:2
(the sum is 5 -> odd, hence Bob won the toss)
say he chose to Bat. the gameplay is as follows

```
Bob-4 Alice-6
Bob-5 Alice-1
Bob-5 Alice-3
Bob-6 Alice-6
```

Bod scored a total of 4+5+5=14 runs (the final is not counted), now Alice must score atleast
15 runs to win
say the alice's gameplay goes like

```
Alice-2 Bob-3
Alice-6 Bob-1
Alice-5 Bob-5
```

Alice got out at 8 runs, hence Bob won the game
