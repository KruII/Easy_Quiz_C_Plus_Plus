#include "includy.h"
using namespace std; 
int x,punkty,wylosowane[10]; 
string odpowiedz; 
string tab[15],answer[15]; 
int main(){
    srand(time(0));
    ifstream plik3 ("quiz"); 
    if (!plik3.is_open()) 
    {
        cout<<"Brak pliku 'quiz'"<<endl;  
        return 0;
    }
    for (int i = 0; i < 15; i++)
    {
        getline(plik3,tab[i]);
        getline(plik3,answer[i]);
    }
    
    for (int i = 0; i < 10; i++) 
    {
        wylosowane[i]=rand()%14;
        for (int j = 0; j<i; j++)
        {
            if (wylosowane[j] == wylosowane[i])
            {
                wylosowane[i] = rand() % 14;
                j = -1;
            }
            
    	}
        x=wylosowane[i];
        cout<<endl<<tab[x]<<endl; 
        cin>>odpowiedz; 
        if (odpowiedz==answer[x]) 
        {
            cout<<"Odpowiedź jest poprawna"; 
            punkty++; 
        }
        else
        {
            cout<<"Odpowiedź jest nie jest poprawna";
        }
    } 
    cout<<endl<<"Udało Ci się zdobyć "<<punkty<<" punktów gratulację"<<endl;
    return 0;
} 