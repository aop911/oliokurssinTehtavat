#include <iostream>

using namespace std;

int laskeNelio (int value){
    return value*value;
}
int main()
{
    int annettuLuku;
    int luvunNelio;
    cout <<"anna kokonaisluku" << endl;
    cin >> annettuLuku;
    luvunNelio = laskeNelio(annettuLuku);
    cout <<"luvun: " <<annettuLuku<< "nelio on :"<< luvunNelio<< endl;
    return 0;
}
