#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <vector>
#include <functional>

namespace Templates
{
    // T est le nom de type pass� � la fonction lors de son utilisation
    // Filterobjects<Post>()
    template<typename T>
    // Le param�tre de Filterobjects est une fonction qui retourne un bool et
    // prend un pointeur vers T comme param�tre
    std::vector<T*> Filterobjects(std::function<bool(T*)> validator) {
        std::vector<T*> result;

        //std::vector<T*>::iterator iter, iter_end;
        //auto permet de deviner le type de la variable
        auto iter = T::objects.begin();
        auto iter_end = T::objects.end();
        // Le affectations de iter et iter_end ont �t� faites avant la boucle
        // Pas besoin de la reproduire dans l'en-t�te de la boucle
        for (; iter != iter_end; ++iter) {
            T* object = *iter;
            // Validator est une fonction
            if (validator(object)) {
                result.push_back(object);
            }
        }
        return result;
    }
};

#endif // TEMPLATES_H
