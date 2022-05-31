#include<bits/stdc++.h>
using namespace std;
char board[10]={'0','1','2','3','4','5','6','7','8','9'};
char cs,ps;
int ct=0,pt=0,gstatus=1,turn=1;
void display(){
    cout<<"\t\tBOARD:"<<endl;
    cout<<board[1]<<" "<<board[2]<<" "<<board[3]<<" "<<endl;
    cout<<board[4]<<" "<<board[5]<<" "<<board[6]<<" "<<endl;
    cout<<board[7]<<" "<<board[8]<<" "<<board[9]<<" "<<endl;
}
void turn_select(){
    //system("CLS");
    while(1){
        cout<<"select your turn (1 or 2):";
        cin>>pt;
        if(pt==1){
            ct=2;
            break;
        }
        else if(pt==2){
            ct=1;
            break;
        }
        else{
            system("CLS");
            cout<<"invalid turn"<<endl;
            continue;
        }
    }
    system("CLS");
}
void sign_select(){
    //system("CLS");
    while(1){
        cout<<"select your sign (X or O):";
        cin>>ps;
        if(ps=='X'){
            cs='O';
            break;
        }
        else if(ps=='O'){
            cs='X';
            break;
        }
        else{
            system("CLS");
            cout<<ps<<" sign is not available, try again"<<endl;
            continue;
        }
    }
    //system("CLS");
}
void player_turn(){
    int flag=1;
    while(flag){
        char x;
        cout<<"enter position=";
        cin>>x;
        switch(x){
            case '1':
                if(board[1]=='1'){
                    board[1]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '2':
                if(board[2]=='2'){
                    board[2]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '3':
                if(board[3]=='3'){
                    board[3]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '4':
                if(board[4]=='4'){
                    board[4]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '5':
                if(board[5]=='5'){
                    board[5]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '6':
                if(board[6]=='6'){
                    board[6]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '7':
                if(board[7]=='7'){
                    board[7]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '8':
                if(board[8]=='8'){
                    board[8]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            case '9':
                if(board[9]=='9'){
                    board[9]=ps;
                    flag=0;
                }
                else{
                    cout<<"invalid move"<<endl;
                }
                break;
            default:
                cout<<"invalid position"<<endl;
                break;
        }
    }
}
void computer_turn(){
    if(board[1]==board[2]&&board[2]==cs&&board[3]=='3'){
        board[3]=cs;
    }
    else if(board[1]==board[3]&&board[3]==cs&&board[2]=='2'){
        board[2]=cs;
    }
    else if(board[2]==board[3]&&board[3]==cs&&board[1]=='1'){
        board[1]=cs;
    }
    else if(board[4]==board[5]&&board[5]==cs&&board[6]=='6'){
        board[6]=cs;
    }
    else if(board[5]==board[6]&&board[6]==cs&&board[4]=='4'){
        board[4]=cs;
    }
    else if(board[4]==board[6]&&board[6]==cs&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[7]==board[8]&&board[8]==cs&&board[9]=='9'){
        board[9]=cs;
    }
    else if(board[8]==board[9]&&board[9]==cs&&board[7]=='7'){
        board[7]=cs;
    }
    else if(board[7]==board[9]&&board[9]==cs&&board[8]=='8'){
        board[8]=cs;
    }
    else if(board[1]==board[4]&&board[4]==cs&&board[7]=='7'){
        board[7]=cs;
    }
    else if(board[4]==board[7]&&board[7]==cs&&board[1]=='1'){
        board[1]=cs;
    }
    else if(board[7]==board[1]&&board[1]==cs&&board[4]=='4'){
        board[4]=cs;
    }
    else if(board[2]==board[5]&&board[5]==cs&&board[8]=='8'){
        board[8]=cs;
    }
    else if(board[2]==board[8]&&board[8]==cs&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[8]==board[5]&&board[5]==cs&&board[2]=='2'){
        board[2]=cs;
    }
    else if(board[6]==board[3]&&board[6]==cs&&board[9]=='9'){
        board[9]=cs;
    }
    else if(board[9]==board[6]&&board[6]==cs&&board[3]=='3'){
        board[3]=cs;
    }
    else if(board[3]==board[9]&&board[9]==cs&&board[6]=='6'){
        board[6]=cs;
    }
    else if(board[1]==board[5]&&board[5]==cs&&board[9]=='9'){
        board[9]=cs;
    }
    else if(board[5]==board[9]&&board[9]==cs&&board[1]=='1'){
        board[1]=cs;
    }
    else if(board[1]==board[9]&&board[9]==cs&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[3]==board[5]&&board[3]==cs&&board[7]=='7'){
        board[7]=cs;
    }
    else if(board[7]==board[3]&&board[3]==cs&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[5]==board[7]&&board[7]==cs&&board[3]=='3'){
        board[3]=cs;
    }
    else if(board[1]==board[2]&&board[2]==ps&&board[3]=='3'){
        board[3]=cs;
    }
    else if(board[1]==board[3]&&board[3]==ps&&board[2]=='2'){
        board[2]=cs;
    }
    else if(board[2]==board[3]&&board[3]==ps&&board[1]=='1'){
        board[1]=cs;
    }
    else if(board[4]==board[5]&&board[5]==ps&&board[6]=='6'){
        board[6]=cs;
    }
    else if(board[5]==board[6]&&board[6]==ps&&board[4]=='4'){
        board[4]=cs;
    }
    else if(board[4]==board[6]&&board[6]==ps&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[7]==board[8]&&board[8]==ps&&board[9]=='9'){
        board[9]=cs;
    }
    else if(board[8]==board[9]&&board[9]==ps&&board[7]=='7'){
        board[7]=cs;
    }
    else if(board[7]==board[9]&&board[9]==ps&&board[8]=='8'){
        board[8]=cs;
    }
    else if(board[1]==board[4]&&board[4]==ps&&board[7]=='7'){
        board[7]=cs;
    }
    else if(board[4]==board[7]&&board[7]==ps&&board[1]=='1'){
        board[1]=cs;
    }
    else if(board[7]==board[1]&&board[1]==ps&&board[4]=='4'){
        board[4]=cs;
    }
    else if(board[2]==board[5]&&board[5]==ps&&board[8]=='8'){
        board[8]=cs;
    }
    else if(board[2]==board[8]&&board[8]==ps&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[8]==board[5]&&board[5]==ps&&board[2]=='2'){
        board[2]=cs;
    }
    else if(board[6]==board[3]&&board[6]==ps&&board[9]=='9'){
        board[9]=cs;
    }
    else if(board[9]==board[6]&&board[6]==ps&&board[3]=='3'){
        board[3]=cs;
    }
    else if(board[3]==board[9]&&board[9]==ps&&board[6]=='6'){
        board[6]=cs;
    }
    else if(board[1]==board[5]&&board[5]==ps&&board[9]=='9'){
        board[9]=cs;
    }
    else if(board[5]==board[9]&&board[9]==ps&&board[1]=='1'){
        board[1]=cs;
    }
    else if(board[1]==board[9]&&board[9]==ps&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[3]==board[5]&&board[3]==ps&&board[7]=='7'){
        board[7]=cs;
    }
    else if(board[7]==board[3]&&board[3]==ps&&board[5]=='5'){
        board[5]=cs;
    }
    else if(board[5]==board[7]&&board[7]==ps&&board[3]=='3'){
        board[3]=cs;
    }
    else{
        srand(time(0));
        while(1){
            int y=rand()%10;
            if(board[y]!='X'&&board[y]!='O'&&y!=0){
                board[y]=cs;
                break;
            }
        }
    }
}
int checkwin();
int play(){
    if(turn==pt){
        player_turn();
    }
    else if(turn==ct){
        computer_turn();
    }
    else{
        cout<<"system error"<<endl;
        return -1;
    }
    if(board[1]!='1'&&board[2]!='2'&&board[3]!='3'&&board[4]!='4'&&board[5]!='5'&&board[6]!='6'&&board[7]!='7'&&board[8]!='8'&&board[9]!='9'&&checkwin()==1){
        return 0;
    }
    else{
        return checkwin();
    }
}
int checkwin(){
    if(board[1]==board[2]&&board[2]==board[3]){
        return 2;
    }
    else if(board[4]==board[5]&&board[5]==board[6]){
        return 2;
    }
    else if(board[7]==board[8]&&board[8]==board[9]){
        return 2;
    }
    else if(board[1]==board[4]&&board[4]==board[7]){
        return 2;
    }
    else if(board[2]==board[5]&&board[5]==board[8]){
        return 2;
    }
    else if(board[3]==board[6]&&board[6]==board[9]){
        return 2;
    }
    else if(board[1]==board[5]&&board[5]==board[9]){
        return 2;
    }
    else if(board[3]==board[5]&&board[5]==board[7]){
        return 2;
    }
    else
        return 1;
}
int main(){
    system("CLS");
    cout<<"\t\tTIC TAC TOE:"<<endl<<"welcome:";
    turn_select();
    sign_select();
    while(gstatus){
        system("CLS");
        display();
        gstatus=play();
        if(gstatus==0){
            system("CLS");
            display();
            cout<<"match draw"<<endl;
            break;            
        }
        else if(gstatus==2){
            system("CLS");
            display();
            if(turn==pt){
                cout<<"player won"<<endl;
            }
            else if(turn==ct){
                cout<<"computer won"<<endl;
            }
            break;
        }
        else if(gstatus==1){
            if(turn==pt){
                turn=ct;
            }
            else if(turn==ct){
                turn=pt;
            }
            continue;
        }
        else{
            cout<<"there is something wrong"<<endl;
            cout<<"gstatus="<<gstatus<<endl;
            cout<<"cs="<<cs<<endl;
            cout<<"ps="<<ps<<endl;
            cout<<"ct="<<ct<<endl;
            cout<<"pt="<<pt<<endl;
            cout<<"turn="<<turn<<endl;
            break;
        }
    }
    return 0;
}
