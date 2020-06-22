#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char *argv[])
{
	string saved_food;
	string food[29 ];
	ofstream db;
	db.open("db.txt");
		cout << "Available foods\n"
		        "rice\n"
		        "beans\n"
		        "coke"<< endl;
		cout << "Order a food: ";
		
		
//loop for number of order
		for (int j=0; j<3; j++){
			cout<<"type (order) to order or (break) to end transaction"<<endl;
			string input;
			cin>>input;
//admin system
			if (input=="admin"){
				string new_food;
				cout<<"how many items to add?:  \n";
				int num_input;
				
				cin >> num_input;
				cout<<"enter the food you wish to add\n";
				for(int s=0; s<num_input; s++){
				
					cout<<"food:  ";
					cin>> new_food;
					food[s] +=new_food;
				}
				cout<<"you added\n";
				for(int p=0; p<10; p++){
				cout<<food[p]<<endl;
				saved_food+=food[p];
				}
				
				db<<saved_food;
			}
					
			else if (input=="order"){
				string order; 
				cout<<"food:  ";
				cin>> order;
//for loop to verify food
				int all=0;
				int none=0;
				for (int i=0; i<3; i++){
					if (order == food[i]){
						all+=1;
						
					}
					else{
						none+= 1;
					}
				}
				if (all==1){
					cout <<"you orderd "<<order<<endl;
				}
				else{
					cout <<"we don't have what you orderd "<<endl;
				}
			
		//for (int i=0; i<3; i++){
//			if (order==food[i]){
//				cout<<"your orderd ";
//				cout<<order<<endl;
//				break
//			}
//		}
//			for (int f=0; f<3; f++){
//			if (order!=food[f]){
//				cout<<"food not in our list"<<endl;
//				break;
//			}
//		}
	}
	else if (input=="break"){
		cout<<"quitting_____"<<endl;
		cout<<" goodbye-- have a nice day..........";
		      break;
		      }
	else{
		cout<<"invalid input "<<endl;
	}
	}
	
return 0;
}