/** Programmer: AB
 * Date: 6/28/18
 * Description: Application that takes in a letter and displays tricky words
 * that are often misspelled.
 * 
 * */
 
#include <iostream>
#include <string>

#define string std::string

char userLetterInput;
string userFirstName;
string userChoiceContinue;
string pause;

int main(){
    
    std::cout << "-----------<>-------------\n";
    std::cout << "Welcome to your TRICKY WORDS Helper!\n";
    std::cout << "\n*NOTE: All of the words may not be in alphabetical order.\n";
    std::cout << "-----------<>--------------";
    std::cout << "\n\nEnter your first name: ";
    std::cin >> userFirstName;
    
    do {
        std::cout << "Enter a lowercase letter [a - z]: ";
        std::cin >> userLetterInput;
        std::cout << "\n\n" <<userFirstName << ", " << "\n\nHere's your list"
        " of tricky words for the letter (" << userLetterInput << "):";
        
        switch(userLetterInput) {
            case 'a' :
            std::cout << "\n\na while\nabsence\nacross\naccelerate \nacceptable\naccidentally\naccommodate\naccomplish\naccordion\naccumulate\nacknowledge\nacquaintance\nacquire\nadvice\naficionado\nacquit\nall right (NOT alright)\namateur\nanoint\napology\napparent\narctic\nargument\natheist\naxle"; 
            break;
            case 'b' :
            std::cout << "\n\nbarbecue\nbeginning\nbelieve\nbellwether\nbicycle\nbroccoli\nbureau\nbusiness"; 
            break;
            case 'c' :
            std::cout << "\n\ncalendar\ncamaraderie\ncamouflage\ncantaloupe\ncarburetor \nCaribbean\ncartilage\ncategory\nceiling\ncemetery\nchangeable\nchauvinism\nchili = hot pepper\nchilly = cold outside\nChile = a country\nchocolaty\ncoliseum \ncollectible\ncolumn\ncommemorate\ncommitted\nConnecticut\ncongratulations\nconscience\nconscientious\nconscious\nconsensus\nconvalesce\ncoolly\ncriticize"; 
            break;
            case 'd' :
            std::cout << "\n\ndaiquiri\ndiscipline\ndeductible \ndefinite(ly)\ndrunkenness\ndumbbell\ndalmatian\ndecease\ndeceive\ndefendant\ndefiant\ndescent\ndesiccate\ndesperate\ndeterrence\ndevelopment\ndevice\ndiorama\ndisappear\ndisappoint\ndisastrous\ndissipate\ndifference\ndying = death is coming\ndieing = change hair color"; 
            break;
            
            case 'e' :
            std::cout << "\n\necstasy\nembarrass(ment)\nenough\nespecially\nequipment\nexhilarate\nexceed\nexcellent\nexercise\nexistence\nexperience\nexplanation"; 
            break;
            case 'f' :
            std::cout << "\n\nfahrenheit\nfascinate\nfiery\nfinally\nforeign\nFebruary\nflabbergast\nflotation\nfluorescent\nfourth\nfulfill"; 
            break;
            case 'g' :
            std::cout << "\n\ngauge\ngenerally\ngenius\ngovernment\ngrammar\ngrateful\ngross\nguarantee\nguttural";
            break;
            case 'h' :
            std::cout << "\n\nhandkerchief\nharass\nheight\nhierarchy\nhorrific\nhumorous\nhypocrisy"; 
            break;
            case 'i' :
            std::cout << "\n\nignorance\nindict \nimmediate\nindependent\nindispensable\ninoculate\nintelligence\nIts (belongs to it)\nIt's (it is)\nimitate\ninadvertent\nincidentally\nincredible\ningenious\nirascible\nirresistible"; 
            break;
            case 'j' :
            std::cout << "\n\njealous\njewelry\njudgment"; 
            break;
            case 'k' :
            std::cout << "\n\nketchup\nkernel = piece of corn or a small amount\ncolonel = high-ranking officer\nknowledge"; 
            break;
            case 'l' :
            std::cout << "\n\nlabeled\nled \nleisure\nliaison\nlibrary\nlicense\nlieutenant\nliquefy\nlose = lose a game\nloose = baggy clothes\nlying";
            break;
            case 'm' :
            std::cout << "\n\nmagically\nmaintenance\nmarshmallow \nmathematics\nmaneuver\nmedieval\nmediocre\nmemento\nmillennium\nminiature \nminuscule\nmischief\nmischievous\nmiscellaneous\nmisogyny\nmisspell (mis + spell)\nmysterious";
            break;
            case 'n' :
            std::cout << "\n\nnauseous\nnecessary (cess)\nneighbor\nno one (but NOBODY is one word)\nnoticeable\nnuclear";
            break;
            case 'o' :
            std::cout << "\n\noccasionally\noccur\noccurred\noccurrence\noctopus\nodyssey\nofficial\nonomatopoeia\n"; 
            break;
            case 'p' :
            std::cout << "\n\npastime\nperseverance\npersonnel\npharaoh\nplaywright \npossession\nprecede\nprejudice\nprincipal = (school PAL)\nprinciple (a rule)\nprivilege\npronunciation \npublicly\nparallel\nparliament\nparticular\npeninsula\npiece\npigeon\npistachio\npleasant\nplenitude\npreferable\npresumptuous\nproceed\npropagate\npuerile\npumpkin\npursue\nputrefy"; 
            break;
            case 'q' :
            std::cout << "\n\nquestionnaire"; 
            break;
            case 'r' :
            std::cout << "\n\nraspberry \nreceive\nreceipt\nrecommend\nreferred\nreference\nrefrigerator\nrelevant\nreligious\nremembrance \nrenowned\nrestaurant\nrhyme\nridiculous"; 
            break;
            case 's' :
            std::cout << "\n\nschedule\nseparate\nsergeant\nsupersede\nsacrilegious\nsalary\nsandal\nsandwich\nsavvy\nscience\nscissors\nseize\nsensible\nseparate\nseptuagenarian\nsheriff\nshish kebab\nsiege\nsimilar\nsincerely\nspecial\nsubpoena\nsuccess\nsimile"; 
            break;
            case 't' :
            std::cout << "\n\ntableau\ntariff\ntheir = belongs to them\nthey're = they are\nthere = somewhere over there\nthorough\nthreshold\nthrough\ntomorrow\ntongue\ntoo = 'I am great, as well'\nto = 'go to the store'\ntwo = '2'\ntragedy \ntruly\ntwelfth\ntyranny"; 
            break;
            case 'u' :
            std::cout << "\n\nuntil\nukulele\nusage";
            break;
            case 'v' :
            std::cout << "\n\nvacuum";
            break;
            case 'w' :
            std::cout << "\n\nweather\nWednesday\nweird"; 
            break;
            case 'x' :
            std::cout << "\n\n*Words to be added.*"; 
            break;
            case 'y' :
            std::cout << "\n\n*Words to be added.*"; 
            break;
            case 'z' :
            std::cout << "\n\n*Words to be added.*";  
            break;
         
         
      default :
         std::cout << "\n\nERROR: Invalid input. Please enter a lowercase"
         " letter [a -z]." << std::endl;
   } // end switch
   
   std::cout << "\n\nWould you like to enter another letter [Y, N]?: ";
   std::cin >> userChoiceContinue;
    } // end do
   while (userChoiceContinue == "y" | userChoiceContinue == "Y");
   
   std::cout << "\n\n-------------------------";
   std::cout << "\nThank you for using TRICKY WORDS Helper. Good luck and happy spelling!\n";
     std::cout << "\n(If you want to add words, send them to masgaming01@gmail.com)\n";
   std::cout << "-------------------------\n";

   std::cout << "\nPress [E then ENTER] to end TRICKY...";
   std::cin >> pause;
   
        
        return 0;
    }
