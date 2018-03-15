#include <iostream>
#include<stdlib.h>
#include <time.h>
#include<fstream>
#include<windows.h>

using namespace std;

int main()
{
//Début

int a,b,iSecret,c,a1,ok,ct,q,w,e,r,t,y,ctt=1,q1,w1,e1,r1,t1,y1,argent;
srand (time(NULL));
cout<<"Bienvenue dans multijeux "<<endl<<endl;
cout<<"Cree par Andrei Radocea"<<endl<<endl;
cout<<"Entrez l'argent dont vous voulez disposer  ";
cin>>a;
cout<<"Vous avez: "<<a<<" euros. Tous les jeux coutent 10 euros."<<endl<<endl;

while(a<10){
    system("cls");
    cout<<"Vous avez besoin de "<<10-a<<" euros pour continuer. "<<endl;
    cin>>a1;
    a=a+a1;
}

system("cls");
while(ctt==1){
    while(a<10){
        system("cls");
        cout<<"Vous avez besoin de "<<10-a<<" euros pour continuer. "<<endl;
        cin>>a1;
        a=a+a1;
}

//MENU
cout<<"======= Selectionez un jeu ====== Vous avez: "<<a<<" euros. "<<endl;
cout<<"1.Plus/Moins "<<endl;
cout<<"2.Etoiles "<<endl;
cout<<"3.Le numero "<<endl;
cout<<"4.Loto 6/49 "<<endl;

cin>>b;
cout<<endl;
system("cls");
//MENU 2 APRES CHOIX
switch(b){
    case 1:cout<<"Vous avez selectionnee le jeu du plus ou moins. Un nombre va apparaitre et vous devrez dire si le suivant seras plus grand ou plus petit (1-999)"<<endl;break;
    case 2:cout<<"Vous avez selectionne le jeu des etoiles"<<endl;break;
    case 3:cout<<"Quel est le numero?"<<endl;cout<<"Trouvez le bon numero dans la liste. "<<endl;break;
    case 4:cout<<"Loto 6/49"<<endl;cout<<"Choisisez 6 numeros compris entre 1 et 49 "<<endl;break;
}

//PREMIER JEU
if(b==1){
    ok=1;
    while(ok==1){
        while(a<10){
            cout<<"Vous avez besoin de "<<10-a<<" euros pour continuer"<<endl;
            cin>>a1;
            a=a+a1;
        }
    iSecret = rand() % 1000 + 1;
    q=iSecret;
    cout<<"Appuyez sur 1 pour supperieur et 0 pour inferrieur "<<endl;
    cout<<" "<<iSecret<<" ";
    cout<<endl;
    cin>>c;
    cout<<endl;
    iSecret = rand() % 1000 + 1;
    if(c==1){
        if(c==1 && iSecret>q){
        cout<<" Vous avez gagne ! "<<10<<endl;
        a=a+20;
        }
        else{
        cout<<" Desole, vous avez perdu ";
}}

if(c==0){
    if(c==0 && iSecret<q){
    cout<<" Vous avez gagne ! "<<10<<endl;
    a=a+20;}
    else{
    cout<<" Desole, vous avez perdu ";
    a=a-10;
    }}

cout<<" Vous avez envie de continuer ? Appuyez sur 1 pour continuer et 0 pour arreter "<<endl;
cin>>ok;
system("cls");
}}
    //DEUXIEME JEU
if(b==2){
    ok=1;
    while(ok==1)
    {
    while(a<10){
        cout<<" Vous avez besoin de "<<10-a<<" euros pour continuer"<<endl;
        cin>>a1;
        a=a+a1;
    }
    cout<<"Combien d'etoiles vont apparaitre (max : 5) ?"<<endl;
    cin>>c;
    iSecret = rand() % 5 + 1;
    ct=iSecret;
    while(iSecret!=0){
    cout<<"* ";
    Sleep(1000);
    iSecret=iSecret-1;
    }
    if(ct==c){
    cout<<"Vous avez gagne 50 euros"<<endl;
    a=a+60;
    }
    else
    cout<<" Desole, vous avez perdu "<<endl;
    a=a-10;
    cout<<" Vous avez envie de continuer ? Appuyez sur 1 pour continuer et 0 pour arreter "<<endl;
    cin>>ok;
    system("cls");
}}
//TROISIEME JEU
if(b==3){
    ok=1;
    while(ok==1){
    while(a<10)
    {
cout<<" Vous avez besoin de"<<10-a<<" euros pour continuer"<<endl;
cin>>a1;
a=a+a1;
}
q=iSecret = rand() % 100 + 1;
w=iSecret = rand() % 100 + 1;
e=iSecret = rand() % 100 + 1;
r=iSecret = rand() % 100 + 1;
t=iSecret = rand() % 100 + 1;
cout<<q<<" "<<w<<" "<<e<<" "<<r<<" "<<t<<endl;
y=rand()%4;
switch(y)
{
case 0:y=q;break;
case 1:y=w;break;
case 2:y=e;break;
case 3:y=r;break;
case 4:y=t;break;
}
cin>>c;
if(c==y){
cout<<" Vous avez gagne 50 euros"<<endl;
a=a+60;}
else
cout<<" Desole, vous avez perdu "<<endl;
a=a-10;
cout<<" Vous avez envie de continuer ? Appuyez sur 1 pour continuer et 0 pour arreter "<<endl;
cin>>ok;
system("cls");

}
}
//QUATRIEME JEU
if(b==4)
{
ok=1;
while(ok==1)
{
while(a<10)
{
cout<<"Vous avez besoin de "<<10-a<<" euros pour continuer "<<endl;
cin>>a1;
a=a+a1;
}
q = rand() % 49 + 1;
w = rand() % 49 + 1;
e = rand() % 49 + 1;
r = rand() % 49 + 1;
t = rand() % 49 + 1;
y = rand() % 49 + 1;

if(q==w)
w = rand() % 49 + 1;
if(q==e)
e = rand() % 49 + 1;
if(q==r)
r = rand() % 49 + 1;
if(q==t)
t = rand() % 49 + 1;
if(q==y)
y = rand() % 49 + 1;
if(w==e)
e = rand() % 49 + 1;
if(w==r)
r = rand() % 49 + 1;
if(w==t)
t = rand() % 49 + 1;
if(w==y)
y = rand() % 49 + 1;
if(e==r)
r = rand() % 49 + 1;
if(e==t)
t = rand() % 49 + 1;
if(e==y)
y = rand() % 49 + 1;
if(r==t)
t = rand() % 49 + 1;
if(r==y)
y = rand() % 49 + 1;
if(t==y)
y = rand() % 49 + 1;
cin>>q1>>w1>>e1>>r1>>t1>>y1;

if(q1==q && w1==w && e1==e && r1==r && t1==t && y1==y){
cout<<" VOUS AVEZ GAGNE 1.000.000.000 EUROS !!! "<<endl;
a=a+1000000010;}
else
cout<<"Desole, les numeros selectionnes sont: "<<q<<" "<<w<<" "<<e<<" "<<r<<" "<<t<<" "<<y<<endl;
a=a-10;

cout<<" Vous avez envie de continuer ? Appuyez sur 1 pour continuer et 0 pour arreter "<<endl;
cin>>ok;
system("cls");


}
}

}
return 0;
//FIN
}
