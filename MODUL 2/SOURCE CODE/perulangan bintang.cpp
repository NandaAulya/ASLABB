#include <iostream>
using namespace std;

main()
{
	char ulang;
	do
	{	
		int c;
		cout<<"-------------------------"<<endl;
		cout<<"|   Perulangan bintang  |"<<endl;
		cout<<"-------------------------"<<endl;
		cout << endl << endl;
		cout<<"1. Belah Ketupat Berongga"<<endl;
		cout<<"2. Diagonal & Sisi Kotak "<<endl;
		cout<<"3. Persegi Diamond Berongga"<<endl;
		cout << endl;
		cout<<"masukan pilihan \t: ";
		cin>>c;
		switch (c){

		case 1:
			int a;
			cout << "masukan jumlah bintang  : ";
			cin >> a;
	
			for(int i = 1; i <= a; i++)
			{
				for(int c = a; c >= i; c--)
				{
					cout<<" ";
				}
				for(int j = 1; j <= a; j++)
				{
					  if( i >= 2 && i <= a - 1 && j > 1 && j <= a - 1)
					{
						cout<<" ";
					}
					else
					{
						cout<<"*";
					}
				
				}
			cout<<endl;
		}
			break;
		case 2:

			int i, j, n;
      		cout << "Masukkan jumlah bintang : ";
      		cin >> n;  
      		for (i = 0; i < n; i++)
      		{
            	for (j = 0; j < n; j++)
            	{	                 
                	  if (i == j || i + j == n - 1 || i == 0 || i == n - 1 || j == 0 || j == n - 1)
                	  {
                	  	cout << "*";
					  }
                        
                  else 
                  {
                  	cout << " ";
				  }
            }
            	cout << "\n";
      		}
      		break;
      	case 3:
      		int A, B, C;
    		cout << "Masukkan jumlah bintang : ";
    		cin >> C;
    		for (A = 0; A < C; A++)
    		{
        		for (B = 0; B < (2 * C); B++)
        		{
            		if (A + B <= C - 1)
            		{
            			cout << "*";
					}
                	
            		else
            		{
            			cout << " ";
					}
                
            		if ((A + C) <= B)
                	{
						cout << "*";
					}
            		else
            		{
            			cout << " ";
					}
                	
        }
        	cout << "\n";
    }
 
    		for (A = 0; A < C; A++)
    		{		
        		for (B = 0; B< (2 * C); B++)
        		{
            		if (A >= B)
            		{
                		cout << "*";
					}	
					else
            		{
                		cout << " ";
                	}
            		if (A >= (2 * C - 1) - B)
            		{
                		cout << "*";
                	}
            		else
            		{
                		cout << " ";
                	}
        		}
        			cout << "\n";
    		}
    		break;
}
	cout << "Apakah Anda Ingin Mengulang (y/t)? ";
    cin >> ulang;
    cout << endl;

}
	while (ulang!= 't');
}
