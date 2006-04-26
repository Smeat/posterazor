/*
	PosteRazor - Make your own poster!
	Copyright (C) 2005-2006 by Alessandro Portale
	http://posterazor.sourceforge.net/

	Polish translation by Grzegorz Wacikowski
	
	This file is part of PosteRazor

	PosteRazor is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	
	PosteRazor is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with PosteRazor; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef TranslationPolish_h
#define TranslationPolish_h

#include "TranslationInterface.h"

class TranslationPolish: public TranslationInterface
{
public:
	const char* LanguageName(void)                    {return "Polski";}

	const char* AbsoluteSize(void)                    {return "Rozmiar ca�kowity:";}
	const char* AllImageFormats(void)                 {return "Wszystkie formaty";}
	const char* Back(void)                            {return "Wr�c";}
	const char* Borders(void)                         {return "Marginesy";}
	const char* Bottom(void)                          {return "D�";}
	const char* BottomLeft(void)                      {return "D� z lewej";}
	const char* BottomRight(void)                     {return "D� z prawej";}
	const char* Cancel(void)                          {return "Anuluj";}
	const char* ColorType(void)                       {return "Typ koloru:";}
	const char* Custom(void)                          {return "W�asny";}   
	const char* FileCouldNotBeLoaded(void)            {return "Nie mo�na otworzy� pliku \"%s\"";}
	const char* Format(void)                          {return "Format:";}
	const char* Grayscale(void)                       {return "Skala szaro�ci";}
	const char* Height(void)                          {return "Wysoko��:";}
	const char* ImageAlignment(void)                  {return "Ustawienia obrazu";}
	const char* ImageInformations(void)               {return "Informacje o obrazie";}
	const char* ImageSize(void)                       {return "Rozmiar obrazu";}
	const char* InputImage(void)                      {return "Obraz wej�ciowy";}
	const char* Landscape(void)                       {return "Poziomo";}
	const char* Language(void)                        {return "J�zyk";}
	const char* LanguageExplanation(void)             {return "Wybierz j�zyk";}
	const char* LaunchPDFApplication(void)            {return "Uruchom przegladark� PDF po zapisaniu plakatu";}
	const char* Left(void)                            {return "Lewa";}
	const char* LoadAnInputImage(void)                {return StepTitle01();}
	const char* Monochrome(void)                      {return "Monochromatyczny";}
	const char* Next(void)                            {return "Dalej";}
	const char* Orientation(void)                     {return "Po�o�enie:";}
	const char* OverlappingPosition(void)             {return "Miejsce zaz�bienia";}
	const char* OverlappingSize(void)                 {return "Szeroko�� zaz�bienia";}
	const char* OverwriteFile(void)                   {return "Plik '%s' ju� instnieje.\nCzy chcesz go nadpisa�?";}
	const char* Pages(void)                           {return "strony";}
	const char* PaperFormat(void)                     {return "Rozmiar papieru";}
	const char* Palette(void)                         {return "Paleta";}
	const char* Portrait(void)                        {return "Pionowo";}
	const char* PosteRazorHelp(void)                  {return "PosteRazor pomoc";}
	const char* PosteRazorSettings(void)              {return "PosteRazor ustawienia";}
	const char* PosteRazorWebSite(void)               {return "PosteRazor strona www";}
	const char* PreviewWithOpenGL(void)               {return "Podgl�d z OpenGL";}
	const char* PreviewWithOpenGLExplanation(void)    {return "OpenGL umo�liwia p�ynny podgl�d na nowoczesnych komputerach. Mo�e wyd�u�y� proces podgl�du na starszych maszynach.";}
	const char* Resolution(void)                      {return "Rozdzielczo��:";}
	const char* Right(void)                           {return "Prawa";}
	const char* SaveThePoster(void)                   {return "Zapisz plakat";}
	const char* SaveThePosterAs(void)                 {return "Zapisz plakat jako";}
	const char* Settings(void)                        {return "Ustawienia...";}
	const char* Size(void)                            {return "Rozmiar:";}
	const char* SizeInPages(void)                     {return "Rozmiar na stronie:";}
	const char* SizeInPercent(void)                   {return "Rozmiar w procentach:";}
	const char* SizeInPixels(void)                    {return "Rozmiar (w pikselach):";}
	const char* SizeInUnitOfLength(void)              {return "Rozmiar (w %s):";}
	const char* Standard(void)                        {return "Standard";}
	const char* StepXOfY(void)                        {return "Krok %d z %d";}
	const char* Top(void)                             {return "G�ra";}
	const char* TopLeft(void)                         {return "G�ra z lewej";}
	const char* TopRight(void)                        {return "G�ra z prawej";}
	const char* UnitOfLength(void)                    {return "Jednostka d�ugo�ci";}
	const char* UnitOfLengthExplanation(void)         {return "Wybierz miar� d�ugo�ci, kt�ej chcesz u�ywa�";}
	const char* Width(void)                           {return "Szeroko��:";}


#include "PosteRazorHelpConstants.h"

#define POLISH_POSTERAZORHELSTEP                     "Krok"

#define POLISH_POSTERAZORHELPABOUT                   "O programie PosteRazor"
#define POLISH_POSTERAZORHELPMANUAL                  "Manual"
#define POLISH_POSTERAZORHELPSETTINGS                "Ustawienia"
#define POLISH_POSTERAZORHELPSTEPTITLE01             "Za�aduj obraz"
#define POLISH_POSTERAZORHELPSTEPTITLE02             "Ustawienie formatu papieru drukarki"
#define POLISH_POSTERAZORHELPSTEPTITLE03             "Definiowanie zaz�biania si�"
#define POLISH_POSTERAZORHELPSTEPTITLE04             "Ustawienie ko�cowego rozmiaru plakatu"
#define POLISH_POSTERAZORHELPSTEPTITLE05             "Zapisz plakat"
#define POLISH_POSTERAZORHELPINPUTFILEFORMATS        "Wspierane pliki wej�ciowe"
#define POLISH_POSTERAZORHELPWHYPDFOUTPUT            "Dlaczego na wyj�ciu plik PDF?"
#define POLISH_POSTERAZORHELPCODEFROMTHIRDPARTIES    "Dodatkowy kod"
#define POLISH_POSTERAZORHELPLICENSE                 "Licencja"

	const char* StepTitle01(void)                     {return POLISH_POSTERAZORHELPSTEPTITLE01;}
	const char* StepTitle02(void)                     {return POLISH_POSTERAZORHELPSTEPTITLE02;}
	const char* StepTitle03(void)                     {return POLISH_POSTERAZORHELPSTEPTITLE03;}
	const char* StepTitle04(void)                     {return POLISH_POSTERAZORHELPSTEPTITLE04;}
	const char* StepTitle05(void)                     {return POLISH_POSTERAZORHELPSTEPTITLE05;}
	const char* HelpHtml(void)
	{
		return	"<HTML>" POSTERAZORHELPENDLINE \
				"<BODY>" POSTERAZORHELPENDLINE \
					"<A name=\"" POSTERAZORHELPANCHORTOP "\"><CENTER><H1>PosteRazor 1.1 Krok</H1></CENTER></A>" POSTERAZORHELPENDLINE \

					"<H3>Contents</H3>" POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORABOUT "\">" POLISH_POSTERAZORHELPABOUT "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORMANUAL "\">" POLISH_POSTERAZORHELPMANUAL "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORSETTINGS "\">" POLISH_POSTERAZORHELPSETTINGS "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<UL>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">" POLISH_POSTERAZORHELSTEP " 1: " POLISH_POSTERAZORHELPSTEPTITLE01 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP02 "\">" POLISH_POSTERAZORHELSTEP " 2: " POLISH_POSTERAZORHELPSTEPTITLE02 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP03 "\">" POLISH_POSTERAZORHELSTEP " 3: " POLISH_POSTERAZORHELPSTEPTITLE03 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP04 "\">" POLISH_POSTERAZORHELSTEP " 4: " POLISH_POSTERAZORHELPSTEPTITLE04 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP05 "\">" POLISH_POSTERAZORHELSTEP " 5: " POLISH_POSTERAZORHELPSTEPTITLE05 "</A></LI>" POSTERAZORHELPENDLINE \
						"</UL>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORINPUTFILEFORMATS "\">" POLISH_POSTERAZORHELPINPUTFILEFORMATS "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORWHYPDFOUTPUT "\">" POLISH_POSTERAZORHELPWHYPDFOUTPUT "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES "\">" POLISH_POSTERAZORHELPCODEFROMTHIRDPARTIES "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORLICENSE "\">" POLISH_POSTERAZORHELPLICENSE "</A></B></LI>" POSTERAZORHELPENDLINE \
					"</UL><HR>" POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORABOUT, POLISH_POSTERAZORHELPABOUT) \
					POSTERAZORHELPINDENTATION "The PosteRazor rozcina obraz rastrowy na kawa�ki, kt&oacute;re mog� zosta� wydrukowane, a nast�pnie po��czone w plakat. Jako plik wej�ciowy, plik rastrowy sposr&oacute;d <A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">various</A> plik&oacute;w graficznych o wspieranych formatach. Zamiast bezpo�rednio drukowa� plakat, the PosteRazor tworzy wielostronicowy plik PDF, kt&oacute;ry zawiera kawalki plakatu.<br>" POSTERAZORHELPENDLINE \
					"Jest to oprogramowanie typu Open Source i zalezy od <a href=\"#" POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES "\">innych projekt&oacute;w tego typu</a>. " POSTERAZORHELPENDLINE \
					"The PosteRazor mo�na znale�� na <b>posterazor.sourceforge.net</b>." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUAL, POLISH_POSTERAZORHELPMANUAL) \
					POSTERAZORHELPINDENTATION "PosteRazor posiada interfejs u�ytkownika zbudowanu w oparciu o \"Wizard\". Wszelkie ustawienia plakatu tworzone s� w 5 krokach. Przyciski <b>Cofnij</b> i <b>Dalej</b> prowadz� przez wizarda.<br>" POSTERAZORHELPENDLINE \
					"Przycisk <b>?</b> otwiera okno pomocy z wyja�nieniem danego kroku.<br>" POSTERAZORHELPENDLINE \
					"Wszystkie pola wej�ciowe, np. rozmiar, itd mog� by�, jak zwykle, modyfikowany przy pomocy klawiatury oraz klikaj�c i przeci�gaj�c myszka w lewo lub w prawo. R&oacute;�ne przyciski myszy powi�kszaj�/pomniejszaj� warto�� w r&oacute;�nych krokach.<br>" POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Wszystkie wej�cia i wybory s� pami�tane do nast�pnego u�ycia PosteRazor." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORSETTINGS, POLISH_POSTERAZORHELPSETTINGS) \
					POSTERAZORHELPINDENTATION "Naciskaj�c przycisk <b>Ustawienia...</b> po lewej z do�u w menu g�&oacute;wnym, otwierane s� ustawienia PosteRazor." POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>Jednostka miary:</b> wybierz jednostk� miary, kt&oacute;r� b�dzisz u�ywa� w czasie pracy. Gdy jednostka zostanie zmieniona, wszystkie warto�ci zostaj� przeliczone automatycznie.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>J�zyk:</b> wybierz sw&oacute;j j�zyk. PosteRazor nie wymaga restartowanie po zmianie j�zyka.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Podgl�d z OpenGL:</b>Wybierz, Je�li PosteRazor powinien u�ywa� OpenGL do podgl�du obrazu. Zazwayczaj, w nowych komputerach OpenGL powinien by� szybszy i dawa� wi�ksz� dok�adno�� podgl�du ni� komputery nie obs�uguj�ce OpenGL. Je�eli PosteRazor wydaj� si� pracowa� wolno i nie reaguje, spr&oacute;buj czy nie b�dzie lepiej pracowa� po wy�aczeniu OpenGL.</LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP01, POLISH_POSTERAZORHELSTEP " 1: " POLISH_POSTERAZORHELPSTEPTITLE01) \
					POSTERAZORHELPINDENTATION "Za�aduj obraz klikaj�c na przycisk i wybieraj�c plik graficzny lub chwytaj�c i przeciagaj�c obraz na PosteRazor. Chwy� i przeci�gij dzia�a tak�e w pozosta�ych krokach.<br>" POSTERAZORHELPENDLINE \
					"Wiele <a href=\"#" POSTERAZORHELPANCHORINPUTFILEFORMATS "\">format&oacute;w plik&oacute;w i typ&oacute;w obraz&oacute;w </a> mo�e zosta� za�adowanych. Po za�adowaniu obrazu, najwa�niejsze informacje s� wypisane w polu <b>Informacje o obrazie</b> ." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP02, POLISH_POSTERAZORHELSTEP " 2: " POLISH_POSTERAZORHELPSTEPTITLE02) \
					POSTERAZORHELPINDENTATION "Zdefiniuj rozmiar papieru, kt&oacute;rego u�ywasz w swojej drukarce. Standardowy rozmiar papieru mo�e by� wybrany z opcji <b>Format</b> , wraz z po��dan�  <b>Orientacja</b> papieru. Mo�na tak�e zdefiniowa� w�asny rozmiar papieru w zak�adce <b>W�asny</b> . (Prosz� napisz do mnie email, je�li nie ma jakiego� standardowego rozmiaru do wyboru). " POSTERAZORHELPENDLINE \
					"Marginesy s� definiowane w polu <b>Marginesy</b>. Nawet je�li twoja drukarka nie wymaga (cho�by ma�ych) margines&oacute;w, jaki� margines mo�e by� konieczny by m&oacute;c sklei� kawa�ki plakatu w ca�o��." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP03, POLISH_POSTERAZORHELSTEP " 3: " POLISH_POSTERAZORHELPSTEPTITLE03) \
					POSTERAZORHELPINDENTATION "Kraw�dzie zachodz�ce s� konieczne jako tolerancja w czasie odcianania niepotrzebnych margines&oacute;w. Dodatkowo, tak jak marginesy, daje to wieksz� powierzchnie klejenia kawa�k&oacute;w w ca�o��. " POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "<b>Miejsce zaz�biania</b> okre�la brzeg jaki b�dzie zachodzi� na siebie z s�siednim kawa�kiem. Brzegi po drugiej stronie przenaczone do odci�cia (opr&oacute;cz zewn�trznych kawa�k&oacute;w)." POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP04, POLISH_POSTERAZORHELSTEP " 4: " POLISH_POSTERAZORHELPSTEPTITLE04) \
					POSTERAZORHELPINDENTATION "Okre�l ko�cowy rozmiar plakatu, jako jeden z trzech nast�puj�cych tryb&oacute;w, wybranych przyciskiem:<br>" POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>Calkowity rozmiar obrazu</b>: Chcesz mie� specyficzny rozmiar plakatu.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Rozmiar na stronach</b>: Chcesz u�yc ca�e strony i okre�li� ile chcesz ich u�y�.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Rozmiar obrazu w procentach</b>: Tw&oacute;j obraz wej�ciowy ma okre�lony rozmiar kt&oacute;ry jestdefiniowany przez ilo�� pikseli oraz dpi (kropek na cal) i chcesz powi�kszy� obraz.</LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Ratio szeroko�ci i wysoko�ci jest zawsze 1:1 i jest automatycznie przeliczane. W obszarze podgl�du, mo�esz zobaczy� zaz�biaj�ce si� powierzchnie, kt&oacute;re s� otoczone czerwonymi prostok�tami. " POSTERAZORHELPENDLINE \
					"<b>Po�o�enie obrazu</b> ustawia po�o�enie na kartce. Jest to przydatne je�li chcesz wkorzysta� niezu�yty papier." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP05, POLISH_POSTERAZORHELSTEP " 5: " POLISH_POSTERAZORHELPSTEPTITLE05) \
					POSTERAZORHELPINDENTATION "Zapisz plakat klikaj�c na przysisk zapisywania i okre�laj�c lokalizajc� nowego pliku. Sprawd� lub nie <b>Uruchom aplikacj� PDF po zapisaniu plakatu</b>, czy standardowa aplikacja PDF zainstalowana w stoim systemie operacyjnym powinna sie urychamia� automatycznie po zapisaniu pliku PDF." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORINPUTFILEFORMATS, POLISH_POSTERAZORHELPINPUTFILEFORMATS) \
					POSTERAZORHELPINDENTATION "Wi�kszo�� obraz&oacute;w rastrowych wspieranych przez FreeImage jest tak�e wspierana przez PosteRazor:<br>" POSTERAZORHELPENDLINE \
					"<b>BMP, pliki DDS, Dr. Halo, GIF, ICO, IFF, JBIG, JNG, JPEG/JIF, KOALA, LBM, Kodak PhotoCD, MNG, PCX, PBM, PGM, PNG, PPM, PhotoShop PSD, Sun RAS, TARGA, TIFF, WBMP, XBM, XPM.<br></b>" POSTERAZORHELPENDLINE \
					"PosteRazor odr&oacute;�nia obrazu czarno-bia�e, skal� szaro�ci, 4-bitow� palet�, 8-bitow� palet�, 24 bitowe RGB oraz CMYK (tylko z TIF). Obrazy RGB z kana�em alfa s� automatycznie ustawiane na bia�ym tle." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORWHYPDFOUTPUT, POLISH_POSTERAZORHELPWHYPDFOUTPUT) \
					POSTERAZORHELPINDENTATION "Dlaczego wyj�ciowe pliki PDF nie s� automatycznie drukowane? Po pierwsze tworca programu nie wie jeszcze jak \"wysy�a� obraz do drukarki\", na r&oacute;znych systemach operacyjnych, gdzie dzia�a PosteRazor. Tak�e, tworzenie PDF ma sens, je�li plakat b�dzie wydrukowany i poci�ty w domowych warunkach, a nastepnego dnia drukowany na kolorowej drukarce laserowej w pracy (gdy wszyscy inni pojd� ju� do domu). " POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Dlaczego PDF a nie inny obraz rastrowy na wyj�ciu? PDF daj� mo�liwo�� stworzenia the ca�ego obrazu i wirtualne jego poci�cie; nie tylko pomi�dzy pikselami, ale tak�e w u�amkach pikseli." POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES, POLISH_POSTERAZORHELPCODEFROMTHIRDPARTIES) \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>FLTK</b> jest u�ywane do interfejsu urzytkownika. Jest to ma�y (je�li chodzi o rozmiar), szybki, fun&easy do nauczenia oraz bardzo przeno�ny zestaw narz�dzi UI. <a href=\"http://www.fltk.org/\">www.fltk.org</a></LI>" POSTERAZORHELPENDLINE \
					"<LI><b>FreeImage</b> jest u�ywany do za�adowania i trzymania obrazu. <a href=\"http://freeimage.sourceforge.net/\">FreeImage website</a></LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Fl_Native_File_Chooser</b> jest u�ywany do otwierania plik&oacute;w i zapisywania. <a href=\"http://seriss.com/people/erco/fltk/Fl_Native_File_Chooser/\">Fl_Native_File_Chooser website</a></LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORLICENSE, POLISH_POSTERAZORHELPLICENSE) \
					"PosteRazor - Stw&oacute;rz sw&oacute;j w�asny plakat!<br>" POSTERAZORHELPENDLINE \
					"<a href=\"http://posterazor.sourceforge.net/\">posterazor.sourceforge.net</a><br>" POSTERAZORHELPENDLINE \
					"Copyright (C) 2005-2006 by Alessandro Portale<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"Ten program jest darmowy; mo�esz go rozprowadza� i/lub modyfikowa� go stosuj�c si� do warunk&oacute;w na <a href=\"http://www.gnu.org/licenses/gpl.txt\">GNU General Public License</a> opublikowana przed Free Software Foundation; r&oacute;wniez wersja 2 licencji lub ka�da nast�pna.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"Ten program jest rozprowadzany w nadziei, �e b�dzie przydatny,  jednak BEZ �ADNEJ GWARANCJI. Zobacz wi�cej detali GNU General Public License.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"Powiniene� otrzyma� kopie licencji GNU General Public License wraz z tym programem; je�li nie, napisz do Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA." POSTERAZORHELPENDLINE \
				"</BODY>" POSTERAZORHELPENDLINE \
			"</HTML>";
	}

	const int FlagImageWidth(void)                    {return 20;}
	const int FlagImageHeight(void)                   {return 11;}
	const unsigned char *FlagImageRGBData(void)
	{
		static const unsigned char flagRGBData[] =
		{
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,
			153,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,
			0,0,140,140,140,140,140,140,0,0,153,255,255,255,0,0,153,255,255,255,0,0,153,
			255,255,255,0,0,153,0,0,153,255,255,255,255,255,255,255,255,255,255,255,255,255,
			255,255,255,255,255,255,232,232,255,81,81,0,0,153,0,0,153,140,140,140,140,140,
			140,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,255,0,0,255,
			0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,255,255,255,255,255,255,255,255,255,
			255,255,140,140,140,140,140,140,0,0,153,0,0,153,255,255,255,0,0,153,255,255,255,
			0,0,153,255,255,255,0,0,153,255,255,255,255,255,255,255,232,232,255,81,81,255,
			0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,140,140,140,140,140,140,0,0,153,0,
			0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,0,0,153,255,0,0,255,0,0,255,0,0,
			255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,140,140,140,140,140,140,
			255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,221,202,
			202,255,81,81,255,0,0,255,0,0,255,255,255,255,255,255,255,255,255,255,255,255,
			255,255,255,255,255,255,255,255,255,255,255,255,140,140,140,140,140,140,255,0,0,
			255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,0,0,255,255,255,255,0,0,255,0,0,255,
			255,255,255,255,255,255,0,0,255,0,0,255,0,0,0,0,153,0,0,153,0,0,153,140,140,140,
			140,140,140,255,255,255,255,255,255,255,255,255,253,151,152,255,0,0,0,0,153,0,0,
			153,255,255,255,255,0,0,255,0,0,255,255,255,0,0,153,255,255,255,255,255,255,255,
			0,0,255,0,0,255,0,0,0,0,153,140,140,140,140,140,140,255,0,0,255,0,0,255,0,0,0,
			0,153,0,0,153,0,0,153,0,0,153,255,255,255,255,0,0,255,0,0,255,255,255,0,0,153,
			0,0,153,0,0,153,255,255,255,255,255,255,255,0,0,255,0,0,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140
		};

		return flagRGBData;
	}
};

static TranslationPolish polish;

#endif