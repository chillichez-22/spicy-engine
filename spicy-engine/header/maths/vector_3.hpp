#pragma once

/**
 * @brief A vector of floats with 3 components: x, y, z.
 * 
 */
struct Vector3{

    float x;
    float y;
    float z;
};


/**
 * @brief Returns the addition of two Vector3s.
 * 
 * @param vectorOne First vector to add.
 * @param vectorTwo Second vector to add.
 * 
 * @return New Vector3 of the added Vector3s.
 */
Vector3 add( Vector3 vectorOne, Vector3 vectorTwo );

/**
 * @brief Returns the subtraction of two Vector3s. 
 * 
 * @param vectorOne First vector to subtract.
 * @param vectorTwo Second vector to subtract.
 * 
 * @return New Vector3 of the subtracted Vector3s.
 */
Vector3 sub( Vector3 vectorOne, Vector3 vectorTwo );

/**
 * @brief Returns the multiplication of two Vector3s. 
 * 
 * @param vectorOne First vector to multiply.
 * @param vectorTwo Second vector to multiply.
 * 
 * @return New Vector3 of the divided Vector3s.
 */
Vector3 multiply( Vector3 vectorOne, Vector3 vectorTwo );

/**
 * @brief Returns the division of two Vector3s. 
 * 
 * @param vectorOne First vector to divide.
 * @param vectorTwo Second vector to divide.
 * 
 * @return New Vector3 of the divided Vector3s.
 */
Vector3 divide( Vector3 vectorOne, Vector3 vectorTwo );
