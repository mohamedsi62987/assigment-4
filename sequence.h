#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<iostream>
#include<string>
#include<cstring>
#include <vector>
#include <algorithm>

using namespace std ;



class sequence
{
protected:
    char* seq; //array of char

    public:
            int length; //the length of the char

        ///Tow Sequences for LCS

    char* seq1;
    char* seq2;
        sequence();
        string lcsseq;
        //void swapseq();
        //void set_vseq12(char* v1, char* v2);
        sequence(int  seq_size); //constractor to allocate the char
        sequence(const sequence&rhs); //copy constractor to save char
        friend istream& operator>> (istream& in,   sequence*seq);
        friend ostream& operator<< (ostream& out,  sequence *seq);
        ~sequence();

        ///pure virtual function
        virtual void Print()= 0; //pure virtual function

        /// friend function that will find the LCS (longest common
        /// subsequence) between 2 sequences of any type, according to
        /// polymorphism
        friend char* align(sequence* s1, sequence* s2);

};
/*protected:
    char* seq_;
    int length;
public:
    size_t len ;
    sequence()
    {
        int  seq_size;
        seq_=new char [seq_size] ;
      //  cin>>seq_;
        len = strlen(seq_);
        length=len;
        cout<<len<<endl;
        for (int i=0 ; i<len; i++)
            cout<<seq_[i];

    };*/



#endif // SEQUENCE_H
