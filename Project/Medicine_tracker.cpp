/*
    Medicine Tracker in C++
    Author      : Lakshmithra
    Created on  : 31 July 2025
    Description : Console-based medicine tracker application.
                  Allows users to add, view, update, and delete medicine records.
                  Each record stores medicine name, dosage, time of day, and status.
                  Data is saved in a text file for persistence between sessions.
*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;

void to_lowercase (char arr[]);      // Declaring a function that will change all letters in a word to lowercase

class medicine_tracker {

public :

    char mname[20] , mdosage[10] , mtime[20] , mstatus[10] , line[100];

    void add_medicine(){

            cout<<"\nAdding a new medicine :-\n";

            cout<<"\nEnter the name of medicine : ";
            cin.getline(mname , 20);
            cout<<"\nEnter the dosage of medicine : ";
            cin.getline(mdosage , 10);
            cout<<"\nEnter the time of day : ";
            cin.getline(mtime , 20);

            strcpy(mstatus , "Not Taken");      // Default status for a newly added medicine

            FILE *fp ;
            fp = fopen("Medicine_Tracker.txt" , "a");

            if(fp==NULL){
                cout<<"\nFile can't be opened !";
                return ;
            }

            fprintf(fp , "%s|%s|%s|%s|\n" , mname , mdosage , mtime , mstatus);

            fclose(fp);
        }

    void view_medicine (){

            FILE *fp;
            fp = fopen("Medicine_Tracker.txt" , "r");

            if(fp==NULL){
                cout<<"File not found !";
                return ;
            }

            cout<<"\nDisplaying medicine details :-\n\n";

            cout<<left<<setw(20)<<"Name"<<setw(10)<<"Dosage"<<setw(20)<<"Time"<<setw(10)<<"Status"<<endl;
            cout<<"----------------------------------------------------------------\n";

             if(fgets(line, 100, fp) != NULL){
                 
                   rewind(fp);     // Moves the file pointer back to the start of file after checking if it's not empty
                   
                   while(fgets(line , 100 , fp) != NULL){
                     
                       sscanf(line , "%[^|]|%[^|]|%[^|]|%[^|]|" , mname , mdosage , mtime , mstatus);
                       cout<<left<<setw(20)<<mname<<setw(10)<<mdosage<<setw(20)<<mtime<<setw(10)<<mstatus<<endl;
                   }
             }
             
            else {
                  cout<<left<<setw(20)<<"NIL"<<setw(10)<<"NIL"<<setw(20)<<"NIL"<<setw(10)<<"NIL"<<endl;
                  cout<<"\nNo medicine record found !\n";
              }
          
            fclose(fp);
        }

    void update_medicine(){

             FILE *fr;
             fr = fopen("Medicine_Tracker.txt" , "r");     // Original file to read from

             if(fr==NULL){
                cout<<"File not found !";
                return ;
             }

             FILE *fw ;
             fw = fopen("Temp.txt" , "w");       // Temporary file to write updated content

             if(fw==NULL){
                cout<<"File not found !";
                return ;
             }

             char name[20];
             cout<<"\nEnter the name of the medicine to update : ";

             cin.getline(name , 20);

             bool isupdated = false;     // Flag to track if update was successful

             while(fgets(line , 100 , fr)){
               
                 sscanf(line , "%[^|]|%[^|]|%[^|]|%[^|]|" , mname , mdosage , mtime , mstatus);

                 if(strcmp(name , mname) != 0){
                    fprintf(fw , "%s|%s|%s|%s|\n" , mname , mdosage , mtime , mstatus);    // Copy unchanged records directly to new file
                 }
                 else if(strcmp(name , mname) ==0){

                    char response[5];
                    cout<<"\nHave you taken the medicine (yes / no) : ";
                    cin>>response;
                    to_lowercase(response);
                     
                      if(strcmp(response , "yes") == 0 ){
                          strcpy(mstatus , "Taken");        // Update the status
                          fprintf(fw , "%s|%s|%s|%s|\n" , mname , mdosage , mtime , mstatus);
                          isupdated = true;
                      }
                      else if (strcmp(response , "no") == 0 ){
                           fprintf(fw , "%s|%s|%s|%s|\n" , mname , mdosage , mtime , mstatus);
                           isupdated = true;
                      }
                      else {
                          cout<<"Invalid response ! Enter either yes or no \n";
                      }
                   }

               }

             if(isupdated){
                cout<<"\nUpdate successful. Keep following your schedule!\n";
             }
             else {
                cout<<"\nMedicine not found !\n";
             }

             fclose(fr);
             fclose(fw);

             remove("Medicine_Tracker.txt");                 
             rename("Temp.txt" ,"Medicine_Tracker.txt");    // Replace original file with updated temporary file

        }

    void delete_medicine(){

             FILE *fr;
             fr = fopen("Medicine_Tracker.txt" , "r");   // Open file to read original content

             if(fr==NULL){
                cout<<"File not found !";
                return ;
             }

             FILE *fw ;
             fw = fopen("Temp.txt" , "w");    // Temporary file to store records after deletion

             if(fw==NULL){
                cout<<"File not found !";
                return ;
             }

             char name[20];
             cout<<"\nEnter the name of the medicine to delete : ";

             cin.getline(name , 20);

              bool isdeleted = false;       // Flag to check if medicine was deleted

             while(fgets(line , 100 , fr)){
                 sscanf(line , "%[^|]|%[^|]|%[^|]|%[^|]|" , mname , mdosage , mtime , mstatus);

                 if(strcmp(name , mname) != 0){
                    
                    fprintf(fw , "%s|%s|%s|%s|\n" , mname , mdosage , mtime , mstatus);   // Write all records except the one to delete
                 }
                 else if(strcmp(name , mname) ==0){

                    char response[5];
                    cout<<"\nAre you sure you want to delete this medicine ? (yes / no) : ";
                    cin>>response;
                    to_lowercase(response);
                   
                    if(strcmp(response , "yes") == 0 ){
                       isdeleted = true;
                       continue;           // Skip writing this record to new file
                    }
                    else if (strcmp(response , "no") == 0 ){
                         fprintf(fw , "%s|%s|%s|%s|\n" , mname , mdosage , mtime , mstatus);
                    }
                    else {
                        cout<<"Invalid response ! Enter either yes or no \n";

                    }
                 }

               }

             if(isdeleted){
                cout<<"\nMedicine deleted successfully !\n";
             }
             else {
                cout<<"\nMedicine not found !\n";
             }

             fclose(fr);
             fclose(fw);

             remove("Medicine_Tracker.txt");
             rename("Temp.txt" ,"Medicine_Tracker.txt");     // Replace original file with updated one

        }
};

int main(){

    cout<<"\nWelcome to our medicine tracker !\n";

    cout<<"\nGood to see you ! Ready to manage your medicines and stay healthy?\n";

    medicine_tracker obj;

    char wish[5];
    
    do {

        cout<<"\nChoose your option :-\n";
        cout<<"\t1.Add new medicine\n";
        cout<<"\t2.View medicines\n";
        cout<<"\t3.Update a medicine\n";
        cout<<"\t4.Delete a medicine\n";
        cout<<"\t5.Exit\n";

        int choice;
        cout<<"Enter your choice (1/2/3/4/5) : ";
        cin>>choice;
        cin.ignore();          // This is used to clear the leftover newline so getline works properly next time
        
        switch(choice){

        case 1:
            obj.add_medicine();
            break;

        case 2:
            obj.view_medicine();
            break;

        case 3:
            obj.update_medicine();
            break;

        case 4:
            obj.delete_medicine();
            break;

        case 5 :
            cout<<"\nAre you sure you want to exit ? (yes / no) ";
            cin>>wish;
            to_lowercase(wish);
            
            if(strcmp(wish , "yes")== 0 ){
                cout<<"\nThank you for using the Medicine Tracker. Stay healthy and see you soon!\n";
                return 0;
            }
            else if(strcmp(wish , "no")== 0){
                    cout << "\nReturning to the main menu...\n";
                    break;
            }
            else{
                cout<<"\nEnter no if you want to exit or yes if you want to continue ! ";
                break;
            }


        default :
            cout<<"\nInvalid ! Enter a valid choice (1/2/3/4/5)";
        }

        cout<<"\n\nDo you wish to continue ? (yes/no) : ";
        cin>>wish;
        to_lowercase(wish);

    } while(strcmp(wish , "yes") == 0);

     cout<<"\nThank you for using the Medicine Tracker. Stay healthy and see you soon!\n";

     return 0;
}

void to_lowercase (char arr[]){

    for(int i = 0 ; i < strlen(arr) ; i++){   // Convert each character in the input array to lowercase
        arr[i] = tolower(arr[i]);
    }
}
