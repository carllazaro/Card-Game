#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Profiles(){
    cout<<"Profile";
}
void collections(){
    cout<<"Collections"<<endl;
    cout << "hand of midas - \033[33m***\033[0m\n";
    cout << "clover bouquet - \033[33m***\033[0m\n";
    cout << "double trouble - \033[31m****\033[0m\n";
    cout << "totem of undying - \033[34m*****\033[0m\n";

    /*
        For future update
        +----------------------+------------+----------------------------+
        |         Item         |   Rarity   |        Description         |
        +-----------+----------+------------+----------------------------+
        |> Hand of Midas       |***         |                            |
        |> Clover Bouquet      |**          |                            |         
        |> Double Trouble      |*****       |                            |
        |> Totem of Undying    |*****       |                            |
        +----------------------+------------+----------------------------+

     */
}
void Extras(){
    cout<<"Extras";
}
// void Nuke(){
//     cout<<"Nuke";
// }
int main(){
    cout<<"Welcome"<<endl;
    cout<<"[1] Profiles"<<endl;
    cout<<"[2] Collections"<<endl;
    cout<<"[3] Extras"<<endl;
    //cout<<"[4] xxxxx--Nuke---!DOnT SelecT!!!"<<endl;
    int select;
    cout<<"Select: ";
    cin>>select;
    switch(select){
        case 1:
            Profiles();
            break;
        case 2:
            collections();
            break;
        case 3:
            Extras();
            break;
        // case 4:
        //     Nuke();
        //     break;
    }
    /*
    system("chcp 65001 > nul");
    cout<<"\n     ╔══════╗""\n    ╔║░░░░░░║""\n   ╔║║░░░░░░║""\n   ║║║░░░░░░║""\n   ║║║░░░░░░║""\n   ║║╚══════╝""\n   ║╚══════╝""\n   ╚══════╝"<<endl;

     */
    return 0;
}