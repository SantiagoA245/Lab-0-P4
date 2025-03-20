#include <dataTypes.cpp>

// Clase abstracta
class publicacion {
    private:
        string DOI;
        string Titulo;
        DTFecha Fecha;
        DTRefer DT;
    public:
        // Constructor por defecto
        publicacion () {}
        // Constructor con parametros
        publicacion(string doi, string titulo, DTFecha fecha, DTRefer dt) 
            : DOI(doi), Titulo(titulo), Fecha(fecha), DT(dt) {}  // Inicialización de miembros

        // Destructor
        virtual ~publicacion() {}

        DTRefer get_DT() {
            return this->DT;
        }

        // Método virtual puro
        virtual bool contienePalabra(string palabra) = 0;
};