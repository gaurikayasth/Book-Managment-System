#include <iostream>
#include "linkedlist.h"
int main() 
{
	LinkedList lt;
	int choice;
	do
	{
		cout<<"\n\t\t1.Insert book at position";
		cout<<"\n\t\t2.display books";
		cout<<"\n\t\t3.delete book";
		cout<<"\n\t\t4.search book";
		cout<<"\n\t\t5.update book";
		cout<<"\n\t\t6.top3 books";
		cout<<"\n\t\t10.Exit";
		cout<<"\nEnter your choice=";
		cin>>choice;
		switch(choice)
		{
			case 1:{
					    int id,pos;
			            char name[20],author[20],category[20];
			            double price,rating;
				        cout<<"\nenter Book ID=";
						cin>>id;
						cout<<"enter Book name=";
						fflush(stdin);
						gets(name);
						cout<<"enter Book author=";
						fflush(stdin);
						gets(author);
						cout<<"enter Book price=";
						cin>>price;
						cout<<"enter Book rating=";
						cin>>rating;
						cout<<"enter Book category=";
						fflush(stdin);
						gets(category);
				
						Book  b(id,name,author,price,rating,category);
						cout<<"\nEnter position=";
						cin>>pos;
						lt.insertPos(b,pos);
						break;
				   }
			case 2:{
					    lt.display();
				 	    break;
			        }  
		    case 3:{
			    	    int id;
			    	    cout<<"Enter book id want to delete=";
			    	    cin>>id;
			    	    if(lt.deletee(id))
			    	    {
			    	    	cout<<"\nBook deleted successfully";
						}
						else
						{
							cout<<"\nNo Books to delete OR Book not found";
						}
					    break;
			       }  
	        case 4:{
				        int id,s;
				        char ele[20];
				        Book b;
				        cout<<"enter how you want find the book";
			            cout<<"\n1:bId\n2:bName\n3:author\n4:category\n";
			            cin>>s;
			            if(s==1)
			            {
					        cout<<"\nEnter an book id want to search ";
					        cin>>id;
					        Node* i=lt.searchById(id);
					        if(i==NULL)
					        {
					        	cout<<"\nNo Books to search OR Book not found";
							}
							else
							{
								cout<<"\nbook found ";
								lt.display2(i);
							}
						}
						else if(s==2)
			            {
					        cout<<"\nEnter an book name want to search ";
					        cin>>ele;
					        lt.searchByName(ele);
					    }
					    else if(s==3)
			            {
					        cout<<"\nEnter an book author want to search ";
					        cin>>ele;
					        lt.searchByAuthor(ele);
					    }
					    else if(s==4)
			            {
					        cout<<"\nEnter an book category want to search ";
					        cin>>ele;
					        lt.searchByCategory(ele);
					    }
					    else
					    {
					    	cout<<"invalid choice!";
			 			}
		            }
			        break;
			case 5:{
				        int id;
				        cout<<"\nEnter an book id want to update ";
				        cin>>id;
				        if(lt.update(id))
				        {
							cout<<"\nbook updated successfully";
						}
						else
						{
							cout<<"\nNo Books to update OR Book not found";
						}
			       }
				    break;
			case 6:{   int t;
			           LinkedList lt2; 
					   cout<<"enter based on what you want to find top 3 Books\n1:price\n2:ratings\n";
				       cin>>t;
				       if(t==1)
				        {
				            lt.top3PriceBooks();
				        }
				        else if(t==2)
				        {
				            lt.top3RatingBooks();
				        }
				        else
			                cout<<"invalid choice...";
		            }
			        break;
			case 10:cout<<"\nend of program!";
			      break;
			default:cout<<"invalid choice!";
		}
    }while(choice!=10);
	return 0;
}
