#ifndef STRING_H
#define STRING_H

#include <iostream>


class String {
    char *pData;        ///< pointer az adatra
    size_t len;         ///< hossz lezáró nulla nélkül
public:
/// Kiírunk egy Stringet (debug célokra)
/// Ezt a tagfüggvényt elkészítettük, hogy használja a hibák felderítéséhez.
/// Igény szerint módosítható
/// @param txt - nullával lezárt szövegre mutató pointer.
///              Ezt a szöveget írjuk ki a debug információ előtt.
    void printDbg(const char *txt = "") const {
        std::cout << txt << "[" << len << "], "
                  << (pData ? pData : "(NULL)") << '|' << std::endl;
    }

/// Az első két feladatot előre megoldottuk, de lehet, hogy nem jól.
/// Az üres sztring reprezentációja nem szerencsés, mert így NULL pointerré
/// konvertál a c_str(), ami külön kezelést igényel a későbbiekben.
/// Ezt a teszt program sem fogadja el.
/// Gondolja végig, és változtassa meg!
/// Két lehetőség van:
///     a) nem NULL pointert tárol, hanem ténylegesen üres sztringet.
///     b) NULL-t tárol, de a c_str() üres sztringet ad vissza helyette
///        Ebben az esetben ügyelnie kell a másolásokra (másoló kostruktor op=) is,
///        nehogy NULL pointert kapjon az strcpy!
/// Bármelyik megoldás jó, mert ez az osztály belügye.


    /// Paraméter nélküli konstruktor:
    String() :pData(0), len(0) { pData = new char [len + 1]; pData[0] = '\0'; }

    /// Sztring hosszát adja vissza.
    /// @return sztring tényleges hossza (lezáró nulla nélkül).
    size_t size() const { return len; }

    /// C-sztringet ad vissza
    /// @return pointer a tárolt, vagy azzal azonos tartalmú nullával lezárt sztring-re.
    const char* c_str() const { return pData; }

/// Itt folytassa a tagfüggvények deklarációit a feladatoknak megfelelően.
    String(char const);

    String(char const *);

    String(String const &);

    ~String();

    String& operator=(String const &);

    String operator+(char const) const;

    String operator+(String const) const;

    char& operator[](size_t);
    
    char& operator[](size_t) const;

    size_t getlen() const { return len; }

}; /// Itt az osztály deklarációjának vége

/// Ide kerülnek a globális operátorok deklarációi.
String operator+(char const, String const);

std::ostream& operator<<(std::ostream&, String const &);

std::istream& operator>>(std::istream&, String&);
#endif
