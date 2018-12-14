#include <iostream>
#include "RNA.h"
#include "DNA.h"
#include "Protein.h"
#include "sequence.h"
#include "codonstable.h"
DNA_Type en[4]= {promoter, motif, tail, noncoding};

RNA_Type en1[4]=  {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};


using namespace std;

int main()
{
    DNA a(2,en);
    DNA r(2,en);
    RNA b(2,en1);
    RNA rn(2,en1);

    string  l;
    string k;

    cout<<"what the type of sequence you need to enter"<<endl;
    cout<<"1-DNA \n2-RNA"<<endl;
    for (int i=0; i<1000; i++)
    {
        cin>>l;
        if(l=="1"||l=="2")
            break;
        else
            cout<<"enter number correct"<<endl;
    }
    // sequence *b=new RNA();
    if (l=="1")
    {
        a.default_state();
        for (int i=0; i<1000; i++)
        {
            cout<<"enter the sequence"<<endl;
            cin>>a;
            if(a.checkdna()==1)
            {
                break;
            }
            else
                cout<<"enter sequence correct"<<endl;
        }

        cout<<"what are you need"<<endl;
        cout<<"1-convert TO RNA"<<endl;
        cout<<"2-comblement of DNA"<<endl;
        cout<<"3-compare with equal sequence "<<endl;
        cout<<"4-compare with not equal sequence "<<endl;
        cout<<"5-add sequence to another sequence"<<endl;


        for (int i=0; i<1000; i++)
        {
            cin>>k;
            if(l=="1"||l=="2"||l=="3"||l=="4"||l=="5")
                break;
            else
                cout<<"enter number correct"<<endl;
        }
        if(k=="1")
        {
            a.ConvertToRNA();
            cout<<a<<endl;
        }
        else if(k=="2")
        {
            a.BuildComplementaryStrand();
            cout<<a<<endl;

        }
        else if(k=="3")
        {
            {

                for (int i=0; i<1000; i++)
                {
                    cout<<"enter the sequence"<<endl;
                    cin>>r;
                    if(r.checkdna()==1)
                    {
                        break;
                    }
                    else
                        cout<<"enter sequence correct"<<endl;
                }
                if(a==r)
                {
                    cout<<"true "<<endl;
                }
                else
                    cout<<"false"<<endl;

            }
        }
        else if(k=="4")
        {

                for (int i=0; i<1000; i++)
                {
                    cout<<"enter the sequence"<<endl;
                    cin>>r;
                    if(r.checkdna()==1)
                    {
                        break;
                    }
                    else
                        cout<<"enter sequence correct"<<endl;
                }
                if(a!=r)
                {
                    cout<<"true "<<endl;
                }
                else
                    cout<<"false"<<endl;


        }
        else if(k=="5")
        {
           for (int i=0; i<1000; i++)
                {
                    cout<<"enter the sequence you need to add"<<endl;
                    cin>>r;
                    if(r.checkdna()==1)
                    {
                        break;
                    }
                    else
                        cout<<"enter sequence correct"<<endl;
                }
                a+r;
                cout<<endl;

        }

    }
    if (l=="2")
    {
        b.default_state();
        for (int i=0; i<1000; i++)
        {
            cout<<"enter the sequence"<<endl;
            cin>>b;
            if(b.checkrna()==1)
            {
                break;
            }
            else
                cout<<"enter sequence correct"<<endl;
        }
        cout<<"what are you need"<<endl;
        cout<<"1-convert TO protien"<<endl;
        cout<<"2-convert to DNA"<<endl;
        cout<<"3-compare with equal sequence "<<endl;
        cout<<"4-compare with not equal sequence "<<endl;
        cout<<"5-add sequence to another sequence"<<endl;
        for (int i=0; i<1000; i++)
        {
            cin>>k;
            if(l=="1"||l=="2"||l=="3"||l=="4"||l=="5")
                break;
            else
                cout<<"enter number correct"<<endl;
        }
    //if(k=="1"){}
    if(k=="2")
        {
            b.ConvertToDNA();
            cout<<b<<endl;
        }
     else if(k=="3")
        {
            {

                for (int i=0; i<1000; i++)
                {
                    cout<<"enter the sequence"<<endl;
                    cin>>rn;
                    if(b.checkrna()==1)
                    {
                        break;
                    }
                    else
                        cout<<"enter sequence correct"<<endl;
                }
                if(b==rn)
                {
                    cout<<"true "<<endl;
                }
                else
                    cout<<"false"<<endl;

            }
        }
        else if(k=="4")
        {

                for (int i=0; i<1000; i++)
                {
                    cout<<"enter the sequence"<<endl;
                    cin>>rn;
                    if(rn.checkrna()==1)
                    {
                        break;
                    }
                    else
                        cout<<"enter sequence correct"<<endl;
                }
                if(b!=rn)
                {
                    cout<<"true "<<endl;
                }
                else
                    cout<<"false"<<endl;


        }
        else if(k=="5")
        {
           for (int i=0; i<1000; i++)
                {
                    cout<<"enter the sequence you need to add"<<endl;
                    cin>>rn;
                    if(rn.checkrna()==1)
                    {
                        break;
                    }
                    else
                        cout<<"enter sequence correct"<<endl;
                }
                a+r;
                cout<<endl;

        }
    }
    main();





    //cout<<a;


    /*    sequence f;*/

//   RNA  a(en);
    // DNA (1,2);
    return 0;
};
