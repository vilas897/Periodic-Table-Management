#include<iostream.h> 
 #include<stdio.h> 
 #include<conio.h>  
 #include<fstream.h> 
 #include<iomanip.h> 
 #include<string.h> 
 #include<process.h> 
 
 class element                  //Declaration of class element 
 { 
   int atomic_no; 
   float atomic_mass, elec_neg ; 
   char name[15], symbol[3], elec_config[50]; 
 
   public: 
 
   void input(void); 
   void output(void); 
   int get_atm_no(void); 
   int get_name(char str[]); 
   int get_sym(char str[]); 
 };                                //End of class declaration 
 
   void element::input()      //Function to input details 
 { 
   cout<<endl<<"\tName: "; 
   gets(name); 
   cout<<endl<<"\tAtomic Number: "; 
   cin>>atomic_no; 
   cout<<endl<<"\tAtomic Mass: "; 
   cin>>atomic_mass; 
   cout<<endl<<"\tSymbol: "; 
   gets(symbol); 
   cout<<endl<<"\tElectronic Configuration: "; 
   gets(elec_config); 
   cout<<endl<<"\tElectronegativity: "; 
   cin>>elec_neg; 
 
 }
 
 void element::output()                   //Function to output details 
 { 
   clrscr(); 
   gotoxy(25,7); 
   cout<<"Details of the element:"; 
   gotoxy(15,9); 
   cout<<"Name: "<<name; 
   gotoxy(15,11); 
   cout<<"Atomic Number: "<<atomic_no; 
   gotoxy(15,13); 
   cout<<"Atomic Mass: "<<atomic_mass; 
   gotoxy(15,15); 
   cout<<"Symbol: "<<symbol; 
   gotoxy(15,17); 
   cout<<"Electronic Configuration: "; 
   gotoxy(15,19); 
   cout<<elec_config; 
   gotoxy(15,21); 
   cout<<"Electronegativity: "<<elec_neg; 
   gotoxy(10,5); 
 
   for(int j=0; j<50; j++) 
 
   { 
 cout<<"*"; 
   } 
 
   for(int i=0; i<20; i++) 
   { 
 gotoxy(10,i+5); 
 cout<<"*"; 
 gotoxy(60,i+5); 
 cout<<"*"; 
   } 
   gotoxy(10,24); 

 
   for(i=0;i<50; i++) 
   { 
 	cout<<"*"; 
   } 
 } 
 
 
 int element::get_atm_no()             /*Function to return 
     the value of atomic number*/ 
 { 
 return(atomic_no); 
 } 
 
 int element::get_name(char str[])      /*Function to compare the 
         name with the argument*/ 
   {  int r; 
 
      if(strcmpi(name,str)==0) 
 { 
    r=0; 
 } 
      else 
 { 
    r=1; 
 }  
 
   return r; 
  } 
 
 int element::get_sym(char str[])    /*Function to compare the symbol 
           with the argument*/ 
  { 
   int r; 
   if(strcmpi(symbol,str)==0) 
   { 
 	r=0; 
   } 
 
   else 
   { 
 	r=1; 
   }  
   return r; 
  } 
 
 void display()                                //Main Page 
  { 
   clrscr(); 
 
   gotoxy(30,2); 
   cout<<"THE PERIODIC TABLE"; 
   gotoxy(13,5);  cout<<"H"; 
   gotoxy(13,7);  cout<<"Li"; 
   gotoxy(13,9);  cout<<"Na"; 
   gotoxy(13,11); cout<<"K"; 
   gotoxy(13,13); cout<<"Rb"; 
   gotoxy(13,15); cout<<"Cs"; 
   gotoxy(13,17); cout<<"Fr"; 
   gotoxy(16,7);  cout<<"Be"; 
   gotoxy(16,9);  cout<<"Mg"; 
   gotoxy(16,11); cout<<"Ca"; 
   gotoxy(16,13); cout<<"Sr"; 
   gotoxy(16,15); cout<<"Ba"; 
   gotoxy(16,17); cout<<"Ra"; 
   gotoxy(19,11); cout<<"Sc"; 
   gotoxy(19,13); cout<<"Y"; 
   gotoxy(19,15); cout<<"La"; 
   gotoxy(19,17); cout<<"Ac"; 
   gotoxy(22,11); cout<<"Ti"; 
   gotoxy(22,13); cout<<"Zr"; 
   gotoxy(22,15); cout<<"Hf"; 
   gotoxy(22,17); cout<<"Rf"; 
   gotoxy(25,11); cout<<"V"; 
   gotoxy(25,13); cout<<"Nb"; 
   gotoxy(25,15); cout<<"Ta"; 
   gotoxy(25,17); cout<<"Ha"; 
   gotoxy(28,11); cout<<"Cr"; 
   gotoxy(28,13); cout<<"Mo"; 
   gotoxy(28,15); cout<<"W"; 
   gotoxy(28,17); cout<<"Un"; 
   gotoxy(31,11); cout<<"Mn"; 
   gotoxy(31,13); cout<<"Tc"; 
   gotoxy(31,15); cout<<"Re"; 
   gotoxy(31,17); cout<<"Ns"; 
   gotoxy(34,11); cout<<"Fe"; 
   gotoxy(34,13); cout<<"Ru"; 
   gotoxy(34,15); cout<<"Os"; 
   gotoxy(34,17); cout<<"Hs"; 
   gotoxy(37,11); cout<<"Co"; 
   gotoxy(37,13); cout<<"Rh"; 
   gotoxy(37,15); cout<<"Ir"; 
   gotoxy(37,17); cout<<"Mt"; 
   gotoxy(40,11); cout<<"Ni"; 
   gotoxy(40,13); cout<<"Pd"; 
   gotoxy(40,15); cout<<"Pt"; 
   gotoxy(40,17); cout<<"Uun"; 
   gotoxy(43,11); cout<<"Cu"; 
   gotoxy(43,13); cout<<"Ag"; 
   gotoxy(43,15); cout<<"Au"; 
   gotoxy(46,11); cout<<"Zn"; 
   gotoxy(46,13); cout<<"Cd"; 
   gotoxy(46,15); cout<<"Hg"; 
   gotoxy(49,7);  cout<<"B"; 
   gotoxy(49,9);  cout<<"Al"; 
   gotoxy(49,11); cout<<"Ga"; 
   gotoxy(49,13); cout<<"In"; 
   gotoxy(49,15); cout<<"Tl"; 
   gotoxy(52,7);  cout<<"C"; 
   gotoxy(52,9);  cout<<"Si"; 
   gotoxy(52,11); cout<<"Ge"; 
   gotoxy(52,13); cout<<"Sn"; 
   gotoxy(52,15); cout<<"Pb"; 
   gotoxy(55,7);  cout<<"N"; 
   gotoxy(55,9);  cout<<"P"; 
   gotoxy(55,11); cout<<"As"; 
   gotoxy(55,13); cout<<"Sb"; 
   gotoxy(55,15); cout<<"Bi"; 
   gotoxy(58,7);  cout<<"O"; 
   gotoxy(58,9);  cout<<"S"; 
   gotoxy(58,11); cout<<"Se"; 
   gotoxy(58,13); cout<<"Te"; 
   gotoxy(58,15); cout<<"Po"; 
   gotoxy(61,7);  cout<<"F"; 
   gotoxy(61,9);  cout<<"Cl"; 
   gotoxy(61,11); cout<<"Br"; 
   gotoxy(61,13); cout<<"I"; 
   gotoxy(61,15); cout<<"At"; 
   gotoxy(64,5);  cout<<"He"; 
   gotoxy(64,7);  cout<<"Ne"; 
   gotoxy(64,9);  cout<<"Ar"; 
   gotoxy(64,11); cout<<"Kr"; 
   gotoxy(64,13); cout<<"Xe"; 
   gotoxy(64,15); cout<<"Rn"; 
   gotoxy(13,21); cout<<"Lanthanides"; 
   gotoxy(25,21); cout<<"Ce"; 
   gotoxy(28,21); cout<<"Pr"; 
   gotoxy(31,21); cout<<"Nd"; 
   gotoxy(34,21); cout<<"Pm"; 
   gotoxy(37,21); cout<<"Sm"; 
   gotoxy(40,21); cout<<"Eu"; 
   gotoxy(43,21); cout<<"Gd"; 
   gotoxy(46,21); cout<<"Tb"; 
   gotoxy(49,21); cout<<"Dy"; 
   gotoxy(52,21); cout<<"Ho"; 
   gotoxy(55,21); cout<<"Er"; 
   gotoxy(58,21); cout<<"Tm"; 
   gotoxy(61,21); cout<<"Yb"; 
   gotoxy(64,21); cout<<"Lu"; 
   gotoxy(13,23); cout<<"Actinides"; 
   gotoxy(25,23); cout<<"Th"; 
   gotoxy(28,23); cout<<"Pa"; 
   gotoxy(31,23); cout<<"U"; 
   gotoxy(34,23); cout<<"Np"; 
   gotoxy(37,23); cout<<"Pu"; 
   gotoxy(40,23); cout<<"Am"; 
   gotoxy(43,23); cout<<"Cm"; 
   gotoxy(46,23); cout<<"Bk"; 
   gotoxy(49,23); cout<<"Cf"; 
   gotoxy(52,23); cout<<"Ea"; 
   gotoxy(55,23); cout<<"Fm"; 
   gotoxy(58,23); cout<<"Md"; 
   gotoxy(61,23); cout<<"No"; 
   gotoxy(64,23); cout<<"Lr"; 
 
   gotoxy(11,30); 
   cout<<"MAIN MENU"; 
   cout<<endl; 
 
   cout<<endl<<"\t1.Insert a new element"; 
   cout<<endl<<"\t2.Modify a new element"; 
   cout<<endl<<"\t3.Search for an element"; 
   cout<<endl<<"\t4.Exit"; 
   cout<<endl<<endl<<"\tPlease select an option: "; 
 
   int opt; 
   cin>>opt; 
 
   void insert(void); 
   void modify(void); 
   void search(void); 
 
   switch(opt) 
   { 
    case 1:  insert(); 
      break; 
 
    case 2:  modify(); 
      break; 

 
    case 3:  search(); 
      break; 
 
    case 4:  exit(0); 
      break; 
 
    default: cout<<endl<<"\tInvalid option"; 
      getch(); 
      display(); 
      break; 
    } 
 }
 
 void insert()              //Function to insert data 
 { 
   clrscr(); 
   ofstream fout; 
   element e; 
   fout.open("element.dat",ios::in|ios::app); 
   char ans='y'; 
 
   while(ans=='y') 
   { 
      cout<<endl<<"\tEnter the details of the element to be inserted: "; 
      cout<<endl<<endl; 
      e.input(); 
      fout.write((char*)&e, sizeof(e)); 
      cout<<endl<<endl<<"\tThe element has been added"; 
      cout<<endl<<"\tDo you wish to add more elements? (y/n) . . . "; 
      cin>>ans; 
   } 
 
 fout.close(); 
 display(); 
 } 
 
 void modify()                 //Function to modify data 
 { 
  clrscr(); 
  element e; 
  fstream fio("element.dat", ios::in|ios::out|ios::binary); 
  int at_no; long pos; char found='f'; 
  cout<<endl<<"\tEnter the atomic number of the element to be modified: "; 
  cin>>at_no; 
 
   while(!fio.eof()&&found=='f') 
   { 
    pos= fio.tellg(); 
    fio.read((char*)&e,sizeof(e)); 
 if(e.get_atm_no()==at_no) 
 { 
  cout<<endl<<"\tEnter the new details of the element: "; 
  e.input(); 
  fio.seekp(pos); 
  fio.write((char*)&e,sizeof(e)); 
  found='t'; 
 }
   } 
 
  fio.close(); 
  if(found=='f') 
  cout<<endl<<endl<<"\tElement not found!"; 
  cout<<endl<<endl<<"\tPress any key to go to the main menu. . . "; 
  getch(); 
  void display(void); 
  display(); 
 } 
 
  void search()     //Function for the search page 
 { 
   clrscr(); 
   gotoxy(20,2); 
   cout<<"SEARCH: "; 
   gotoxy(19,3); 
 
   for(int i = 0; i<9 ; i++) 
   { 
 cout<<"="; 
   } 
    gotoxy(1,7); 
    cout<<"\tSearch by? :"; 
    cout<<endl<<"\t1. Element Name"; 
    cout<<endl<<"\t2. Atomic Number"; 
    cout<<endl<<"\t3. Element Symbol"; 
    cout<<endl<<endl<<"\tEnter an option: "; 
    int opt,Num,found=0; char str[15]; 
    cin>>opt; 
    ifstream fin; 
    element e; 
    fin.open("element.dat",ios::in); 
 
    switch(opt) 
   { 
    case 1: 
    cout<<endl<<endl<<"\tEnter the name of the element to be searched: "; 
    gets(str); 
 
  while(!fin.eof()&&found==0) 
 { 
  fin.read((char*)&e, sizeof(e)); 
   if(e.get_name(str)==0) 
   { 
   found=1; 
   } 
 } 
    break; 
 
    case 2: 
    cout<<endl<<endl; 
    cout<<"\tEnter the atomic number of the element to be searched: "; 
    cin>>Num; 
 
 while(!fin.eof()&&found==0) 
 { 
 fin.read((char*)&e, sizeof(e)); 
 
 if(e.get_atm_no()==Num) 
 { 
  found=1; 
 } 
 
 }
     break; 
 
     case 3: 
     cout<<endl<<endl<<"\tEnter the symbol of the element to be searched: "; 
     gets(str); 
 
 while(!fin.eof()&&found==0) 
 { 
 fin.read((char*)&e, sizeof(e)); 

 
 if(e.get_sym(str)==0) 
 { 
  found=1; 
 }
 
 } 
 
    break; 
 
    default: 
    cout<<endl<<endl<<"\Invalid Choice"; 
    break; 
    } 
 
    if(opt==1||opt==2||opt==3) 
    { 
     cout<<endl<<endl<<endl<<setw(25)<<"SEARCH RESULTS"; 
 if(found==1) 
 { 
 cout<<endl<<endl<<"\tElement found! "; 
 cout<<endl<<endl<<endl<<"\tPress any key to display the element . . . . ."; 
 getch(); 
 clrscr(); 
 e.output(); 
 cout<<endl<<endl<<endl<<endl; 
 cout<<"\tPress any key to go to the main menu. . . ."; 
 getch(); 
 display(); 
 } 
 
 else 
 { cout<<endl<<endl<<setw(5)<<"Sorry! Element not found. "; 
   cout<<endl<<endl<<endl<<endl; 
   cout<<"Press any key to go to the main menu. . . ."; 
   getch(); 
   display(); 
 } 
    } 
 
    else 
    { 
      cout<<endl<<endl<<endl<<"Press any key to go to the main menu. . . ."; 
      getch(); 
      display(); 
    } 
 } 
 
 
  int main() 
 { 
  clrscr(); 
  gotoxy(20,10); 
  cout<<"WELCOME TO THE PERIODIC TABLE"; 
  gotoxy(19,11); 
 
  for(int i=0; i<31 ; i++) 
  { 
    cout<<"*"; 
  } 
 
  gotoxy(10,19); 
  cout<<"Project developed by:"; 
  gotoxy(15,21); 
  cout<<"1.Vilas M ( 4619368 ) "; 
  gotoxy(15,23); 
  cout<<"2.Preetham Upadhya ( 4619364 )"; 
  gotoxy(15,25); 
  cout<<"3.Kalon Acharjee ( 4619370 ) "; 
  gotoxy(15,27); 
  cout<<"4.Sneha Mahajan ( 4619373 ) "; 
  gotoxy(10,33); 
  cout<<"Press any key to continue. . . . . "; 
  getch(); 
  display(); 
  getch(); 
  return(0); 
 } 
