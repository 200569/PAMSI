// Autor Przemyslaw Jordanek - PAMSI quicksort
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <list>
#include <math.h>
#include <fstream>
#include <ctime>
#include <iomanip>

using namespace std;

//============================= Pivot == MEDIANA ==================================
void QuickSort(int tab[], int left, int right) { //jako element do porównania wybierana jest mediana

      int i = left, j = right;                     // elem najbardzie po lewej / prawej
      int tmp;                                      // zmienna pomocnicza
      int pivot = tab[(left + right) / 2]; //pivot jest elementem srodkowym

      while (i <= j) {                      // dopóki i < j
            while (tab[i] < pivot)          // pêtla trwa do czasu gdy pivot bêdzie mniejszy od elem tab[i]
                  i++;
            while (tab[j] > pivot)          // w druga strone
                  j--;
            if (i <= j) {                       // kiedy dojdzie do miejsca w ktorym i > pivot i j < pivot
                  tmp = tab[i];
                  tab[i] = tab[j];
                  tab[j] = tmp;
                  i++;
                  j--;
            }
      }
      if (left < j)                                 // dziel i zwyciezaj ( po przejsciu petli j jest lo lewej od pivota
            QuickSort(tab, left, j);
      if (i < right)
            QuickSort(tab, i, right);
}

//================= PIVOT == elem najbardziej z lewej ==============================
void QuickSort_lewa(int t[], int l, int p) //jako element porównania wybiera pierwszy od lewej
{
	if ( l < p )
    {

         int m=l;
         for ( int i=l+1; i <= p; i++ )
         {
              if ( t[i] < t[l] )                // jesli elem po pivocie jest < od niego to zamien
              {
                   int temp = t[++m];
                   t[m]=t[i];
                   t[i]=temp;                   // elem uporzadkowane wzgl pivota
              }
         }
          int temp=t[l];
          t[l]=t[m];
          t[m]=temp;

              QuickSort_lewa(t,l,m-1);
              QuickSort_lewa(t,m+1,p);
    }

}

// =============================== FUNKCJE DO OBSLUGI ALGORYTMU =========
void wypelnij_tab_rand(int tab[],int size)      // wypelnienie randomowe
{
	for (int i=0;i<size;i++)
	{
		tab[i]=rand();
	}
}

void wypelnij_tab_malejaco(int tab[],int size)
{
	for (int i=0;i<size;i++)
	{
	 tab[i] = size*3 - 2*i;
	}
}

void wypelnij_tab_rosnaco(int tab[],int size)
{
	for (int i=0;i<size;i++)
	{
		tab[i] *= 2 + 2 ;
	}
}

void wyswietl_tab(int tab[],int size)
{
	for (int i=0;i<size;i++)
	{
	cout<<tab[i]<<" , ";
	if(!(i%10))                 // co 10 cyfr przechodzi do nast linii
        cout << endl;
	}
}

void sprawdz_sort(int tab[],unsigned int size)
{
	for(unsigned int i=0;i<(size-1);i++)
	{
		if (tab[i+1]<tab[i])
		{
			cout<<"\n\nTablica nie jest posortowana rosnaco!!!\n\n";
			break;
		}
	}
}

