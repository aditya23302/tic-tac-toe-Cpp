#include<bits/stdc++.h>
using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void draw()
{
    system("cls");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void input()
{
    int p;
    cout<<"Press a number for your chance:";
    cin>>p;
    if(p==1)
        matrix[0][0]=player;
    else if(p==2)
        matrix[0][1]=player;
    else if(p==3)
        matrix[0][2]=player;
    else if(p==4)
        matrix[1][0]=player;
    else if(p==5)
        matrix[1][1]=player;
    else if(p==6)
        matrix[1][2]=player;
    else if(p==7)
        matrix[2][0]=player;
    else if(p==8)
        matrix[2][1]=player;
    else if(p==9)
        matrix[2][2]=player;


}
void toggle()
{
    if(player=='X')
        player='O';
    else
        player='X';
}
char win()
{
    //X wins
    if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
        return 'X';
    if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
        return 'X';
    if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
        return 'X';

    if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
        return 'X';
    if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
        return 'X';
    if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
        return 'X';

    if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
        return 'X';
    if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
        return 'X';

    //O wins

    if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
        return 'O';
    if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
        return 'O';
    if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
        return 'O';

    if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
        return 'O';
    if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
        return 'O';
    if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
        return 'O';

    if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
        return 'O';
    if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
        return 'O';

    return '.';


}

int main()
{
    draw();
    while(1)
    {
        input();
        draw();
        if(win()=='X')
        {
            cout<<"X wins"<<endl;
            break;
        }
        else if(win()=='O')
        {
            cout<<"O wins"<<endl;
            break;
        }
        toggle();
    }
    system("pause");
    draw();
    return 0;
}
