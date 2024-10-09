#include <iostream>
#include <windows.h> // for window API structure 
#include <conio.h> // for getch()
#include <stdio.h>
#include <string.h>
#include <ctime> // for time functions

			using namespace std;
	
// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time-> tm_hour < 12){
        cout<< "Good Morning Sir"<<endl;
        string phrase = "Good Morning Sir";
    }
    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon sir"<<endl;
        string phrase = "Good Afternoon sir";
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening sir"<<endl;
        string phrase = "Good Evening sir";
    }
}

// using function to hide password
void getPassword(char* password) { 
	char inputChar;
    int i = 0;

    while (true) {
        inputChar = getch(); 

        if (inputChar == 13) { 
            password[i] = '\0';
            break;
        } else if (inputChar == 8) { 
            if (i > 0) {
                i--;
                cout << "\b \b"; 
            }
        } else {
            password[i++] = inputChar;
            cout << '*'; 
		}
	}
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}
int main()
{
    system("cls");
    cout<<"\t\t<============================================= W E L C O M E =======================================>"<<endl;
    cout<<"\t\t<============================================= I'M A VIRTUAL ASSISTANT =============================>"<<endl;
    cout<<"\t\t<============================================= MY NAME IS CHATTERCHACHA ============================>"<<endl;
    cout<<"\t\t<============================================= I'M HERE TO HELP YOU ================================>"<<endl<<endl;
    char password[20]; //to take password
    char ch[100]; // to take command from the user
    
    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        
        getPassword(password);

		STARTUPINFO startInfo = {0};
		PROCESS_INFORMATION processInfo = {0};
		    
        
        if(strcmp(password, "humayun")==0){
            cout<<"\n<==================================================================================================>\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n";
                cout<<endl<<"How can i help you sir...."<<endl<<endl;
                string phrase = "How can i help you sir";
                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";
                
				// if user say hey then reply "Hello sir"
                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello sir....."<<endl;
                    string phrase = "Hello sir";
                }
                
                // if user say bye then program will end
                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    exit(0);
                }
                
                // about chatbot  
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a virtual assistant created by Humayun !!!"<<endl;
                    string phrase = "I am a virtual assistant created by Humayun";
                    
                }
                
                // felling share
                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    
                }
                
                // Time and Date
                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }
                
                	// for opening natepad
                   else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                
                
                // for opening C++ tutorial
                else if (strcmp(ch, "open c++") == 0) {
				    cout << "Opening video....." << endl;
				    ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=yGB9jhsEsr8&t=349s", NULL, NULL, SW_SHOWNORMAL);
				}

                      
                	// for opening MS Word
                   else if(strcmp(ch, "open word") == 0){
                    cout<<"openining MsWord....."<<endl;
                    string phrase = "opening Ms word";
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                    
               
                	// for opening Excel
                   else if(strcmp(ch, "open excel") == 0){
                    cout<<"openining MsExcel....."<<endl;
                    string phrase = "opening Ms Excel";
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                    
                
                   // for opening PPT
                   else if(strcmp(ch, "open ppt") == 0){
                    cout<<"openining MSPowerPoint....."<<endl;
                    string phrase = "opening Ms Power Point";
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
    

                
                // for opening google
                else if(strcmp(ch, "open google") == 0){
                    cout<<"opening google....."<<endl;
                    string phrase = "opening google";
                    system("start https://www.google.com");
                }
        
                
                // for opening youtube
                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"opeining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    system("start https://www.youtube.com");
                }
                
                // for opening instagram
                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    system("start https://www.instagram.com/humayun_khuhro/");
                }
                
                // for opening facebook
                else if(strcmp(ch, "open facebook") == 0){
                	cout << "openining facebook....." << endl;
                	string phrase = "opening facebook";
                	system("start https://www.facebook.com/muhammad.humayou.1");
				}
				
				// Show miss ghazala profile at iqra
                else if(strcmp(ch, "miss ghazala") == 0){
                	cout << "openining website....." << endl;
                	string phrase = "opening website";
                	system("start https://iqra.edu.pk/teachers/ghazala-shafi/");
				}
                
                // if user ask wrong question this reply show
                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                }
                
            }while(1);
        }
        else
                {
                    system("cls");
                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS CHATTERCHACHA =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                         << endl;
                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
            
            
                }
    } while (1);
    
    return 0;
}




