char FM_NAME[100];
char FT_NAME[100];
char NAME[100];
char CERTIFY[100];
char AGE[50];
char SEX[50];
char DEGREE[100];

struct menu {
	     char x;
	     char y;
	     char *name;
	     char *remark;
	     char xrow;
	     char key;
	     char chrkey;
	     char scankey;
	     unsigned select :1;
	     unsigned alt    :1;

	     };

struct member {
                char  sfm_name[100];
                char  sft_name[100];
                char  sname[100];
                char  scertify[100];
                char  sage[50];
                char  ssex[50];
                char  sdegree[100];
		struct member *next;
                            };

struct member *this,*first,*new,*add;


struct menu mainmenu[7]={
			  {1,2," File "," File � File-manegement commands                  ",1,'f',0,33,1,1},
              {1,10," Page "," Page � It does paging operations                     ",1,'p',0,25,0,1},
			  {1,18," Select " ," Select � Select items                        ",3,'l',0,38,0,1},
			  {1,28," Show "," Show � Shows the selected items                 ",1,'s',0,31,0,1},
			  {1,36," Print "," Printer � Send information to printer          ",2,'r',0,19,0,1},
			  {1,45," Tools "," Tools � Specify some system tools              ",1,'t',0,20,1,1},
			  {1,71," Help "," Help � Access to Help                           ",1,'h',0,35,1,1}

			 };


struct menu filemenu[6]={
              {3,2," New             "," New � Create a new file                                    ",1,'n',0,0,1,0},
              {4,2," Save            "," Save � Save the active file                        ",1,'s',0,0,0,0},
              {5,2," Save as         "," Save as � Save the active file under new name      ",2,'a',0,0,0,0},
              {7,2," Open            "," Open � Open the saved file                         ",1,'o',0,0,1,0},
              {8,2," Close           "," Close � Close the active file                      ",1,'c',0,0,0,0},
              {10,2," Exit      Alt+X "," Exit � Exit from dbase                            ",2,'x',2,0,1,0},
			 };

struct menu pagemenu[4]={
              {3,10," Add new page       "," Add � Adds new page to actice file                  ",1,'a',0,0,0,0},
			  {4,10," Erase page         "," Erase � Erase a specify page               ",2,'r',0,0,0,0},
			  {5,10," Edit old page      "," Edit � Edit active page                    ",1,'e',0,0,0,0},
			  {6,10," Set active page    "," Set � Set active page in file              ",1,'s',0,0,0,0}
			};



struct menu selectmenu[7]={
			    {3,18," By family name            "," By family name � will be selected                              ",4,'f',0,0,0,0},
			    {4,18," By father name            "," By father name � will be selected              ",6,'t',0,0,0,0},
			    {5,18," By name                   "," By name � will be selected                     ",4,'n',0,0,0,0},
			    {7,18," By certificate            "," By certificate � will be selected          ",4,'c',0,0,0,0},
			    {8,18," By age                    "," By age � will be selected                  ",4,'a',0,0,0,0},
			    {9,18," By sex                    "," By sex � will be selected                  ",4,'b',0,0,0,0},
			   {11,18," By degree                 "," By degree � will be selected               ",4,'d',0,0,0,0}

			   };

struct menu showmenu[2]={
			  {3,28," View active page    " ," View active page � Shows active page                      ",6,'a',0,0,0,0},
			  {4,28," View selected items ", " View selected items � Shows the selected items            ",6,'s',0,0,0,0}
			};
struct menu printmenu[2]={
			  {3,36," Print active page    " ," Print active page � Prints active page               ",7,'a',0,0,0,0},
			  {4,36," Print selected items ", " Print selected items � Prints the selected items          ",7,'s',0,0,0,0}
			 };
struct menu helpmenu[2]={
              {3,60," Help     Alt+F1 " ," Help � Needed help to user                                        ",1,'h',0,0,1,0},
			  {5,60," About DataBase  ", " � A Program By Mehdi Mirzapour Written in 1996          ",1,'a',0,0,1,0}
                       };

struct menu toolsmenu[3]={
			  {6,45," Alarm          "," Alaram � Specify alaram mode           ",1,'a',0,0,1,1},
			  {3,45," MS-DOS Command "," MS-DOS Command � Run a DOS command     ",8,'c',0,0,1,0},
			  {4,45," MS-DOS Shell   "," MS-DOS Shell � Temporarirly exit to DOS",8,'s',0,0,1,0}

			 };

struct menu sex[2]={
                          {15,38,"      Male      " ," Add � Adds new page to actice file                  ",6,'m',0,0,1,0},
                          {16,38,"     Female     ", " Add  � Adds new page to actice file                  ",5,'f',0,0,1,0}
                       };

struct menu submenu1[2]={
                            {8,13,"� Set Last   Page         ","  Set Last Page � Sets last page for active page       ",6,'l',0,0,1,0},
                            {9,13,"  Set Manual Page         ","  Set Manual Page � Set the asked page to active page  ",6,'m',0,0,1,0}
                        };

struct menu submenu2[2]={
                            {8,13,"  Set Last   Page         ","  Set Last Page � Sets last page for active page       ",6,'l',0,0,1,0},
                            {9,13,"� Set Manual Page         ","  Set Manual Page � Set the asked page to active page  ",6,'m',0,0,1,0}
                        };

struct menu present[5]={    {13,19,"   What's The Main Design Purpose ?     "," ",14,'m',0,0,1,0},
                            {14,19,"   What's New In This Verion ?          "," ",10,'n',0,0,1,0},
                            {15,19,"   What's Beta Version ?                "," ",10,'b',0,0,1,0},
                            {16,19,"   Return To DBANK ...                  "," ",3,'r',0,0,1,0},
                            {17,19,"   Return To DOS   ...                  "," ",13,'d',0,0,1,0}
                        };


