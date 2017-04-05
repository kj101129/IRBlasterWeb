// BitDevices.h
//
// Defines devices to be used with bit bang messaging
// Define the buttons / codes as pairs of strings (name:hex code)
// The data structure then defines basic pulse coding, bit length etc

#define NUMBER_DEVICES 10

//lgtv, yamaha, youview fully defined
//nec,panasonic,jvc,samsung,sony,rc51,rc61 untested placeholders and need button codes

char* lgtvMsgs[] = {
	"LGTV-ON","20DF10EF",
	"HELP","20DF5EA1",
	"RATIO","20DF9E61",
	"INPUT","20DFD02F",
	"TVRAD","20DF0FF0",
	"KEY1","20DF8877",
	"KEY2","20DF48B7",
	"KEY3","20DFC837",
	"KEY4","20DF28D7",
	"KEY5","20DFA857",
	"KEY6","20DF6897",
	"KEY7","20DFE817",
	"KEY8","20DF18E7",
	"KEY9","20DF9867",
	"KEYLIST","20DFCA35",
	"KEY0","20DF08F7",
	"KEYVIEW","20DF58A7",
	"VOLUMEUP","20DF40BF",
	"FAV","20DF7887",
	"PROGRAMUP","20DF00FF",
	"INFO","20DF55AA",
	"VOLUMEDOWN","20DFC03F",
	"MUTE","20DF906F",
	"PROGRAMMEDOWN","20DF807F",
	"SETTINGS","20DFC23D",
	"HOME","20DF3EC1",
	"MYAPPS","206FA15E",
	"CURSORUP","20DF02FD",
	"CURSORLEFT","20DFE01F",
	"CURSOROK","20DF22DD",
	"CURSORRIGHT","20DF609F",
	"CURSORDOWN","20DF827D",
	"BACK","20DF14EB",
	"GUIDE","20DFD52A",
	"EXIT","20DFDA25",
	"RED","20DF4EB1",
	"GREEN","20DF8E71",
	"YELLOW","20DFC639",
	"BLUE","20DF8679",
	"TEXT","20DF04FB",
	"TOPT","20DF847B",
	"QMENU","20DFA25D",
	"STOP","20DF8D72",
	"PLAY","20DF0DF2",
	"PAUSE","20DF5DA2",
	"FASTBACK","20DFF10E",
	"FASTFORWARD","20DF718E",
	"RECORD","20DFBD42",
	"SAVING","20DFA956",
	"AD ","20DF8976",
	"APP","20DFF906",
	NULL
};


char* yamahaMsgs[] = {
	"YAMAHA_ON","7E8154AB",
	"HDMI1","5EA1E21C",
	"HDMI2","5EA152AC",
	"HDMI3","5EA1B24C",
	"HDMI4","5EA10AF4",
	"AV1","5EA1CA34",
	"AV2","5EA16A94",
	"AV3","5EA19A64",
	"HDMI5","5EA10EF0",
	"AV4","5EA13AC4",
	"AV5","5EA1FA04",
	"AV6","5EA146B8",
	"SINGLESTAR","5EA116E8",
	"V-AUX","5EA1AA55",
	"USB","FE804EB0",
	"NET","FE80FC03",
	"AUDIO","5EA1A658",
	"FM","FE801AE4",
	"AM","FE80AA54",
	"PRESETUP","FE80DA24",
	"TUNINGUP","FE808678",
	"INFO","5EA1E41A",
	"MEMORY","FE80E618",
	"PRESETDOWN","FE807A84",
	"TUNINGDOWN","FE8026D8",
	"MOVIE","5EA111EE",
	"MUSIC","5EA1916E",
	"SURDECODE","5EA1B14E",
	"STRAIGHT","5EA16A95",
	"BEEP","5EA10CF3",
	"ENHANCER","5EA129D6",
	"DIRECT","5EA1BB44",
	"SCENE-DVD","5EA100FE",
	"SCENE-TV","5EA1C03E",
	"SCENE-NET","5EA1609E",
	"SCENE-RADIO","5EA1906E",
	"SETUP","5EA121DE",
	"KEYUP","5EA1B946",
	"OPTION","5EA1D628",
	"VOLUMEUP","5EA158A7",
	"KEYLEFT","5EA1F906",
	"KEYENTER","5EA17B84",
	"KEYRIGHT","5EA17986",
	"KEYRETURN","5EA155AA",
	"KEYDOWN","5EA139C6",
	"DISPLAY","FE8006F9",
	"VOLUMEDOWN","5EA1D827",
	"TOPMENU","5EA105FB",
	"POPUPMENU","5EA125DB",
	"MUTE","5EA138C7",
	"MODE","FE806699",
	"STOP","FE809669",
	"PAUSE","FE80E619",
	"PLAY","FE8016E9",
	"FASTBACK","FE8056A9",
	"FASTFORWARD","FE80D629",
	"BACkHOME","FE8036C9",
	"FORWARDEND","FE80B649",
	"KEY1","FE808A75",
	"KEY2","FE804AB5",
	"KEY3","FE80CA35",
	"KEY4","FE802AD5",
	"KEY5","FE80AA55",
	"KEY6","FE806A95",
	"KEY7","FE80EA15",
	"KEY8","FE801AE5",
	"KEY9","FE809A65",
	"KEY0","FE805AA5",
	"KEY+10","FE80DA25",
	"KEYENT","FE803AC5",
	NULL
};

