#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <vector>
#include <functional>

namespace Templates
{
    // T est le nom de type passé à la fonction lors de son utilisation
    // Filterobjects<Post>()
    template<typename T>
    // Le paramètre de Filterobjects est une fonction qui retourne un bool et
    // prend un pointeur vers T comme paramètre
    std::vector<T*> Filterobjects(std::function<bool(T*)> validator) {
        std::vector<T*> result;

        //std::vector<T*>::iterator iter, iter_end;
        //auto permet de deviner le type de la variable
        auto iter = T::objects.begin();
        auto iter_end = T::objects.end();
        // Le affectations de iter et iter_end ont été faites avant la boucle
        // Pas besoin de la reproduire dans l'en-tête de la boucle
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
