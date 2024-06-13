#include <iostream>
#include <ctime>
using namespace std;

int* losuj(int tab[], int liczba){
    srand(time(nullptr));

    for(int i = 0; i < liczba; i++){
        tab[i] = (rand() % 6) + 1;
    }

    return tab;
}

int sumuj(int tab[], int liczba){
    int suma = 0;
    int tab_sum[7] = {0};

   for(int i=1;i<=6;i++){
                    int ilosc=0;

                    for(int x=0;x<liczba;x++){
                        if(tab[x]==i){
                            ilosc++;
                        }
                    }
                    if(ilosc>=2){
                        suma+=ilosc*i;
                    }

}
return suma;
}
int main()
{
    int liczba;
    string potwierdzenie = "t";

    do{
        cout<<"Iloma koœcmi rzucamy (3-10)?"<<endl;
           cin>>liczba;
    }while(liczba < 3 || liczba > 10);

        while(potwierdzenie == "t"){
            int arr[liczba];
            losuj(arr, liczba);
            for(int i = 0; i < liczba; i++){
                cout<< arr[i] << " ";
            }
            cout<< "" << endl;
            cout<<"Suma wyników: " << sumuj(arr, liczba)<< endl;
            cout<<"Czy chcesz rzuciæ nimi jeszcze raz? (t/n): ";
            cin>>potwierdzenie;
        }


    return 0;
}
