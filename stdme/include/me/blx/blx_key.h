/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blx_key.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:15:50 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/21 17:37:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLX_KEY_H
# define BLX_KEY_H

# include "me/types.h"
# include "me/vec/vec_u8.h"

typedef enum e_keysym
{
	KB_space = 0x0020,
	KB_exclam = 0x0021,
	KB_quotedbl = 0x0022,
	KB_numbersign = 0x0023,
	KB_dollar = 0x0024,
	KB_percent = 0x0025,
	KB_ampersand = 0x0026,
	KB_apostrophe = 0x0027,
	KB_quoteright = 0x0027,
	KB_parenleft = 0x0028,
	KB_parenright = 0x0029,
	KB_asterisk = 0x002a,
	KB_plus = 0x002b,
	KB_comma = 0x002c,
	KB_minus = 0x002d,
	KB_period = 0x002e,
	KB_slash = 0x002f,
	KB_0 = 0x0030,
	KB_1 = 0x0031,
	KB_2 = 0x0032,
	KB_3 = 0x0033,
	KB_4 = 0x0034,
	KB_5 = 0x0035,
	KB_6 = 0x0036,
	KB_7 = 0x0037,
	KB_8 = 0x0038,
	KB_9 = 0x0039,
	KB_colon = 0x003a,
	KB_semicolon = 0x003b,
	KB_less = 0x003c,
	KB_equal = 0x003d,
	KB_greater = 0x003e,
	KB_question = 0x003f,
	KB_at = 0x0040,
	KB_A = 0x0041,
	KB_B = 0x0042,
	KB_C = 0x0043,
	KB_D = 0x0044,
	KB_E = 0x0045,
	KB_F = 0x0046,
	KB_G = 0x0047,
	KB_H = 0x0048,
	KB_I = 0x0049,
	KB_J = 0x004a,
	KB_K = 0x004b,
	KB_L = 0x004c,
	KB_M = 0x004d,
	KB_N = 0x004e,
	KB_O = 0x004f,
	KB_P = 0x0050,
	KB_Q = 0x0051,
	KB_R = 0x0052,
	KB_S = 0x0053,
	KB_T = 0x0054,
	KB_U = 0x0055,
	KB_V = 0x0056,
	KB_W = 0x0057,
	KB_X = 0x0058,
	KB_Y = 0x0059,
	KB_Z = 0x005a,
	KB_bracketleft = 0x005b,
	KB_backslash = 0x005c,
	KB_bracketright = 0x005d,
	KB_asciicircum = 0x005e,
	KB_underscore = 0x005f,
	KB_grave = 0x0060,
	KB_quoteleft = 0x0060,
	KB_a = 0x0061,
	KB_b = 0x0062,
	KB_c = 0x0063,
	KB_d = 0x0064,
	KB_e = 0x0065,
	KB_f = 0x0066,
	KB_g = 0x0067,
	KB_h = 0x0068,
	KB_i = 0x0069,
	KB_j = 0x006a,
	KB_k = 0x006b,
	KB_l = 0x006c,
	KB_m = 0x006d,
	KB_n = 0x006e,
	KB_o = 0x006f,
	KB_p = 0x0070,
	KB_q = 0x0071,
	KB_r = 0x0072,
	KB_s = 0x0073,
	KB_t = 0x0074,
	KB_u = 0x0075,
	KB_v = 0x0076,
	KB_w = 0x0077,
	KB_x = 0x0078,
	KB_y = 0x0079,
	KB_z = 0x007a,
	KB_braceleft = 0x007b,
	KB_bar = 0x007c,
	KB_braceright = 0x007d,
	KB_asciitilde = 0x007e,
	KB_BackSpace = 0xff08,
	KB_Tab = 0xff09,
	KB_Linefeed = 0xff0a,
	KB_Clear = 0xff0b,
	KB_Return = 0xff0d,
	KB_Pause = 0xff13,
	KB_Scroll_Lock = 0xff14,
	KB_Sys_Req = 0xff15,
	KB_Escape = 0xff1b,
	KB_Delete = 0xffff,
	KB_Home = 0xff50,
	KB_Left = 0xff51,
	KB_Up = 0xff52,
	KB_Right = 0xff53,
	KB_Down = 0xff54,
	KB_Prior = 0xff55,
	KB_Page_Up = 0xff55,
	KB_Next = 0xff56,
	KB_Page_Down = 0xff56,
	KB_End = 0xff57,
	KB_Begin = 0xff58,
	KB_F1 = 0xffbe,
	KB_F2 = 0xffbf,
	KB_F3 = 0xffc0,
	KB_F4 = 0xffc1,
	KB_F5 = 0xffc2,
	KB_F6 = 0xffc3,
	KB_F7 = 0xffc4,
	KB_F8 = 0xffc5,
	KB_F9 = 0xffc6,
	KB_F10 = 0xffc7,
	KB_F11 = 0xffc8,
	KB_F12 = 0xffc9,
	KB_Shift_L = 0xffe1,
	KB_Shift_R = 0xffe2,
	KB_Control_L = 0xffe3,
	KB_Control_R = 0xffe4,
	KB_Caps_Lock = 0xffe5,
	KB_Shift_Lock = 0xffe6,
	KB_Meta_L = 0xffe7,
	KB_Meta_R = 0xffe8,
	KB_Alt_L = 0xffe9,
	KB_Alt_R = 0xffea,
	KB_Super_L = 0xffeb,
	KB_Super_R = 0xffec,
	KB_Hyper_L = 0xffed,
	KB_Hyper_R = 0xffee,
}						t_keysym;

typedef struct s_blx	t_blx;

/// @brief Convert a keysym to a bit index
/// @param key the keysym to convert
/// @return the bit index
/// @note this is an internal function, you should not call it yourself
t_usize					keysym_to_bit_index(t_keysym key);

/// @brief Get a key from a key storage
/// @param key_storage the key storage
/// @param keysym the key to get
/// @return true if the key is present in the storage, false otherwise
bool					get_key(t_vec_u8 *key_storage, t_keysym keysym);

/// @brief is the key pressed
/// @param ctx The BLX context
/// @param key the key to check
/// @return true if the key is pressed, false otherwise
bool					is_key_pressed(t_blx *ctx, t_keysym key);

/// @brief is the key held
/// @param ctx The BLX context
/// @param key the key to check
/// @return  true if the key is held, false otherwise
bool					is_key_held(t_blx *ctx, t_keysym key);

/// @brief is the key released
/// @param ctx The BLX context
/// @param key the key to check
/// @return true if the key is released, false otherwise
bool					is_key_released(t_blx *ctx, t_keysym key);

#endif
