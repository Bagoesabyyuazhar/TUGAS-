#include <iostream>
using namespace std;

int cari(int data[], int n, int k)
{
	int posisi, i, ketemu;
	
	if (n <=0)
	    posisi = -1;
	else
	{
		ketemu = 0;
	    i = 1;
	    while ((i < n-1) && ! ketemu)
	        if (data[i] == k)
	        {
	        	posisi = i;
	        	ketemu = i;	
			}
			else
			    i++;
		    
       if (!ketemu)
            posisi = -1;
}

    return posisi;
}

int main()
{
	int data[8] = {6,7,8,5,7,8,1,9};
	int dicari = 5;
	
	cout << "posisi " << dicari << " dalam larik data! "
	     << cari(data, 8, dicari) << endl;
	     
	return 0;     
}
