#pragma once

/**
 * @brief A vector of floats with 4 components: x, y, z, w.
 * 
 */
struct Vector4{

    float x;
    float y;
    float z;
    float w;
};


/**
 * @brief Returns the addition of two Vector4s.
 * 
 * @param vectorOne First vector to add.
 * @param vectorTwo Second vector to add.
 * 
 * @return New Vector4 of the added Vector4s.
 */
Vector4 add( Vector4 vectorOne, Vector4 vectorTwo );

/**
 * @brief Returns the subtraction of two Vector4s. 
 * 
 * @param vectorOne First vector to subtract.
 * @param vectorTwo Second vector to subtract.
 * 
 * @return New Vector4 of the subtracted Vector4s.
 */
Vector4 sub( Vector4 vectorOne, Vector4 vectorTwo );

/**
 * @brief Returns the multiplication of two Vector4s. 
 * 
 * @param vectorOne First vector to multiply.
 * @param vectorTwo Second vector to multiply.
 * 
 * @return New Vector4 of the divided Vector4s.
 */
Vector4 multiply( Vector4 vectorOne, Vector4 vectorTwo );

/**
 * @brief Returns the division of two Vector4s. 
 * 
 * @param vectorOne First vector to divide.
 * @param vectorTwo Second vector to divide.
 * 
 * @return New Vector4 of the divided Vector4s.
 */
Vector4 divide( Vector4 vectorOne, Vector4 vectorTwo );