char* youviewMsgs[] = {
	"YOUVIEW_ON","000800FF",
	"ZOOM","0008807F",
	"TEXT","00087689",
	"HELP","0008E817",
	"BTPLAYER","0008D22D",
	"MAINMENU","0008708F",
	"RED","000838C7",
	"GREEN","0008B847",
	"YELLOW","000858A7",
	"BLUE","00087887",
	"OUTERPLUS","0008F807",
	"INFO","0008C23D",
	"OUTERUP","000808F7",
	"OUTERMUTE","000818E7",
	"INNERLEFT","000848B7",
	"INNERUP","00088877",
	"INNEROK","0008C837",
	"INNERDOWN","0008A857",
	"INNERRIGHT","000828D7",
	"OUTERMINUS","000802FD",
	"OUTERBACK","0008827D",
	"OUTERDOWN","0008F00F",
	"FASTBACK","0008A659",
	"PLAY","000806F9",
	"PAUSE","000846B9",
	"FASTFORWARD","000826D9",
	"BACKHOME","00086699",
	"RECORD","00088679",
	"STOP","0008C639",
	"FORWARDEND","0008E619",
	"GUIDE","0008D827",
	"SEARCH","0008E21D",
	"CLOSE","00086897",
	"KEY1","0008C03F",
	"KEY2","000820DF",
	"KEY3","0008A05F",
	"KEY4","0008609F",
	"KEY5","0008E01F",
	"KEY6","000810EF",
	"KEY7","0008906F",
	"KEY8","000850AF",
	"KEY9","0008D02F",
	"KEYADDUP","000822DD",
	"KEY0","000830CF",
	"KEYDELETE","0008629D",
	NULL
};

char* necMsgs[] = {
	NULL
};

char* panasonicMsgs[] = {
	NULL
};

char* jvcMsgs[] = {
	NULL
};

char* samsungMsgs[] = {
	NULL
};

char* sonyMsgs[] = {
	NULL
};

char* rc51Msgs[] = {
	NULL
};

char* rc61Msgs[] = {
	NULL
};

deviceData devices[NUMBER_DEVICES] = {
	"lgtv",
	"H9000,L4500", //header
	NULL, //trailer
	"H550,L550",
	"H550,L1600",
	38000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	lgtvMsgs,
	
	"yamaha",
	"H9000,L4500", //header
	NULL, //trailer
	"H550,L550",
	"H550,L1600",
	38000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	yamahaMsgs,
	
	"youview",
	"H9000,L4500", //header
	NULL, //trailer
	"H550,L550",
	"H550,L1600",
	38000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	youviewMsgs,
	
	"nec",
	"H9000,L4500", //header
	NULL, //trailer
	"H550,L550",
	"H550,L1600",
	38000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	necMsgs,
	
	"panasonic",
	"H3500,L1750", //header
	NULL, //trailer
	"H500,L400",
	"H500,L1250",
	35000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	panasonicMsgs,
	
	"jvc",
	"H8000,L4000", //header
	NULL, //trailer
	"H600,L550",
	"H600,L1600",
	38000, //frequency
	0, //Special handling
	75, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	jvcMsgs,
	
	"samsung",
	"H4500,L4500", //header
	NULL, //trailer
	"H600,L600",
	"H600,L1700",
	38000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	samsungMsgs,
	
	"sony",
	"H2400,L600", //header
	NULL, //trailer
	"H650,L600",
	"H1250,L600",
	40000, //frequency
	0, //Special handling
	100, //repeat gap mSec
	33, //bit count
	2, // minimum repeat
	sonyMsgs,
	
	"rc51",
	"H890,L890,H890", //header
	"L890", //trailer
	"L890,H890",
	"H890,L890",
	36000, //frequency
	0, //Special handling
	45, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	rc51Msgs,

	"rc61",
	"H2700,L890,H450,L450", //header
	"L450", //trailer
	"L450,H450",
	"H450,L450",
	36000, //frequency
	1, //Special handling
	45, //repeat gap mSec
	33, //bit count
	1, // minimum repeat
	rc61Msgs

};

