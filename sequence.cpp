#include "sequence.h"

sequence::sequence(){};

sequence::sequence(int  seq_size)
{
    //seq = "GACCCCTA";
seq =new char [seq_size];

}

sequence::sequence(const sequence&rhs){

for (int i =0 ;i<length;i++){
seq[i]=rhs.seq[i];

}}
sequence::~sequence(){

delete seq;
}





/*sequence::sequence(char* sequ)
{

    this->seq = sequ;
}

void sequence::set_vseq12(char* v1="ATG", char* v2="ATGC")
{
    v1 = seq1;
    v2 = seq2;
}


///friend fun

char* align(sequence* s1, sequence* s2) ///sz1 < sz2
{

    int sz1 = 3;
    int sz2 = 4;
    s1->seq1 = new char[sz1];
    s2->seq2 = new char[sz2];
    for(int i=0 ; i<sz1 ; i++)
    {
        for(int j=0 ; j<sz2 ; j++)
        {
            if(s1->seq1[i] == s2->seq2[j])
                s1->lcsseq.push_back(s1->seq1[i]);
        }
        cout << s1->lcsseq;
    }

}


*/
