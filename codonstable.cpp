#include "codonstable.h"
#include<iostream>

using namespace std;



void codonstable::loadfile(string codonsfilename ){   /// RNA.txt
    ifstream object;

    ///cin >> (codonsfilename);
    object.open("RNA.txt");

    if(!object.is_open())
        exit(EXIT_FAILURE);

    ///char coden[4];
    ///string  aminoAcid;
    codon a;


    int i=0;

    while(object >> a.value >> a.AminoAcid ){

            ///coden = codons[64];
    codons[i].value[0] = a.value[0];  /// first index of codon value array
    codons[i].value[1] = a.value[1];  /// second index of codon value array
    codons[i].value[2] = a.value[2];  /// third index of codon value array
    codons[i].value[3] = ' ';
    codons[i].AminoAcid = a.AminoAcid;        /// null character
    i++;
            ///cout << a.value << " " << a.AminoAcid << " " << endl ;

    }


}

codon codonstable::getAminoAcid(char* value)
{
    for (int i=0 ; i<64 ; i++)
    {
        if ((value[0] == codons[i].value[0]) &&
             (value[1]==codons[i].value[1]) &&
            (value[2] == codons[i].value[2]))
        {
            return codons[i];
        }
    }
}


void codonstable::setcodon(char * value, char AminoAcid, int index)
{
    codons[index].value[0] = value[0];  /// first index of codon value array
    codons[index].value[1] = value[1];  /// second index of codon value array
    codons[index].value[2] = value[2];  /// third index of codon value array
    codons[index].value[3] = ' ';        /// null character

    codons[index].AminoAcid = AminoAcid;
}
void codonstable::co(){
for(int index= 0 ; index < 64;index ++)
	{
		cout << codons[index].value<<"--------- "<<codons[index].AminoAcid<<endl;}}

/*
/*
codon codonstable::getAminoAcid(char * value)
{

    value = new char[length];
    for(int i=0 ; i<length ; i+3){
        for(int j=0 ; j<)
    }

}


void codonstable::convirting(char * value)
{
    codon a;
    value = new char[5];
    for(int i=0 ; i<length ; i+3){
        for(int j=0 ; j<3 ; j++){
            if(value[j] == a.value)
                cout << a.AminoAcid;
        }
    }
}
*/



