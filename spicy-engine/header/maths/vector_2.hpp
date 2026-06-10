#pragma once

/**
 * @brief A vector of floats with 2 components: x, y.
 * 
 */
struct Vector2{

    float x;
    float y;
};

/**
 * @brief Returns the addition of two Vector2s.
 * 
 * @param vectorOne First vector to add.
 * @param vectorTwo Second vector to add.
 * 
 * @return New Vector2 of the added Vector2s.
 */
Vector2 add( Vector2 vectorOne, Vector2 vectorTwo );

/**
 * @brief Returns the subtraction of two Vector2s. 
 * 
 * @param vectorOne First vector to subtract.
 * @param vectorTwo Second vector to subtract.
 * 
 * @return New Vector2 of the subtracted Vector2s.
 */
Vector2 sub( Vector2 vectorOne, Vector2 vectorTwo );

/**
 * @brief Returns the multiplication of two Vector2s. 
 * 
 * @param vectorOne First vector to multiply.
 * @param vectorTwo Second vector to multiply.
 * 
 * @return New Vector2 of the divided Vector2s.
 */
Vector2 multiply( Vector2 vectorOne, Vector2 vectorTwo );

/**
 * @brief Returns the division of two Vector2s. 
 * 
 * @param vectorOne First vector to divide.
 * @param vectorTwo Second vector to divide.
 * 
 * @return New Vector2 of the divided Vector2s.
 */
Vector2 divide( Vector2 vectorOne, Vector2 vectorTwo );

