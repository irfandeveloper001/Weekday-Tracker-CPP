#include <iostream>
using namespace std;
class day
{
	public:
		int n;
		string certain_day;
		string weekDay[7]  ={"monday","tuesday","wednesday","thursday","friday","saturday", "sunday"}; 
		void set(string s, int a_d)
		{
			for (int i=0; i<a_d; i++)
			{				
	         	if (weekDay[i] == s	)
		       {
            		n=i;
	        		weekDay[n] = s;
	           } 	   	
		   }
	}
		string printDay()
		{
	       cout << "day: " << weekDay[n] << endl;
	   	   return weekDay[n];
		    cout <<endl;	    
		}
		string nextDay()
		{
			if (n+1 == 7)
			{
			 cout << " Next day: " << weekDay[n-6] << endl;
		   return weekDay[n-6];
		    cout <<endl;
		    }
		   	else if (n+1 < 7)
			{
		    	cout << " Next day: " << weekDay[n+1] << endl;
	     	    return weekDay[n+1];
		        cout <<endl;
		    }
		}
		string prevDay()
		{
			if (n-1 < 0)
			{
	    		 cout << " Previous day: " << weekDay[n+6] << endl;
		         return weekDay[n+6];
		         cout <<endl;
		    }
	   	    else if (n-1 >= 0)
	    	{
		        cout << " Previous day: " << weekDay[n-1] << endl;
		        return weekDay[n-1];
		        cout <<endl;
	   	   }
		}
		string certainDay(int a_d, int c_d)
		{
			if (n+a_d > 7)
			{
		    	for (int i = n+a_d ; i >= 0 ;i=i-7)
	     		{
		        	if (i < 7 && i >= 0)
			     	{		      
				       	cout <<"\n\nCurrent day: " <<weekDay[i] << endl;
				      	return weekDay[i] ;
		         	}
		        }
     		}
			else if (n+a_d < 7)
			{
				n = n+a_d;
			    if (n < 7)
			    {
			     	cout <<"\n\nCurrent day: " <<weekDay[n] << endl;
			    	return weekDay[n] ;
				}
		   	}
    }		
};
int main()
{
	string d;
	int c_d,a_d;
	string weekDay[7] ={"monday","tuesday","wednesday","thursday","friday","saturday", "sunday"}; 
	cout <<"Enter the certain Day: ";
	cin >> c_d;	
	d=weekDay[c_d-1];
	day b;
	b.set(d,c_d);
	b.printDay();
	b.nextDay();
	b.prevDay();
	cout <<"Enter the adding certain days: ";
	cin >> a_d;
	b.certainDay(a_d,c_d);
}
