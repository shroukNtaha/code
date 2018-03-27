#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        int version;
        cout<<"Ahlan ya user ya habibi."<<endl;
        cout<<"0-end"<<endl;
        cout<<"1-Affine Cipher"<<endl;
        cout<<"2-Caesar Cipher"<<endl;
        cout<<"3-Atbash Cipher"<<endl;
        cout<<"4-ROT13 Cipher"<<endl;
        cout<<"5-Baconian Cipher"<<endl;
        cout<<"6-Simple Substitution Cipher"<<endl;
        cout<<"7-Polybius Square Cipher"<<endl;
        cout<<"8-Morse Code  "<<endl;
        cout<<"9-XOR Cipher "<<endl;
        cout<<"10-Rail-fence Cipher"<<endl;
        cout<<"choose 1:10 or enter 0 to end : ";
        cin>> version;
        while ((version<0)||(version>10))
        {
            cout<<"no more option"<<endl;
            cin>> version;
        }
        if(version==1)
        {
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            int q;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            cout<<"please enter your massage: ";
            string x;
            cin.ignore();
            getline(cin, x);
            int z,c,y;
            cout<<"please enter parameters: ";
            int a,b,m;
            cout<<"your first and second input should be like that(a*c)%26=1: ";
            cin>>a>>m>>b;
            while ((a*m)%26!=1)
            {
                cout<<"please enter parameters again: ";
                cin>>a>>b>>m;
            }
            if (q==1)
            {
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];
                    if (z>=97)
                    {
                        z = x[i]-97;
                        c=(((a*z)+b)%26);
                        cout<<char(c+97);
                    }
                    if(z>=65)
                    {
                        z = x[i]-65;
                        c=((a*z)+b)%26;
                        cout<<char(c+65);
                    }

                    if (z ==32)
                    {
                        cout<<char(32);
                    }
                }
            }
            if (q==2)
            {
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];
                    if (z>=97)
                    {

                        z = x[i]-97;
                        c=(m*(z-b));
                        y=fmod(c,26);
                        if (y<0)
                        {
                            y=y+26;
                        }
                        cout<<char(y+97);
                    }
                    if(z>=65)
                    {
                        z = x[i]-65;
                        c=(m*(z-b));
                        y=fmod(c,26);
                        if (y<0)
                        {
                            y=y+26;
                        }
                        cout<<char(y+65);
                    }

                    if (z ==32)
                    {
                        cout<<char(32);
                    }
                }
            }
            cout<<endl;
        }
        if (version==2)
        {
            int q;
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            string word;
            cout<<"enter massage: ";
            cin.ignore();
            getline(cin,word);
            int n ;
            cout << "enter your shift num";
            cin >>n;
            if (q==1)
            {
                for (int i = 0 ; i<word.length() ; i++)
                {
                    word[i]=toupper(word[i]);


                    int z,c;
                    z=word[i];
                    if(65<= z && z <=(90-n))
                    {
                        c= z + n ;
                        cout<< char (c);

                    }
                    if((90-n)< z && z<= 90)
                    {
                        c= (65 + (n-(91-z)));
                        cout<< char (c);

                    }


                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }

            }
            if(q==2)
            {

                for (int i = 0 ; i<word.length() ; i++)
                {
                    word[i]=toupper(word[i]);
                    int z,c;
                    z=word[i];
                    if (90>= z && z >=(65+n))
                    {
                        c= z - n;
                        cout<<char(c);
                    }
                    else if (65<= z && z<= (65+n))
                    {
                        c = 91 - (n-(z-65)) ;
                        cout<<char(c);
                    }
                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }
            }
            cout<<endl;

        }
        if (version==3)
        {
            int q;
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            string word;
            cout<<"enter massage: ";

            if (q==1)
            {
                cin.ignore();
                getline(cin,word);
                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z, c ;
                    z = word[i];
                    if (96<z && z<123)
                    {

                        c =  (123) - (z  - 97)-1  ;
                        cout <<  char (c);
                    }
                    else if (64<z && z<91)
                    {
                        c = (91) - (z-65) - 1;
                        cout <<  char (c);
                    }
                    else if(z>=32 && z<=64)
                    {
                        cout<< char(z);
                    }
                }
            }
            if(q==2)
            {
                cin.ignore();
                getline(cin,word);
                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z, c ;
                    z = word[i];
                    if (96<z && z<123)
                    {
                        c =  (123) - (z  - 97)-1  ;
                        cout <<  char (c);
                    }
                    else if (64<z && z<91)
                    {
                        c = (91) - (z-65) - 1;
                        cout <<  char (c);
                    }
                    else if(z>=32 && z<=64)
                    {
                        cout<< char(z);
                    }
                }
            }
            cout<<endl;
        }
        if(version==4)
        {
            int q;
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            string word;
            cout<<"enter massage: ";
            cin.ignore();
            getline(cin,word);
            if (q==1)
            {
                for (int i = 0 ; i<word.length() ; i++)
                {

                    int z,c;
                    z=word[i];
                    if((z>=97)  && (z<=109))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>109)  && (z<=122))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if((z>=65)  && (z<=77))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>77)  && (z<=90))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }

            }
            if(q==2)
            {

                for (int i = 0 ; i<word.length() ; i++)
                {
                    int z,c;
                    z=word[i];
                    if((z>=97)  && (z<=109))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>109)  && (z<=122))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if((z>=65)  && (z<=77))
                    {
                        c= z + 13  ;
                        cout<<  char(c);

                    }
                    if((z>77)  && (z<=90))
                    {
                        c= z - 13  ;
                        cout<<  char(c);

                    }
                    if (z==32)
                    {
                        cout<<char(32);
                    }

                }
            }
            cout<<endl;

        }
        if (version==5)
        {
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            int q;
            cin>>q;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>>q;
            }
            cout<<"please enter your massage: ";
            string x;
            cin.ignore();
            getline(cin, x);
            int z,c,y;
            if (q==1)
            {
                for (int i=0; i<x.length(); i++)
                {

                    z=x[i];
                    if (z>=65)
                    {
                        int counter=1;
                        z=z-1;
                        string w;
                        while(counter<=5)
                        {

                            if (z%2==0)
                            {
                                w="a"+w;

                            }
                            if (z%2==1)
                            {
                                w="b"+w;

                            }

                            z=z/2;
                            counter++;
                        }
                        cout<<w;
                        cout<<" ";
                    }

                }
            }
            if (q==2)
            {
                int o=0,counter=4;
                for (int i=0; i<x.length(); i++)
                {
                    z=x[i];



                    if (z!=32)
                    {
                        if  (counter>=0)
                        {
                            if ((z==65)||(z==97))
                            {
                                o=o+0;
                            }
                            if ((z==66)||(z==98))
                            {
                                o=o+pow(2,counter);
                            }
                            counter--;
                        }
                        if (counter==0)
                        {
                            cout<<char(o+65);
                            o=0;
                            counter=5;
                        }
                    }
                }
            }
            cout<<endl;
        }
        if (version==6)
        {
            int q;
            string key,message,message2;
            char full[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin >> q ;
            while(q !=1 && q!=2)
            {
                cout << "Enter a correct number: ";
                cin >> q;
            }
            cout << "Enter the key: ";
            cin >> key;
            vector<char>view;
            for(int i=0 ; i<5 ; i++)
                view.push_back(key[i]);
            for(int i =0; i<26 ; i++)
            {
                if(full[i]!=key[0] && full[i]!=key[1] && full[i]!=key[2] && full[i]!=key[3] && full[i]!=key[4])
                    view.push_back(full[i]);
            }
            if(q==1)
            {
                cout << "Enter the message to cipher: ";
                cin.get();
                getline(cin,message);
                char cipher[message.length()];
                for(int i=0 ; i<message.length(); i++)
                {
                    for (int j=0 ; j<26 ; j++)
                    {
                        if(message[i]==full[j])
                            cipher[i]=view[j];
                        else if (message[i]==' ')
                            cipher[i]=' ';
                    }
                }
                for (int i=0 ; i<message.length() ; i++)
                    cout << cipher[i];
                cout << endl;
            }
            else if (q==2)
            {
                cout << "Enter the message to decipher: ";
                cin.get();
                getline(cin,message2);
                char text[message2.length()];
                for(int i=0 ; i<message2.length() ; i++)
                {
                    for (int j=0 ; j<26; j++)
                    {
                        if (message2[i]==view[j])
                            text[i]=full[j];
                        else if (message2[i]==' ')
                            text[i]=' ';
                    }
                }
                for (int i=0 ; i<message2.length() ; i++)
                    cout << text[i];
            }
        }
        if (version==7)
        {
            string msg,x ;
            int q,key ;
            vector<int> v ;
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin >> q ;
            while(q !=1 && q !=2)
            {
                cout << "Enter a correct number: ";
                cin >> q;
            }
            cout << "Enter the key you want to cipher :";
            for (int i=0 ; i<5 ; ++i)
            {
                cin >> key;
                v.push_back(key);
            }
            if(q == 1)
            {
                cout << "Enter the message you want to cipher : ";
                cin.get();
                getline(cin, msg );
                int x[msg.length()];
                for ( int i=0 ; i < msg.length(); ++i )
                {
                    if      (msg[i]=='a')
                        x[i]=v[0]*10+v[0];
                    else if (msg[i]=='b')
                        x[i]=v[0]*10+v[1];
                    else if (msg[i]=='c')
                        x[i]=v[0]*10+v[2];
                    else if (msg[i]=='d')
                        x[i]=v[0]*10+v[3];
                    else if (msg[i]=='e')
                        x[i]=v[0]*10+v[4];
                    else if (msg[i]=='f')
                        x[i]=v[1]*10+v[0];
                    else if (msg[i]=='g')
                        x[i]=v[1]*10+v[1];
                    else if (msg[i]=='h')
                        x[i]=v[1]*10+v[2];
                    else if (msg[i]=='i')
                        x[i]=v[1]*10+v[3];
                    else if (msg[i]=='j')
                        x[i]=v[1]*10+v[4];
                    else if (msg[i]=='k')
                        x[i]=v[2]*10+v[0];
                    else if (msg[i]=='l')
                        x[i]=v[2]*10+v[1];
                    else if (msg[i]=='m')
                        x[i]=v[2]*10+v[2];
                    else if (msg[i]=='n')
                        x[i]=v[2]*10+v[3];
                    else if (msg[i]=='o')
                        x[i]=v[2]*10+v[4];
                    else if (msg[i]=='p')
                        x[i]=v[3]*10+v[0];
                    else if (msg[i]=='q')
                        x[i]=v[3]*10+v[1];
                    else if (msg[i]=='r')
                        x[i]=v[3]*10+v[2];
                    else if (msg[i]=='s')
                        x[i]=v[3]*10+v[3];
                    else if (msg[i]=='t')
                        x[i]=v[3]*10+v[4];
                    else if (msg[i]=='u')
                        x[i]=v[4]*10+v[0];
                    else if (msg[i]=='v')
                        x[i]=v[4]*10+v[1];
                    else if (msg[i]=='w')
                        x[i]=v[4]*10+v[2];
                    else if (msg[i]=='x')
                        x[i]=v[4]*10+v[3];
                    else if (msg[i]=='y')
                        x[i]=v[4]*10+v[4];
                    else if (msg[i]=='z')
                        x[i]=99;
                    else if (msg[i]==' ')
                        x[i]=88;
                }
                cout << endl << "cipher : ";
                for ( int i=0 ; i < msg.length(); ++i )
                    cout << x[i];
                cout << endl << endl;
            }

            else if(q==2)
            {
                cout << "Enter the message you want to decipher : ";
                cin.get();
                getline(cin,x);
                cout << endl << "decipher : ";
                for ( int i=0 ; i < x.length(); i+=2 )
                {
                    if      (x[i]-'0'==v[0] && x[i+1]-'0'==v[0])
                        cout <<"a";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[1])
                        cout <<"b";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[2])
                        cout <<"c";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[3])
                        cout <<"d";
                    else if (x[i]-'0'==v[0] && x[i+1]-'0'==v[4])
                        cout <<"e";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[0])
                        cout <<"f";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[1])
                        cout <<"g";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[2])
                        cout <<"h";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[3])
                        cout <<"i";
                    else if (x[i]-'0'==v[1] && x[i+1]-'0'==v[4])
                        cout <<"j";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[0])
                        cout <<"k";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[1])
                        cout <<"l";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[2])
                        cout <<"m";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[3])
                        cout <<"n";
                    else if (x[i]-'0'==v[2] && x[i+1]-'0'==v[4])
                        cout <<"o";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[0])
                        cout <<"p";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[1])
                        cout <<"q";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[2])
                        cout <<"r";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[3])
                        cout <<"s";
                    else if (x[i]-'0'==v[3] && x[i+1]-'0'==v[4])
                        cout <<"t";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[0])
                        cout <<"u";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[1])
                        cout <<"v";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[2])
                        cout <<"w";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[3])
                        cout <<"x";
                    else if (x[i]-'0'==v[4] && x[i+1]-'0'==v[4])
                        cout <<"y";
                    else if (x[i]=='9' && x[i+1]=='9')
                        cout <<"z";
                    else if (x[i]=='8' && x[i+1]=='8')
                        cout <<" ";
                }
                cout<<endl << endl;
            }

        }
        if (version==8)
        {
            string x,mors,m;
            int y,q;
            string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "\t" };
            char eng[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ' };
            char eng2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin>>q;
            while (q!=1 && q!=2)
            {
                cout<<"No more options"<<endl;
                cin>>q;
            }
            if (q==1)
            {

                cout<<"please enter your sentence  ";
                cin.ignore();
                getline(cin,x);
                y=x.size();

                for (int i = 0; i<y; ++i)
                {
                    for(int k=0; k<=26; ++k)
                    {
                        if ( x[i] == eng[k] || x[i] == eng2[k] )
                        {

                            mors+= " "+morse[k];
                        }

                    }
                }
                cout<<mors<<endl;
            }
            else if (q==2)
            {
                cout<<"please enter your sentence:";
                cin.ignore();
                getline(cin,x);
                y=x.size();
                for (int i =0; i<y; ++i)
                {
                    if (x[i]==' ')
                    {
                        cout<<" ";
                    }
                    else if (x[i]!= ' ')
                    {
                        m+=x[i];
                        if(x[i+1]==' ' || (i+1)==(y))
                        {
                            for( int n=0; n<26; ++n)
                            {
                                if(morse[n]==m)
                                {
                                    cout<< eng[n];
                                    m="";
                                }
                            }
                        }
                    }
                }
                cout <<m<<endl;
            }
        }
        if (version==9)
        {
            string toBinary(int n);
            int xor_f (int num1, int num2);
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            int q ;
            cin>> q ;
            while ((q!=1)&&(q!=2))
            {
                cout<<"no more option"<<endl;
                cin>> q ;
            }
            if (q==1)
            {
                int k, c, cipher_d ;
                char cipher_ascii;
                char key;
                cout<<"Enter The secret key,please: ";
                cin>>  key;
                string m ;
                cout<<"Enter The massage , please : " ;
                cin>> m ;
                int l=m.length() ;
                cout <<"hexa: ";
                for (int i=0; i<l; i++)
                {
                    k=key ;
                    c=m[i] ;
                    cipher_d = k^c ;
                    cout << hex<< cipher_d ;
                }
                cout <<endl << "Cipher text: ";
                for (int i=0; i<l; i++)
                {
                    k=key ;
                    c=m[i] ;
                    cipher_d = k^c ;
                    cipher_ascii = cipher_d ;
                    cout<< cipher_ascii ;
                }
                cout << endl;
            }
            else if (q==2)
            {
                char key,word ;
                int k,w;
                cout <<"Enter The key character: "<<endl;
                cin>> key ;
                k=key;
                cout<< "Enter The Cipher message as: " <<endl;
                cout<< "1- hexa number      2- Cipher text " <<endl ;
                int choice2 ;
                cin>> choice2 ;
                if (choice2 == 1)
                {
                    string hexa_num;
                    cout<<"Enter The hexa num: "<<endl;
                    cin >>hexa_num ;
                    int l=hexa_num.length() ;
                    for (int c=0; c<=l; c=c+2)
                    {
                        string hexa_digit ;
                        hexa_digit=hexa_digit+hexa_num[c];
                        hexa_digit=hexa_digit+hexa_num[c+1];
                        int x;
                        stringstream ss;
                        ss << hex << hexa_digit;
                        ss >> x;
                        hexa_digit ="";
                        w=k^x;
                        word = w ;
                        cout <<word ;
                    }

                    cout<<endl;
                }

                else if (choice2==2)
                {
                    string cipher ;


                    cout << "Enter The cipher massage: ";
                    cin >> cipher ;
                    int l=cipher.length() ;
                    for (int c=0; c<l; c=c+1)
                    {
                        char cha_cipher=cipher[c];
                        int c_c = cha_cipher;
                        w=k^c_c;
                        word = w ;
                        cout << word;
                    }
                    cout<<endl;


                }

            }
        }
        if (version==10)
        {
            int q;
            cout<<"Ahlan ya user ya habibi."<<endl;
            cout<<"What do you like to do today?"<<endl;
            cout<<"1- Cipher a message"<<endl;
            cout<<"2- Decipher a message"<<endl;
            cin>>q;
            if(q!=1 && q!=2)
            {
                cout<<"enter only 1 or 2 : ";
                cin >> q ;
            }
            else if(q==1)
            {
                string mas1, mas2;
                int key, i, j, k=-1, row=0, col=0;
                cout<<"enter your message : ";
                cin.ignore();
                getline(cin,mas1);
                cout<<"enter key : ";
                cin>>key;
                for(int i=0 ; i<=mas1.length() ; i++)
                {
                    if(mas1[i]!=' ')
                    {
                        mas2=mas2+mas1[i];
                    }
                }
                int len=mas2.size();
                char mat[key][len];
                for(i=0; i<key; i++)
                {
                    for(j=0; j<len; j++)
                        mat[i][j]='-';
                }
                for(i=0; i<len; i++)
                {
                    mat[row][col]=mas2[i];
                    if(row==0||row==key-1)
                    {
                        k=k*(-1);
                    }
                    row=row+k;
                    col++;
                }
                for(i=0; i<key; i++)
                {
                    for(j=0; j<len; j++)
                    {
                        cout<<mat[i][j];
                    }
                    cout<<endl;
                }

                cout<<"\nencrypted message : ";
                for(i=0; i<key; i++)
                {
                    for(j=0; j<len; j++)
                    {
                        if(mat[i][j] != '-')
                        {
                            cout<<mat[i][j];
                        }
                    }
                }
                cout<<endl;
            }
            else if(q==2)
            {
                string mas;
                int key;
                int i,j,k=-1,row=0,col=0,s=0;
                cout<<"enter your encrypted message :";
                cin.ignore();
                getline(cin,mas);
                cout<<"enter key : ";
                cin>>key;
                int len=mas.size();
                char mat[key][len];
                for(i=0; i<key; i++)
                    for(j=0; j<len; j++)
                        mat[i][j]='-';
                for(i=0; i<len; i++)
                {
                    mat[row][col]='$';
                    if(row==0||row==key-1)
                    {
                        k=k*(-1);
                    }
                    row=row+k;
                    col++;
                }
                for(i=0; i<key; i++)
                {
                    for(j=0; j<len; j++)
                    {
                        if(mat[i][j]=='$')
                        {
                            mat[i][j]=mas[s];
                            s++;
                        }
                    }
                }
                row = col = 0;
                k = -1;
                cout<<"\ndecrypted message is : ";
                for(i=0; i<len; i++)
                {
                    cout<<mat[row][col++];
                    if(row==0||row==key-1)
                        k=k*(-1);
                    row=row+k;
                }
                cout<<endl;
            }
        }
        if(version==0)
        {
            break;

        }
        cout<<endl;
        int p;
        cout<<"1- again"<<endl;
        cout<<"2- End"<<endl;
        cin>>p;
        while ((p!=1)&&(p!=2))
        {
            cout<<"no more option"<<endl;
            cin>>p;
        }
        if (p==2)
        {
            exit(0);
        }
    }
}
