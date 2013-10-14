QRadioPredict
====

QRadioPredict is an experimental software for VHF-UHF propagation prediction and radio coverage analysis. Currently it works on Linux and has the following features:
- Uses the Irregular Terrain Model, also known as Longley-Rice
- Can be used as a repeater site planing tool
- Static signal plot coverage, distance configurable
- Up to four ground stations and one mobile station
- Uses public available data
- Uses OpenStreetMap tiles or public sattelite imagery as background
- Elevation profiles are taken from NASA 1 degree SRTM 3 arcsec elevation files (*.hgt) obtainable from various sources
- Predicts radio signal quality on different frequencies simultaneously
- Can be connected to Flightgear to use its powerful radio capabilities
- Displays APRS stations according to a time filter configurable by the user
- Has an internal APRS client which can be used to display stations as a landmark
- Uses a new algorithm for glound clutter attenuation prediction, based on a ray model.Foliage and urban loss over flat or rugged terrain can be calculated on point-to-point links
- Terrain type data is taken from Corine CLC2006 shapefiles, which gives great accuracy for all of Europe
- Can use antenna radiation patterns generated by 4NEC2 or other NEC2 compatible antenna modelling programs
- Is completely integrated with Flightgear, the open source flight simulator, which has real-time radio prediction capabilities


QRadioPredict can operate as a traditional standalone program with static plots and radio links, or can be connected to Flightgear, the free flight simulator, in order to use it's powerful radio simulation.


Download
--------

QRadioPredict is distributed as source code package and binaries for Linux. Please see https://sourceforge.net/projects/qradiopredict/ for downloads.
To run QRadioPredict you need to have installed the following:
- Qt >= 5.0
- Sqlite 3
- GDAL >= 1.9.2 with GEOS bindings
- GEOS

On Debian: apt-get install gdal-bin libgdal1 libgdal1-dev libgeos-3.3.3 libgeos-dev libsqlite3-0


Usage
-----

Run the bash script qradiopredict.
The first time you start QRadioPredict you should open Edit -> Settings and set your local preferences and paths. 
Then, you might want to add a mobile station on the map, and up to four ground stations. Set the locations for the mobile using the flightplan tab. Each ground station tab has a button which generates 2D plots on the map. Set the opacity of the plot using the slider on the top right side, and the plot distance using the filed just below the opacity slider. Run the program standalone, or connect it to Flightgear by pressing the "Start Flightgear" button and then after it has started, the connect button. Send all data to Flightgear by pressing the third button, which should start your simulation.
The terrain data format is NASA SRTM 3 arcsec, in HGT files which are 2884802 bytes in size.
The clutter data should be shapefiles obtained from the CLC2006 project, and cropped to 1 degree size. Use the clip.py script to crop the shapefiles to the required size. Needs OGR and GDAL installed. Adjust the numbers to your location.

Known problems
--------------

Very slow static plot generation when enabling ground clutter: to be resolved in a future release.
See the bug tracker on Github: https://github.com/k/QRadioPredict/issues


Getting help and reporting bugs
-------------------------------

You can either file a ticket at https://sourceforge.net/projects/qradiopredict/ or open a thread in the forums.

Installation from source
------------------------

The source code is hosted on Github: https://github.com/k/qradiopredict

To compile qradiopredict from source you need the following dependencies:
- Qt 5
- Sqlite 3
- GDAL >= 1.7.0 compiled with GEOS (if using clutter attenuation)
- optionally Qt Creator (qradiopredict works with Qt 5)
On Debian: apt-get install gdal-bin libgdal1 libgdal1-dev libgeos-3.3.3 libgeos-dev libsqlite3-0

QRadioPredict comes with a simple qmake build setup. It can be compiled from within Qt Creator or in a terminal:

<pre>
$ git clone https://github.com/k/qradiopredict.git qradiopredict
$ cd qradiopredict
$ mkdir build
$ cd build
$ qmake ..
$ make
</pre>

To build in debug mode add "CONFIG+=debug" to the qmake step above. There are also some other qmake options, see the qradiopredict.pro file.


Credits and License
-------------------

QRadioPredict is designed and developed by Adrian Musceac YO8RZZ, and it is licensed under the GNU General Public License version 2.
The Irregular Terrain Model was originally developed by the U.S. Department of Commerce NTIA/ITS - Institute for Telecommunication Sciences and converted to C++ and improved by several others.
The MapGraphics library was coded by Raptorswing and comes with a FreeBSD license.
Following people and organisations have contributed:

- Holger Schurig, documenting the ITM source code in a good fashion
- Raptorswing, providing the MapGraphics library, upon which this program is based

Also thanks to Durk Talsma, Flightgear developer, who encouraged me to contribute my code, and Torsten Dreyer, for giving me a detailed lesson of Flightgear internal working.

Some of the icons are from the GNOME and KDE icon themes.

Let me know if somebody or something is missing from the list!

Adrian YO8RZZ 
