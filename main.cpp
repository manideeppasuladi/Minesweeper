#include <iostream>
#include <stdlib.h>

using namespace std;

int matrixsize = 10;
struct obj 
{
    char fake;
    int data;
    bool view;
    bool bomb;
}area[10][10];

void areamap()
{
    area[0][0] = {'*',1,false,true};
    area[0][1] = {'*',1,false,false};
    area[0][2] = {'*',1,false,false};
    area[0][3] = {'*',1,false,false};
    area[0][4] = {'*',1,false,false};
    area[0][5] = {'*',1,false,false};
    area[0][6] = {'*',1,false,false};
    area[0][7] = {'*',1,false,false};
    area[0][8] = {'*',1,false,false};
    area[0][9] = {'*',1,false,false};

    area[1][0] = {'*',1,false,false};
    area[1][1] = {'*',1,false,false};
    area[1][2] = {'*',1,false,false};
    area[1][3] = {'*',1,false,false};
    area[1][4] = {'*',1,false,false};
    area[1][5] = {'*',1,false,false};
    area[1][6] = {'*',1,false,false};
    area[1][7] = {'*',1,false,false};
    area[1][8] = {'*',1,false,false};
    area[1][9] = {'*',1,false,false};

    area[2][0] = {'*',1,false,false};
    area[2][1] = {'*',1,false,false};
    area[2][2] = {'*',1,false,false};
    area[2][3] = {'*',1,false,false};
    area[2][4] = {'*',1,false,false};
    area[2][5] = {'*',1,false,false};
    area[2][6] = {'*',1,false,false};
    area[2][7] = {'*',1,false,false};
    area[2][8] = {'*',1,false,false};
    area[2][9] = {'*',1,false,false};

    area[3][0] = {'*',1,false,false};
    area[3][1] = {'*',1,false,false};
    area[3][2] = {'*',1,false,false};
    area[3][3] = {'*',1,false,false};
    area[3][4] = {'*',1,false,false};
    area[3][5] = {'*',1,false,false};
    area[3][6] = {'*',1,false,false};
    area[3][7] = {'*',1,false,false};
    area[3][8] = {'*',1,false,false};
    area[3][9] = {'*',1,false,false};
    
    area[4][0] = {'*',1,false,false};
    area[4][1] = {'*',1,false,false};
    area[4][2] = {'*',1,false,false};
    area[4][3] = {'*',1,false,false};
    area[4][4] = {'*',1,false,false};
    area[4][5] = {'*',1,false,false};
    area[4][6] = {'*',1,false,false};
    area[4][7] = {'*',1,false,false};
    area[4][8] = {'*',1,false,false};
    area[4][9] = {'*',1,false,false};

    area[5][0] = {'*',1,false,false};
    area[5][1] = {'*',1,false,false};
    area[5][2] = {'*',1,false,false};
    area[5][3] = {'*',1,false,false};
    area[5][4] = {'*',1,false,false};
    area[5][5] = {'*',1,false,false};
    area[5][6] = {'*',1,false,false};
    area[5][7] = {'*',1,false,false};
    area[5][8] = {'*',1,false,false};
    area[5][9] = {'*',1,false,false};

    area[6][0] = {'*',1,false,false};
    area[6][1] = {'*',1,false,false};
    area[6][2] = {'*',1,false,false};
    area[6][3] = {'*',1,false,false};
    area[6][4] = {'*',1,false,false};
    area[6][5] = {'*',1,false,false};
    area[6][6] = {'*',1,false,false};
    area[6][7] = {'*',1,false,false};
    area[6][8] = {'*',1,false,false};
    area[6][9] = {'*',1,false,false};

    area[7][0] = {'*',1,false,false};
    area[7][1] = {'*',1,false,false};
    area[7][2] = {'*',1,false,false};
    area[7][3] = {'*',1,false,false};
    area[7][4] = {'*',1,false,false};
    area[7][5] = {'*',1,false,false};
    area[7][6] = {'*',1,false,false};
    area[7][7] = {'*',1,false,false};
    area[7][8] = {'*',1,false,false};
    area[7][9] = {'*',1,false,false};

    area[8][0] = {'*',1,false,false};
    area[8][1] = {'*',1,false,false};
    area[8][2] = {'*',1,false,false};
    area[8][3] = {'*',1,false,false};
    area[8][4] = {'*',1,false,false};
    area[8][5] = {'*',1,false,false};
    area[8][6] = {'*',1,false,false};
    area[8][7] = {'*',1,false,false};
    area[8][8] = {'*',1,false,false};
    area[8][9] = {'*',1,false,false};

    area[9][0] = {'*',1,false,false};
    area[9][1] = {'*',1,false,false};
    area[9][2] = {'*',1,false,false};
    area[9][3] = {'*',1,false,false};
    area[9][4] = {'*',1,false,false};
    area[9][5] = {'*',1,false,false};
    area[9][6] = {'*',1,false,false};
    area[9][7] = {'*',1,false,false};
    area[9][8] = {'*',1,false,false};
    area[9][9] = {'*',1,false,false};
}
void printmat()
{
    for(int i = 0 ; i < matrixsize ; i++ )
    {
        for (int j = 0; j < matrixsize; j++)
        {
            if(area[i][j].view)
            {
            cout<<area[i][j].data<<" ";
            }
            else
            {
                cout<<area[i][j].fake<<" ";
            }
            
        }
        cout<<endl;
        
    }
}
int checkstate(int x, int y)
{
    if(area[x][y].view)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int check(int xinit, int xfinal, int yinit, int yfinal)
{
    //cout<<xinit<<xfinal<<yinit<<yfinal<<endl;
    for(int i = xinit ; i <=  xfinal ; i ++)
    {
        for(int j = yinit ; j <=  yfinal ; j ++)
        {
            if(! area[i][j].bomb )
                area[i][j].view=true;
            else 
                return 0;
        }
    }
    return 1;
}
void start()
{
    int x,y,xinit,xfinal,yinit,yfinal;
    char choice='Y';
    while(choice != 'N' )
    {
        cout<<"Enter the X and the Y Coordinates :"<<endl;
        cin>>x;
        cin>>y;
        if(checkstate(x,y))
        {
            cout<<"Already Done"<<endl;
        }
        else {
            /* checking what matrix to be checked */
            if(x - 1 < 0 )
            {
                xinit = x;
                xfinal = x + 1;
            }
            else if (x + 1 > matrixsize-1)
            {
                xinit = x - 1;
                xfinal = x ;
            }
            else
            {
                xinit = x-1;
                xfinal = x+1;
            }
            if(y - 1 < 0 )
            {
                yinit = y;
                yfinal = y + 1;
            }
            else if (y + 1 > matrixsize-1)
            {
                yinit = y - 1;
                yfinal = y ;
            }
            else
            {
                yinit = y - 1;
                yfinal = y + 1;
            }
            if(check(xinit,xfinal,yinit,yfinal))
            {
                cout<<"Your are doing good"<<endl;
            }
            else 
            {
                cout<<"Game Over : You've activated the bomb"<<endl;
                printmat();
                return ;
            }
            
        }
        printmat();
        cout<<"Next Point? (Y/N):";
        cin>>choice;
    }
}
void score()
{
    int sum = 0;
    for(int i =  0 ; i < matrixsize ; i ++)
    {
        for(int j = 0 ; j < matrixsize ; j++)
        {
            if(area[i][j].view)
            {
                sum+= area[i][j].data;
            }
        }
    }
    cout<<endl<<"Your Score : " << sum <<endl;
}
int main()
{
    
    areamap();
    printmat();
    start();
    score();
    return 0;
}