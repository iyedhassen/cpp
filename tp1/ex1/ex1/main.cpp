#include<iostream>
using namespace std;
void kmToMiles(double km){cout<<km<<" km est �gal � "<<km/1.609<<" miles."<<endl;}
void milesToKm(double miles){cout<<miles<<" miles est �gal � "<<miles*1.609<<" km."<<endl;}
int main(){
    double val;
    int choix;
    cout<<"1_Choisissez une conversion:Kilom�tre vers Miles\n";
    cout<<"2_Choisissez une conversion:Miles vers Kilom�tre\n";
    cin>>choix;
    if(choix==1){
        cout<<" la distance en kilom�tres:";
        cin>>val;
        kmToMiles(val);
    }else if(choix==2){
        cout<<"la distance en miles:";
        cin>>val;
        milesToKm(val);
    }else{
        cout<<"invalide."<<endl;
    }
    return 0;
}
