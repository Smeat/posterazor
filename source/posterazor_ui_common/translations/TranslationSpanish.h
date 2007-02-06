/*
	PosteRazor - Make your own poster!
	Copyright (C) 2005-2007 by Alessandro Portale
	http://posterazor.sourceforge.net/

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

#ifndef TranslationSpanish_h
#define TranslationSpanish_h

#include "TranslationInterface.h"
#include "TranslationConstants.h"

#define SPANISH_POSTERAZORWEBSITEURL POSTERAZORWEBSITEDOMAIN

class TranslationSpanish: public TranslationInterface
{
public:
	const char* languageName(void)                    {return "Espa�ol";}

	const char* absoluteSize(void)                    {return "Tama�o total:";}
	const char* allImageFormats(void)                 {return "Todos los formatos de imagen";}
	const char* back(void)                            {return "Atr�s";}
	const char* borders(void)                         {return "M�rgenes";}
	const char* bottom(void)                          {return "Inferior";}
	const char* bottomLeft(void)                      {return "Inferior izquierdo";}
	const char* bottomRight(void)                     {return "Inferior derecho";}
	const char* cancel(void)                          {return "Cancelar";}
	const char* colorType(void)                       {return "Tipo de color:";}
	const char* custom(void)                          {return "Personalizado";}
	const char* fileCouldNotBeLoaded(void)            {return "No se pudo cargar el archivo \"%s\".";}
	const char* fileCouldNotBeSaved(void)             {return "No se pudo guardar el archivo \"%s\".";}
	const char* format(void)                          {return "Formato:";}
	const char* grayscale(void)                       {return "Escala de grises";}
	const char* height(void)                          {return "Altura:";}
	const char* imageAlignment(void)                  {return "Alineaci�n de imagen";}
	const char* imageInformations(void)               {return "Informaciones de imagen";}
	const char* imageSize(void)                       {return "Tama�o de imagen";}
	const char* inputImage(void)                      {return "Imagen de entrada";}
	const char* landscape(void)                       {return "Horizontal";}
	const char* language(void)                        {return "Idioma";}
	const char* languageExplanation(void)             {return "Escoja su idioma";}
	const char* launchPDFApplication(void)            {return "Ejecutar la aplicaci�n PDF tras guardar el poster";}
	const char* left(void)                            {return "Izquierdo";}
	const char* loadAnInputImage(void)                {return stepTitle01();}
	const char* monochrome(void)                      {return "Monocromo";}
	const char* next(void)                            {return "Siguiente";}
	const char* orientation(void)                     {return "Orientaci�n:";}
	const char* overlappingPosition(void)             {return "Posici�n de superposici�n";}
	const char* overlappingSize(void)                 {return "Tama�o de superposici�n";}
	const char* overwriteFile(void)                   {return "El archivo '%s' ya existe.\n�Desea sobrescribirlo?";}
	const char* pages(void)                           {return "p�ginas";}
	const char* paperFormat(void)                     {return "Formato de papel";}
	const char* palette(void)                         {return "Paleta";}
	const char* portrait(void)                        {return "Vertical";}
	const char* posteRazorHelp(void)                  {return "Ayuda de PosteRazor";}
	const char* posteRazorSettings(void)              {return "Configuraci�n de PosteRazor";}
	const char* posteRazorWebSiteURL(void)            {return SPANISH_POSTERAZORWEBSITEURL;}
	const char* posteRazorWebSite(void)               {return "Sitio web de PosteRazor";}
	const char* previewWithOpenGL(void)               {return "Previsualizar con OpenGL";}
	const char* previewWithOpenGLExplanation(void)    {return "OpenGL posibilita una previsualizaci�n f�cil en los sistemas modernos. En sistemas antiguos puede ralentizar la previsualizaci�n.";}
	const char* resolution(void)                      {return "Resoluci�n:";}
	const char* right(void)                           {return "Derecho";}
	const char* saveThePoster(void)                   {return "Guardar el p�ster";}
	const char* saveThePosterAs(void)                 {return "Guardar el p�ster como";}
	const char* settings(void)                        {return "Configuraciones...";}
	const char* Size(void)                            {return "Tama�o:";}
	const char* sizeInPages(void)                     {return "Tama�o en p�ginas:";}
	const char* sizeInPercent(void)                   {return "Tama�o en porcentaje:";}
	const char* sizeInPixels(void)                    {return "Tama�o (en p�x.):";}
	const char* sizeInUnitOfLength(void)              {return "Tama�o (in %s):";}
	const char* standard(void)                        {return "Est�ndar";}
	const char* stepXOfY(void)                        {return "Paso %d de %d";}
	const char* top(void)                             {return "Superior";}
	const char* topLeft(void)                         {return "Superior izquierdo";}
	const char* topRight(void)                        {return "Superior derecho";}
	const char* unitOfLength(void)                    {return "Unidad de longitud";}
	const char* unitOfLengthExplanation(void)         {return "Escoja la unidad con la que desea trabajar";}
	const char* width(void)                           {return "Anchura:";}


#define SPANISH_POSTERAZORHELSTEP                         "Paso"

#define SPANISH_POSTERAZORHELPABOUT                       "Acerca de PosteRazor"
#define SPANISH_POSTERAZORHELPMANUAL                      "Manual"
#define SPANISH_POSTERAZORHELPSETTINGS                    "Configuraciones"
#define SPANISH_POSTERAZORHELPSTEPTITLE01                 "Cargar una imagen de entrada"
#define SPANISH_POSTERAZORHELPSTEPTITLE02                 "Definir el formato del papel de impresora"
#define SPANISH_POSTERAZORHELPSTEPTITLE03                 "Definir la superposici�n del mosaico de imagen"
#define SPANISH_POSTERAZORHELPSTEPTITLE04                 "Definir el tama�o final del p�ster"
#define SPANISH_POSTERAZORHELPSTEPTITLE05                 "Guardar el p�ster"
#define SPANISH_POSTERAZORHELPINPUTFILEFORMATS            "Archivos soportados para imagen de entrada"
#define SPANISH_POSTERAZORHELPWHYPDFOUTPUT                "�Por qu� un PDF de salida?"
#define SPANISH_POSTERAZORHELPCODEFROMTHIRDPARTIES        "C�digo de terceros"
#define SPANISH_POSTERAZORHELPLICENSE                     "Licencia"

	const char* stepTitle01(void)                     {return SPANISH_POSTERAZORHELPSTEPTITLE01;}
	const char* stepTitle02(void)                     {return SPANISH_POSTERAZORHELPSTEPTITLE02;}
	const char* stepTitle03(void)                     {return SPANISH_POSTERAZORHELPSTEPTITLE03;}
	const char* stepTitle04(void)                     {return SPANISH_POSTERAZORHELPSTEPTITLE04;}
	const char* stepTitle05(void)                     {return SPANISH_POSTERAZORHELPSTEPTITLE05;}
	const char* helpHtml(void)
	{
		return	"<HTML>" POSTERAZORHELPENDLINE \
				"<BODY>" POSTERAZORHELPENDLINE \
					"<A name=\"" POSTERAZORHELPANCHORTOP "\"><CENTER><H1>Ayuda de PosteRazor "POSTERAZORVERSION"</H1></CENTER></A>" POSTERAZORHELPENDLINE \

					"<H3>Contenidos</H3>" POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORABOUT "\">" SPANISH_POSTERAZORHELPABOUT "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORMANUAL "\">" SPANISH_POSTERAZORHELPMANUAL "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORSETTINGS "\">" SPANISH_POSTERAZORHELPSETTINGS "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<UL>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">" SPANISH_POSTERAZORHELSTEP " 1: " SPANISH_POSTERAZORHELPSTEPTITLE01 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP02 "\">" SPANISH_POSTERAZORHELSTEP " 2: " SPANISH_POSTERAZORHELPSTEPTITLE02 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP03 "\">" SPANISH_POSTERAZORHELSTEP " 3: " SPANISH_POSTERAZORHELPSTEPTITLE03 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP04 "\">" SPANISH_POSTERAZORHELSTEP " 4: " SPANISH_POSTERAZORHELPSTEPTITLE04 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP05 "\">" SPANISH_POSTERAZORHELSTEP " 5: " SPANISH_POSTERAZORHELPSTEPTITLE05 "</A></LI>" POSTERAZORHELPENDLINE \
						"</UL>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORINPUTFILEFORMATS "\">" SPANISH_POSTERAZORHELPINPUTFILEFORMATS "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORWHYPDFOUTPUT "\">" SPANISH_POSTERAZORHELPWHYPDFOUTPUT "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES "\">" SPANISH_POSTERAZORHELPCODEFROMTHIRDPARTIES "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORLICENSE "\">" SPANISH_POSTERAZORHELPLICENSE "</A></B></LI>" POSTERAZORHELPENDLINE \
					"</UL><HR>" POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORABOUT, SPANISH_POSTERAZORHELPABOUT) \
					POSTERAZORHELPINDENTATION "PosteRazor corta una imagen r�ster en partes que puedan ser impresas con una impresora y que se puedan unir para formar un p�ster. Se puede utilizar como imagen de entrada ficheros r�ster de <A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">varios</A> formatos de archivo de imagen. En lugar de imprimir directamente el p�ster, PosteRazor produce un archivo PDF de varias p�ginas que contiene el mosaico del p�ster.<br>" POSTERAZORHELPENDLINE \
					"Este es un programa de c�digo abierto que depende de <a href=\"#" POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES "\">otros proyectos de c�digo abierto</a>. " POSTERAZORHELPENDLINE \
					"PosteRazor est� alojado en <b>posterazor.sourceforge.net</b>." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUAL, SPANISH_POSTERAZORHELPMANUAL) \
					POSTERAZORHELPINDENTATION "PosteRazor tiene una interf�z de usuario organizada en un estilo de \"Asistente\". Todos los ajustes para la creaci�n del p�ster pueden ser realizados en 5 Pasos. Los botones <b>Atr�s</b> y <b>Siguiente</b> sirven para navegar a trav�s de estos pasos.<br>" POSTERAZORHELPENDLINE \
					"El bot�n <b>?</b> abre una ventana de ayuda con una explicaci�n del paso actual.<br>" POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Todas las entradas y elecciones son recordadas hasta el siguiente uso de PosteRazor." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORSETTINGS, SPANISH_POSTERAZORHELPSETTINGS) \
					POSTERAZORHELPINDENTATION "Al pulsar el bot�n <b>Configuraciones...</b> de la parte inferior izquierda del di�logo principal se abre el di�logo de opciones de PosteRazor." POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>Unidad de longitud:</b> selecciona la unidad de longitud con la que trabajar. Cuando se cambia de unidad todos los valores predefinidos, y los que usted ya ha definido, son transformados a la nueva unidad.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Idioma:</b> selecciona su idioma. PosteRazor no necesita ser reiniciado cuando se cambia el idioma.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Previsualizar con OpenGL:</b> selecciona si PosteRazor debe usar OpenGL para la previsualizaci�n de la imagen. Normalmente, en los sistemas modernos OpenGL deber�a ser m�s r�pido y dar una previsualizaci�n m�s precisa que en la forma no-OpenGL. Si el programa parece ralentizarse y no responde, verifique si funciona mejor sin el OpenGL.</LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP01, SPANISH_POSTERAZORHELSTEP " 1: " SPANISH_POSTERAZORHELPSTEPTITLE01) \
					POSTERAZORHELPINDENTATION "Cargue una imagen haciendo clic sobre el bot�n del icono de Abrir y seleccione un archivo de imagen, o arrastre y suelte un archivo de imagen dentro de PosteRazor. La funci�n arrastrar-y-soltar tambi�n opera en los dem�s pasos.<br>" POSTERAZORHELPENDLINE \
					"Se pueden cargar muchos <a href=\"#" POSTERAZORHELPANCHORINPUTFILEFORMATS "\">formatos de archivo y tipos de imagen</a>. Despu�s de cargar la imagen se presentan las informaciones m�s relevantes en los campos de <b>Informaciones de imagen</b>." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP02, SPANISH_POSTERAZORHELSTEP " 2: " SPANISH_POSTERAZORHELPSTEPTITLE02) \
					POSTERAZORHELPINDENTATION "Defina el tama�o de la hoja de papel que usa su impresora. Puede seleccionar una hoja de papel de tama�o est�ndar desde el seleccionador <b>Formato</b>, as� como tambi�n la <b>Orientaci�n</b> de la hoja de papel. Alternativemente, puede definir un tama�o personalizado de papel en la pesta�a <b>Personalizado</b>. (Por favor escr�bame un email si echa de menos en el seleccionador su tama�o de papel est�ndar). " POSTERAZORHELPENDLINE \
					"Los m�rgenes del papel son definidos en los campos <b>M�rgenes</b>. A�n si su impresora no necesita m�rgenes de papel, podr�a ser necesario alg�n margen para pegar conjuntamente las �ltimas piezas del p�ster." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP03, SPANISH_POSTERAZORHELSTEP " 3: " SPANISH_POSTERAZORHELPSTEPTITLE03) \
					POSTERAZORHELPINDENTATION "La superposici�n del mosaico es necesaria para tener alguna tolerancia para cortar totalmente los bordes innecesarios de un lado. Adem�s, como en los m�rgenes del paso anterior, se da m�s �rea para pegar conjuntamente las piezas finales del p�ster. " POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "La <b>Posici�n de superposici�n</b> define los m�rgenes destinados a superponerse con las piezas de alrededor. Los m�rgenes de los lados opuestos son para ser cortados (excepto en las piezas m�s exteriores)." POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP04, SPANISH_POSTERAZORHELSTEP " 4: " SPANISH_POSTERAZORHELPSTEPTITLE04) \
					POSTERAZORHELPINDENTATION "Define el tama�o final del p�ster en uno de los siguientes tres modos que pueden ser seleccionados con los correspondientes botones:<br>" POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>Tama�o total de la imagen</b>: usted desea tener un tama�o determinado de p�ster.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Tama�o en p�ginas</b>: usted quiere usar hojas de papel enteras y especificar cu�ntas de ellas desea usar.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Tama�o de imagen en porcentaje</b>: su imagen de entrada tiene un cierto tama�o que es definido por el n�mero de p�xeles y dpi (puntos por pulgada) y usted quiere aumentar la imagen por un cierto factor.</LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "La proporci�n dimensional de anchura y altura es siempre 1:1 y es autom�ticamente calculada de nuevo. En el �rea de previsualizaci�n se pueden ver las �reas de superposici�n en rect�ngulos de color rojo claro. " POSTERAZORHELPENDLINE \
					"La <b>Alineaci�n de imagen</b> establece la alineaci�n de la imagen en el total del papel del p�ster. Esto es �til si desea conservar el papel no usado." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP05, SPANISH_POSTERAZORHELSTEP " 5: " SPANISH_POSTERAZORHELPSTEPTITLE05) \
					POSTERAZORHELPINDENTATION "Guarde el p�ster pulsando el bot�n Guardar y especificando un nombre para el archivo resultante. Marque o desmaque la opci�n <b>Ejecutar la aplicaci�n PDF tras guardar el poster</b> para, una vez guardado el archivo PDF resultante, iniciar autom�ticamente la aplicaci�n predeterminada en su sistema para el manejo de archivos PDF ." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORINPUTFILEFORMATS, SPANISH_POSTERAZORHELPINPUTFILEFORMATS) \
					POSTERAZORHELPINDENTATION "La mayor�a de los formatos de imagen r�ster soportados por FreeImage tambi�n son soportados por PosteRazor:<br>" POSTERAZORHELPENDLINE \
					"<b>BMP, archivos DDS, Dr. Halo, GIF, ICO, IFF, JBIG, JNG, JPEG/JIF, KOALA, LBM, Kodak PhotoCD, MNG, PCX, PBM, PGM, PNG, PPM, PhotoShop PSD, Sun RAS, TARGA, TIFF, WBMP, XBM, XPM.<br></b>" POSTERAZORHELPENDLINE \
					"PosteRazor distingue y maneja im�genes monocromas, de escala de grises, de paleta de 4-bit, de paleta de 8-bit, de 24 bit RGB, y CMYK (s�lo desde TIF). Las im�genes RGB con un canal alfa son compuestas autom�ticamente encima de un fondo blanco." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORWHYPDFOUTPUT, SPANISH_POSTERAZORHELPWHYPDFOUTPUT) \
					POSTERAZORHELPINDENTATION "�Por qu� un PDF resultante y no la impresi�n directa? Lo primero de todo es que el desarrollador de este programa no conoce (a�n) como \"enviar im�genes a la impresora\", en los diferentes sistemas operativos, que es a lo que PosteRazor aspira. Tambi�n el PDF tiene sentido si se hace un p�ster en casa con todo el tiempo necesario y al d�a siguiente se imprime en la impresora laser a color de la oficina (despu�s de que todo el mundo se haya ido a casa). " POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "�Por qu� un PDF y no otros formatos r�ster? El PDF da la posibilidad de implantar la imagen completa y cortarla virtualmente, y no s�lo en p�xeles, sino tambi�n con fracciones de p�xeles. Adem�s, parece m�s factible imprimir un archivo PDF de varias p�ginas en vez de m�ltiples archivos de imagen." POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES, SPANISH_POSTERAZORHELPCODEFROMTHIRDPARTIES) \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>FLTK</b> es usado por la interf�z de usuario. Es peque�o (por tama�o), r�pido, f�cil y divertido de aprender y muy portable. <a href=\"http://www.fltk.org/\">www.fltk.org</a></LI>" POSTERAZORHELPENDLINE \
					"<LI><b>FreeImage</b> es usado para cargar y manejar la imagen. Hace que �stas operaciones sean sencillas de ejecutar y es portable a las platformas en las que PosteRazor funciona. <a href=\"http://freeimage.sourceforge.net/\">Sitio web de FreeImage</a></LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Fl_Native_File_Chooser</b> es usado para los di�logos de Abrir y Guardar en la apariencia y percepci�n del sistema nativo. <a href=\"http://seriss.com/people/erco/fltk/Fl_Native_File_Chooser/\">Sitio web de Fl_Native_File_Chooser</a></LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORLICENSE, SPANISH_POSTERAZORHELPLICENSE) \
					"PosteRazor - �Haz tu propio p�ster!<br>" POSTERAZORHELPENDLINE \
					"<a href=\""SPANISH_POSTERAZORWEBSITEURL"\">posterazor.sourceforge.net</a><br>" POSTERAZORHELPENDLINE \
					"Copyright (C) 2005-2007 por Alessandro Portale<br>&nbsp;<br>" POSTERAZORHELPENDLINE \

					"<b>Traducci�n al Espa�ol por <a href=\"http://hispanicoweb.net\">Hisp�nicoWeb</a></b><br>" POSTERAZORHELPENDLINE \
					"<b>Traducci�n al Holand�s/Belga por Erik Wijkamp - Lochem (Los Paises Bajos) (e_wijkamp<b></b>@<b></b>yahoo<b></b>.<b></b>com).</b><br>" POSTERAZORHELPENDLINE \
					"<b>Traducci�n al Franc�s por Martin Loyer (traduction<b></b>@<b></b>loyer<b></b>.<b></b>name).</b><br>" POSTERAZORHELPENDLINE \
					"<b>Traducci�n al Polaco por Grzegorz Wacikowski.</b><br>" POSTERAZORHELPENDLINE \
					"<b>Traducci�n al Italiano por Stefano Nosei (kluster<b></b>@<b></b>imente<b></b>.<b></b>org).</b><br>" POSTERAZORHELPENDLINE \

					"&nbsp;<br>" \

					"Este programa es software libre; puede usted redistribuirlo y/o modificarlo bajo los t�rminos de la <a href=\"http://www.gnu.org/licenses/gpl.txt\">Licencia P�blica General GNU</a> publicada por la Free Software Foundation; ya sea en la versi�n 2 de la Licencia, o (a su opci�n) en cualquier versi�n posterior.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"Este programa es distribuido con la esperanza de que ser� �til, pero SIN NINGUNA GARANTIA; incluso sin la garant�a impl�cita de MERCANTIBILIDAD o APTITUD PARA UN PROPOSITO PARTICULAR. Vea la Licencia P�blica General GNU para m�s informaci�n.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"Usted deber�a haber recibido una copia de la Licencia P�blica General GNU junto con este programa; si no es as�, escriba a la Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA." POSTERAZORHELPENDLINE \
				"</BODY>" POSTERAZORHELPENDLINE \
			"</HTML>";
	}

	const int flagImageWidth(void)                    {return 20;}
	const int flagImageHeight(void)                   {return 11;}
	const unsigned char *flagImageRGBData(void)
	{
		static const unsigned char flagRGBData[] =
		{
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,
			0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,140,140,140,140,140,140,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,247,0,0,140,140,140,140,140,140,253,226,1,253,226,1,163,96,0,163,96,0,
			163,96,0,163,96,0,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,
			253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,140,140,140,140,140,
			140,253,226,1,0,0,0,253,226,1,117,104,0,117,104,0,253,226,1,0,0,0,253,226,1,253,
			226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,
			226,1,253,226,1,140,140,140,140,140,140,253,226,1,254,96,96,174,14,14,174,14,14,
			254,96,96,254,96,96,254,96,96,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,
			253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,140,140,140,140,140,
			140,253,226,1,254,96,96,174,14,14,174,14,14,174,14,14,174,14,14,254,96,96,253,
			226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,
			226,1,253,226,1,253,226,1,140,140,140,140,140,140,253,226,1,0,53,225,253,226,1,
			174,14,14,174,14,14,253,226,1,0,53,225,253,226,1,253,226,1,253,226,1,253,226,1,
			253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,254,227,1,140,140,
			140,140,140,140,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			140,140,140,140,140,140,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140
		};

		return flagRGBData;
	}
};

static TranslationSpanish spanish;

#endif
