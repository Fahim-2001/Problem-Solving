#include <bits/stdc++.h>
using namespace std;

int main()
{
    int intersGoals, gremiosGoals, intersWins = 0, gremiosWins = 0, draws = 0, totalMatches = 0, request;

    while (1)
    {
        cin >> intersGoals >> gremiosGoals;
        if (intersGoals == gremiosGoals)
            draws++;
        else if (intersGoals < gremiosGoals)
            gremiosWins++;
        else
            intersWins++;

        totalMatches++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> request;
        if (request == 2)
        {
            cout << totalMatches << " grenais" << endl;
            cout << "Inter:" << intersWins << endl;
            cout << "Gremio:" << gremiosWins << endl;
            cout << "Empates:" << draws << endl;
            if (intersWins == gremiosWins)
                cout << "Não houve vencedor" << endl;
            else if (intersWins > gremiosWins)
                cout << "Inter venceu mais" << endl;
            else
                cout << "Gremio venceu mais" << endl;
            break;
        }
        else if (request == 1)
        {
            continue;
        }
    }
}