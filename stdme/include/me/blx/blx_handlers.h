/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx_handlers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:37:50 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/21 18:32:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLX_HANDLERS_H
# define BLX_HANDLERS_H
# include "me/blx/blx_key.h"
# include "me/types.h"

/// @brief Handle a key press event
/// @param keysym the key that was pressed
/// @param ctx the BLX context
/// @note this is an internal function, you should not call it yourself
int	blx_key_pressed_handler(t_keysym keysym, t_blx *ctx);

/// @brief Handle a key released event
/// @param keysym the key that was released
/// @param ctx the BLX context
/// @note this is an internal function, you should not call it yourself
int	blx_key_released_handler(t_keysym keysym, t_blx *ctx);

/// @brief Handle a exit event
/// @param ctx the BLX context
/// @note this is an internal function, you should not call it yourself
int	blx_key_exit_handler(t_blx *ctx);

#endif
