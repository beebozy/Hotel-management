#include <iostream>
using namespace std;

int main(){
	int quant;
	int choice;
	// we dealing with quantity
	int Qrooms=0, Qpasta=0, Qchicken=0, Qnoodles=0, Qburger=0;
	// Items sold 
	int Srooms=0, Spasta=0, Schicken=0, Snoodles=0, Sburger=0;
	// Total price

	int Total_rooms=0;
	int Total_pasta=0;
	int Total_chicken=0;
	int Total_noodles=0;
	int Total_burger=0;
	
	cout<< "\n\t Quantity of items we have";
	cout <<" \n Rooms available";
	cin >> Qrooms;
	cout << "\n Quantity of items pasta :";
	cin >> Qpasta;
	cout << "\n Quantity of items chicken:";
	cin >> Qchicken;
	 cout << "\n Quantity of items noodles:";
	cin >> Qnoodles;
	cout << "\n Quantity of items burger :";
	cin >> Qburger;
	
	
	 
	cout << "\n\t\t\t please select from the options";
	cout << "\n\n1) rooms";
	cout << "\n2) pasta";
	cout << "\n3) chicken";
	cout << "\n4) noodles";
	cout << "\n5) burger";
	cout << "\n6) information regarding collection and sales";
	cout << "\n7) exit";
	cout << "\n8  Please enter your choice";
	cin >> choice;

	
	switch(choice){
	case 1:
		cout << " Enter the number of rooms you want " ;

		cin >> quant;
		if(Qrooms -Srooms>=quant)
		{
		Srooms= Srooms +quant;
		Total_rooms=Total_rooms +quant*1200;
		cout << "\n\n\t\t" << quant << "room/ rooms have been alloted to you";
		
		}
		else 
		cout<< "\n\t only" << Qrooms - Srooms << "Rooms remaining in hotel" ;
		break;

		case 2:
		cout << " Enter the pasta quantity " ;

		cin >> quant;
		if(Qpasta -Spasta>=quant)
		{
		Spasta= Spasta +quant;
		Total_pasta=Total_pasta +quant*250;
		cout << "\n\n\t\t" << quant << "pasta is the order";
		
		}
		else 
		cout<< "\n\t only" << Qpasta - Spasta << "Pasta remaining in hotel" ;

		break;
		case 3:
		cout << " Enter the chicken quantity " ;

		cin >> quant;
		if(Qchicken -Schicken>=quant)
		{
		Schicken= Schicken +quant;
		Total_chicken=Total_chicken +quant*500;
		cout << "\n\n\t\t" << quant << "chicken is the order";
		
		}
		else 
		cout<< "\n\t only" << Qchicken - Schicken<< "chicken remaining in hotel" ;
		break;
		
		case 4:
		cout << " Enter the noodles quantity " ;

		cin >> quant;
		if(Qnoodles -Snoodles>=quant)
		{
		Snoodles= Snoodles +quant;
		Total_noodles=Total_noodles +quant*250;
		cout << "\n\n\t\t" << quant << "noodle is the order";
		
		}
		else 
		cout<< "\n\t only" << Qnoodles - Snoodles<< "noodles remaining in hotel" ;
		break;

		case 5:
		cout << " Enter the burger quantity " ;

		cin >> quant;
		if(Qburger -Sburger>=quant)
		{
		Sburger= Sburger +quant;
		Total_burger=Total_burger +quant*100;
		cout << "\n\n\t\t" << quant << "burger is the order";
		
		}
		else 
		cout<< "\n\t only" << Qburger - Sburger << "Pasta remaining in hotel" ;
		break;

		case 6:
			cout << "\n\t\tDetails of sales and collection ";
			cout << " \n\n Number of rooms we had " << Qrooms;
			cout << "\n\n Number of rooms we gave for rent "<< Srooms;
			cout << "\n\n Number of rooms left" << Qrooms - Srooms;
			cout << " \n\n Total rooms collection for the day"<< Total_rooms;


			cout << "\n\t\tDetails of sales and collection ";
			cout << " \n\n Number of quantity  we had " << Qpasta;
			cout << "\n\n Number of pasta sold  "<< Spasta;
			cout << "\n\n Number of pastas left" << Qpasta - Spasta;
			cout << " \n\n Total pasta collection for the day"<< Total_pasta;

			cout << "\n\t\tDetails of sales and collection ";
			cout << " \n\n Number of chicken quantity we had " << Qchicken;
			cout << "\n\n Number of chicken we sold  "<< Schicken;
			cout << "\n\n Number of chickens  left" << Qchicken -Schicken;
			cout << " \n\n Total chicken collection for the day"<< Total_chicken;

			cout << "\n\t\tDetails of sales and collection ";
			cout << " \n\n Number of noodles quantity we had " << Qnoodles;
			cout << "\n\n Number of noodles we sold "<< Snoodles;
			cout << "\n\n Number of noodles left" << Qnoodles - Snoodles;
			cout << " \n\n Total noodles collection for the day"<< Total_noodles;

			cout << "\n\t\tDetails of sales and collection ";
			cout << " \n\n Number of burger quantity we had " << Qburger;
			cout << "\n\n Number of burger we sold "<< Sburger;
			cout << "\n\n Number of burger left" << Qburger - Sburger;
			cout << " \n\n Total burger collection for the day"<< Total_burger;

		case 8:
			exit(0);
		default:
			cout << "\n please select the numbers above";
			}

system("pause>0");
}