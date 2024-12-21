#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Bool Type
#include <unistd.h>  // Sleep Function

struct Player
{
    char name[20]; // Name
    int life;      // 3
    int nbTurn;    // 0;
};

void shoot(struct Player *players, int nbPlayer);
void displayGameStat(struct Player *players, int nbPlayer);
int nbPlayerAlive(struct Player *players, int nbPlayer);
void writeFile(struct Player *players, int nbPlayer);

int main()
{
    srand(time(0)); // Set Game Seed
    struct Player players[4] = {{"Will", 3, 0}, {"Tom", 3, 0}, {"Gab", 3, 0}, {"Oli", 3, 0}};

    int nbPlayer = sizeof(players) / sizeof(players[0]);
    int nbRound = 0;
    char input;
    do
    {
        // Game Loop
        nbRound++;
        printf("Round %d : ", nbRound);
        shoot(players, nbPlayer);
        sleep(1);
    } while (nbPlayerAlive(players, nbPlayer) > 1);

    printf("%d Round Played", nbRound);
    printf("\nOne Man Standing, Congrats !\n");
    displayGameStat(players, nbPlayer);
    writeFile(players, nbPlayer);

    return 0;
}

void shoot(struct Player *players, int nbPlayer)
{
    int bullet = rand() % 6; // 6 => 0..5
    bool isPlayerHitted = false;
    for (int i = 0; i < nbPlayer; i++)
    {
        if (bullet == i && players[i].life > 0)
        {
            printf("%s Got Hit !\n", players[i].name);
            players[i].life--;
            isPlayerHitted = true;
        }
        if (players[i].life > 0)
        {
            players[i].nbTurn++;
        }
        if (players[i].life == 0)
        {
            printf("%s Died !\n", players[i].name);
            players[i].life--;
        }
    }
    if (!isPlayerHitted)
    {
        printf("Click, No One Got Hit !\n");
    }
}

void displayGameStat(struct Player *players, int nbPlayer)
{
    // Game Stat
    printf("\n--- Game Stat ---\n");
    for (int i = 0; i < nbPlayer; i++)
    {
        printf("Name: %-10s, Life : %-2d, Turn Played : %-2d\n", players[i].name, players[i].life, players[i].nbTurn);
    }
}

int nbPlayerAlive(struct Player *players, int nbPlayer)
{
    int playerCount = 0;
    for (int i = 0; i < nbPlayer; i++)
    {
        if (players[i].life > 0)
        {
            playerCount++;
        }
    }
    return playerCount;
}

void writeFile(struct Player *players, int nbPlayer)
{
    FILE *pF = fopen("./gamestats.txt", "w");

    fprintf(pF, "--- Game Stat ---\n");
    for (int i = 0; i < nbPlayer; i++)
        fprintf(pF, "Name: %-10s, Life : %-2d, Turn Played : %-2d\n", players[i].name, players[i].life, players[i].nbTurn);

    fclose(pF);
}