// ===================== FUNKCJA DO OBSLUGI ALGORYTMOW +pomiar czasu =====
void sortuj(int tablica[], unsigned int n, int wyb, int lp)
{
	ofstream plik;
	clock_t StartTime, StopTime;        // do pomiaru czasu
	double zegar;                                   // do przechowywania czasu

	switch (wyb)
	{
	case 1:
        plik.open("QickSort_random.txt",ios::out);         // tworze nowy plik
        cout << endl;

		for (int li=0; li<lp;li++)
		{
			wypelnij_tab_rand(tablica,n);
			//wyswietl_tab(tablica,n);

			//cout << "Rozpoczynam pomiar czasu\n";
			StartTime= clock();
			QuickSort(tablica,0,n-1);
			sprawdz_sort(tablica,n);
            StopTime=clock();
            //wyswietl_tab(tablica,n);
        zegar =(double)(StopTime-StartTime)/CLOCKS_PER_SEC;
	cout << endl << "Czas wynosi: " << zegar;
        plik<<dec<<zegar<<" <- czas dla randomowej."<<endl;
		}
		plik.close();
		break;

	case 2:
		plik.open("QickSort_malejaco.txt",ios::out);         // tworze nowy plik

		for (int li=0; li<lp;li++)
		{
			wypelnij_tab_malejaco(tablica,n);
			//wyswietl_tab(tablica,n);
			StartTime= clock();
			QuickSort(tablica,0,n-1);
            		sprawdz_sort(tablica,n);
            		StopTime=clock();
            		//wyswietl_tab(tablica,n);
        zegar =(double)(StopTime-StartTime)/CLOCKS_PER_SEC;
	cout << endl << "Czas wynosi: " << setprecision(5) << zegar;
        plik<<dec<<zegar<<" <- czas dla malejacej."<<endl;
		}
		plik.close();
		break;

	case 3:
        plik.open("QickSort_rosnaco.txt",ios::out);         // tworze nowy plik

		for (int li=0; li<lp;li++)
		{
			wypelnij_tab_rosnaco(tablica,n);
			//wyswietl_tab(tablica,n);
			StartTime= clock();
			QuickSort(tablica,0,n-1);
           		sprawdz_sort(tablica,n);
            		StopTime=clock();
            		//wyswietl_tab(tablica,n);
        zegar =(double)(StopTime-StartTime)/CLOCKS_PER_SEC;
	cout << endl << "Czas wynosi: " << setprecision(5) << zegar;
        plik<<dec<<zegar<<" <- czas dla rosnacej."<<endl;

		}
		plik.close();
		break;

	case 4:
		plik.open("QickSort_left_random.txt",ios::out);

		for (int li=0; li<lp;li++)
		{
			wypelnij_tab_rand(tablica,n);
            		//wyswietl_tab(tablica,n);
            		StartTime= clock();
			QuickSort_lewa(tablica,0,n-1);
			sprawdz_sort(tablica,n);
			StopTime=clock();
			//wyswietl_tab(tablica,n);

        zegar =(double)(StopTime-StartTime)/CLOCKS_PER_SEC;
	cout << endl << "Czas wynosi: " << setprecision(5) << zegar;
        plik<<dec<<zegar<<" <- czas dla randomowej."<<endl;
		}
		plik.close();
		break;

    case 5:
		plik.open("QickSort_left_malejaco.txt",ios::out);

		for (int li=0; li<lp;li++)
		{
			wypelnij_tab_rand(tablica,n);
         		//wyswietl_tab(tablica,n);
			StartTime= clock();
			QuickSort_lewa(tablica,0,n-1);
			sprawdz_sort(tablica,n);
			StopTime=clock();
			//wyswietl_tab(tablica,n);

        zegar =(double)(StopTime-StartTime)/CLOCKS_PER_SEC;
	cout << endl << "Czas wynosi: " << setprecision(5) << zegar;
        plik<<dec<<zegar<<" <- czas dla malejacej."<<endl;
		}
		plik.close();
		break;

    case 6:
		plik.open("QickSort_left_rosnaco.txt",ios::out);

		for (int li=0; li<lp;li++)
		{
			wypelnij_tab_rosnaco(tablica,n);
            		//wyswietl_tab(tablica,n);
            		StartTime= clock();
			QuickSort_lewa(tablica,0,n-1);
			sprawdz_sort(tablica,n);
			StopTime=clock();
			//wyswietl_tab(tablica,n);

        zegar =(double)(StopTime-StartTime)/CLOCKS_PER_SEC;
	cout << endl << "Czas wynosi: " << setprecision(5) << zegar;
        plik<<dec<<zegar<<" <- czas dla rosnacej."<<endl;

		}
		plik.close();
		break;

		default:;
		break;
	}
}

//==============================================================================
// PROGRAM GLOWNY
//==============================================================================

int main()
{
	unsigned int n=0;       //rozmiar tablicy
	int ch;                         //wybor algorytmu
	int lp;                          // liczba sortowan
	int *tablica;
	ofstream plik;

	do
	{
		cout << "Witam w prorgamie!\n"
		    <<"Wybierz rodzaj algorytmu sortowania - QUICK SORT;\n"
			<<"1. Quick Sort(pivot = mediana )- tablica randomowa\n"
			<<"2. Quick Sort(pivot = mediana )- tablica malejaca\n"
            <<"3. Quick Sort(pivot = mediana )- tablica rosnaca\n"
			<<"4. Quick Sort(pivot z lewej)- tablica randomowa\n"
			<<"5. Quick Sort(pivot z lewej)- tablica malejaca\n"
			<<"6. Quick Sort(pivot z lewej)- tablica rosnaca\n"
			<<"0. exit\n";
		cin>>ch;

		if(ch!=0){
			cout<<"\nPodaj rozmiar tablicy, wyniki zapisane zostana w pliku.\n";
			cin>>n;
			cout<<"\nPodaj liczbe sortowan dla kazdej opcji;\n";
			cin>>lp;

			tablica=new int[n];
			sortuj(tablica,n,ch,lp); //wysylam adres pierwszego elem tablicy/ rozmiar/ wybor algor/ liczbe sortowac
			delete [] tablica;
			cout<<"\nPlik zostal utworzony :)\n";
		}
	}while(ch!=0);

	return 0;
}
