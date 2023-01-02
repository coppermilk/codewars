// [Kata] https://www.codewars.com/kata/5279f6fe5ab7f447890006a7/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
PeakData pick_peaks(const std::vector<int>& v) {
    /* Returns the positions and the values of the "peaks" (or local maxima) of a numeric array.*/

    PeakData pd;
    if (v.empty()) {
        return pd;
    }else {
        unsigned long local_max_indx = 0;

        bool is_lover_before = false;
        bool is_hier_after = false;
        bool is_plato = false;

        for (unsigned long i = 0; i < v.size() - 1; ++i) {
            if (v[i] < v[i + 1]) {
                is_lover_before = true;
                is_plato = false;
            }
            else if (v[i] > v[i + 1] && is_lover_before) {
                if (!is_plato) {
                    /* If this not plato update value.*/
                    local_max_indx = i;
                }
                is_plato = false;
                is_hier_after = true;

            }
            else if (v[i] == v[i + 1] && is_lover_before && (!is_plato)) {
                /* Store value in case if this plato.*/
                is_plato = true;
                local_max_indx = i;
            }

            if (is_lover_before && is_hier_after) {
                
                pd.pos.push_back(local_max_indx);
                pd.peaks.push_back(v[local_max_indx]);
                is_lover_before = is_hier_after = false;
            }

        }
    }
    return pd;
}