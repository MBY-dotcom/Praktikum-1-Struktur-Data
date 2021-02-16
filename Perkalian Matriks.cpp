#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

void matriks()

{


        int A[10][10];

        int B[10][10];

        int C[10][10];

        int bar,kolA,kolB,kolC,kol;


    

        cout<<"\t\t       PROGRAM PERKALIAN ARRAY 2 DIMENSI         "<<endl;



        cout<<"Masukkan Nilai Matriks A: "<<endl;

        cout<<"=========================="<<endl;


            for(bar=1;bar<=2;bar++)

            {

                for(kol=1;kol<=2;kol++)

                {

                    cout<<"A["<<bar<<"]["<<kol<<"] =";

                    cin>>A[bar][kol];


                }

            }

            cout<<endl<<endl;

            cout<<"Masukkan Nilai Matriks B: "<<endl;

        cout<<"=========================="<<endl;


            for(bar=1;bar<=2;bar++)

            {

                for(kol=1;kol<=2;kol++)

                {

                    cout<<"B["<<bar<<"]["<<kol<<"] =";

                    cin>>B[bar][kol];

                    C[bar][kol]=(A[bar][kol]+B[bar][kol]);


                }

            }

            system("cls");


            cout<<"Hasil = "<<endl;


                for(bar=1;bar<=2;bar++)

                {

                    cout<<"|";

                    for(kolA=1;kolA<=2;kolA++)

                    {

                        cout<<""<<A[bar][kolA];

                    }

                    cout<<"|";

                    cout<<"|";

                    for(kolB=1;kolB<=2;kolB++)

                         {

                        cout<<""<<B[bar][kolB];

                    }

                    cout<<"|";

                    cout<<"|";


                    for(kolC=1;kolC<=2;kolC++)

                         {

                        cout<<""<<C[bar][kolC];

                    }

                    cout<<"|";

                    cout<<""<<endl;

                }


    }


main()

{

    matriks();

}
