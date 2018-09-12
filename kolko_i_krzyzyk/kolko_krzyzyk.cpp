#include <iostream>
#include <string>

using namespace std;

bool whoWins(char tab [3][3],char sign) {
    for (int i = 0; i < 3; ++i) {
        if (tab[i][0] == tab[i][1] && tab[i][0] == tab[i][2] && tab[i][0] == sign) {
            cout << "Player " << sign << " wins!" << endl;
            return true;
        }
        if (tab[0][i] == tab[1][i] && tab[0][i] == tab[2][i] && tab[0][i] == sign) {
            cout << "Player " << sign << " wins!" << endl;
            return true;
        }
    }
    if(tab[0][0]==tab[1][1] && tab[0][0]==tab[2][2] && tab[0][0] == sign){
        cout << "Player " << sign << " wins!" << endl;
        return true;
    }
    if(tab[0][2]==tab[1][1] && tab[0][0]==tab[2][0] && tab[0][2] == sign){
        cout << "Player " << sign << " wins!" << endl;
        return true;
    }

    return false;
}

char display(char tab[3][3]){

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j==2) cout << tab[i][j] << " " << endl;
            else cout << tab[i][j] << " ";

        }

    }

}



char whoGoesFirst(){
    char choice[2] = {'x','o'};
    char first = choice[rand()%2];
    if (first=='x')
    {cout << "Player x starts" << endl;
        return 'x';}
    if (first=='o')
    {cout << "Player o starts" << endl;
        return 'o';}


}


bool moveSign(char sign,char tab[3][3]) {
    int x, y;
    cout << "Player " << sign << ": Pick position" << endl;
    cin >> x;
    cin >> y;
    if (x > 3 || y > 3 || tab[x - 1][y - 1] != 0) {
        cout << "ERROR" << endl;
        return false;
    } else {
        tab[x - 1][y - 1] = sign;

        display(tab);
        return true;

    }
}

char play(char tab[3][3]) {


    int x, y;
    char sign = whoGoesFirst();


    for (int i = 0; i < 9; ++i) {



        if(!moveSign(sign, tab)) --i;
        else {
            if (whoWins(tab, sign)) break;
            if (sign == 'x') sign='o';
            else sign='x';

        }

    }
}


