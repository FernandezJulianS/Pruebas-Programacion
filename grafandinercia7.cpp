#include <iostream>

#include <winbgim.h>


using namespace std;

void Figura7();
void centroinerciafig7(int);
void Figura9();


void waitForLeftMouseClick();


int main()

 {


int opc1;


do{


cout << "Bienvenido, elige los ejercicios que desees ejecutar" << endl;


cout << "1. Figura 1" << endl;


cout << "2. Figura 2" << endl;


cout << "3. Figura 3" << endl;


cout << "4. Figura 4" << endl;


cout << "5. Figura 5" << endl;


cout << "6. Figura 6" << endl;


cout << "7. Figura 7" << endl;


cout << "8. Figura 8" << endl;


cout << "9. Figura 9" << endl;


cout << "10. Figura 10" << endl;


cout << "11. Salir" << endl;


cout << "Ingrese la opcion" << endl;


cin >> opc1;


switch(opc1){


case 1: system("cls");


cout << "Figura 1" << endl; break;


case 2: system("cls");


cout << "Figura 2" << endl; break;


case 3: system("cls");


cout << "Figura 3" << endl; break;


case 4: system("cls");


cout << "Figura 4" << endl; break;


case 5: system("cls");


cout << "Figura 5" << endl; break;


case 6: system("cls");


cout << "Figura 6" << endl; break;


case 7: system("cls");


Figura7();  break;


case 8: system("cls");


cout << "Figura 8" << endl; break;


case 9: system("cls");


Figura9(); break;


case 10: system("cls");


cout << "Figura 10" << endl; break;


}

}


while(opc1!=11);


return 0;


  }


  void waitForLeftMouseClick()

{

    clearmouseclick(WM_LBUTTONDOWN);

    const int DELAY = 50; // Milliseconds of delay between checks

    int x, y;

    while (!ismouseclick(WM_LBUTTONDOWN))

        delay(DELAY);

    getmouseclick(WM_LBUTTONDOWN, x, y);

}


 void Figura9()

    {


        float R;

        cout << "Ingrese R" << endl;

        cin >> R;


        initwindow(600,450);

        settextstyle(1, 0, 4);

        outtextxy(125, 0, "Gráfico 9");

        setcolor(4);

        moveto (250, 250);

        lineto (250+R/2, 250);

        lineto ((250+(R/2)*3)   , 250);

        lineto ((250+(R/2)*3)   , 250-R/2);

        ellipse((250+(R/2)*3)   , 250-R, 270, 90, R/2, R/2);

        moveto((250+(R/2)*3)   , (250-R)-R/2);

        lineto(((250+(R/2)*3)-R)   , (250-R)-R/2);

        lineto(((250+(R/2)*3)-R)   , ((250-R)-R/2)-R);

        lineto((((250+(R/2)*3)-R)-R*3)   , (((250-R)-R/2)-R)+R*3);

        lineto((((250+(R/2)*3)-R)-R*3)   , ((((250-R)-R/2)-R)+R*3)+R);

        ellipse((((250+(R/2)*3)-R)-R*3)+R  , ((((250-R)-R/2)-R)+R*3)+R, 180, 360, R, R/2);

        moveto((((250+(R/2)*3)-R)-R*3)+2*R  , ((((250-R)-R/2)-R)+R*3)+R);

        lineto((((250+(R/2)*3)-R)-R*3)+2*R  , (((((250-R)-R/2)-R)+R*3)+R)-R/2);

        lineto(((((250+(R/2)*3)-R)-R*3)+2*R)+R/2  , ((((((250-R)-R/2)-R)+R*3)+R)-R/2)-R/2);

        lineto(((((250+(R/2)*3)-R)-R*3)+2*R)+R/2  , (((((((250-R)-R/2)-R)+R*3)+R)-R/2)-R/2)-R/2);

        setcolor(7);

        circle(250-R/2,250,3.5);

        waitForLeftMouseClick();

        closegraph();

        cout << "El centro de inercia esta en (" << 250-R/2 << "," << 250 << ")" << endl;

    }
    void Figura7(){
    int r,lx,ly;
    cout<<"Figura 7."<<endl;
    cout<<"Digite el valor de r:"<<endl;
    cin>>r;
    centroinerciafig7(r);
    lx=r*4+10;
    ly=r*5+20;
    initwindow(lx,ly);
    arc(r,r,0,180,r);
    arc((r*3),r,270,360,r);
    arc(((3*r)/2),((7*r)/2),270,360,((3*r)/2));
    line(0,r,((3*r)/2),((5*r)/2));
    line(((3*r)/2),((5*r)/2),50,((7*r)/2));
    line(50,((7*r)/2),((3*r)/2),((7*r)/2));
    line(((3*r)/2),((7*r)/2),((3*r)/2),(5*r));
    line((2*r),r,(4*r),r);
    line((3*r),(r*2),(3*r),((7*r)/2));
    waitForLeftMouseClick();
    closegraph();

}

void centroinerciafig7(int r){
float yt,xt,areat,xta,yta,xqm,xqma,yqm,yqma,areaqm,xqm2,xqm2a,yqm2,yqm2a,areaqm2,xr,xra,yr,yra,arear,xc,yc,areac,xca,yca,Ea,Exa,Eya,xsm,ysm,areasm,xsma,ysma,cX,cY;

//cout<<"Ingrese el valor de r: "<<endl;
//cin>>r;
yt = ((3*r)/3)/3;
xt = (r/3);
areat = ((r)*((3*r)/2))/2;
xta = (xt)*(areat);
yta = (yt)*(areat);
xqm = (4*r)/(3*3.1415);
yqm = (4*r)/(3*3.1415);
areaqm = (3.1415*(r*r))/4;
xqma = (xqm)*(areaqm);
yqma = (yqm)*(areaqm);
xqm2 = (4*((3*r)/2))/(3*3.1415);
yqm2 = (4*((3*r)/2))/(3*3.1415);
areaqm2 = (3.1415*(((3*r)/2)*((3*r)/2)))/4;
xqm2a = (xqm2)*(areaqm2);
yqm2a = (yqm2)*(areaqm2);
xr = ((3*r)/2)/2;
yr = (((3*r)/2)+r)/2;
arear = ((3*r)/2)*(((3*r)/2)+r);
xra = (xr)*(arear);
yra = (yr)*(arear);
xc = 2*r;
yc = (5*r)/2;
areac = (4*r)*(5*r);
xca = (xc)*(areac);
yca = (yc)*(areac);
xsm = 0;
ysm = (4*r)/(3*3.1415);
areasm = (3.1415*(r*r))/2;
xsma = (xsm)*(areasm);
ysma = (ysm)*(areasm);
Ea = areat+areaqm+areaqm2+arear+areasm-areac;
Exa = xta+xqma+xqm2a+xra+xsma-xca;
Eya = yta+yqma+yqm2a+yra+ysma-yca;
cX = Exa/Ea;
cY = Eya/Ea;
cout<<"El punto de inercia se encuentra en las coordenadas: "<<endl;
cout<<"x: "<<cX<<" y: "<<cY<<endl;
}

