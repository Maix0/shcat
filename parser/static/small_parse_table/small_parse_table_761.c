/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_761.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3805(t_small_parse_table_array *v)
{
	v->a[76100] = 8;
	v->a[76101] = actions(3);
	v->a[76102] = 1;
	v->a[76103] = sym_comment;
	v->a[76104] = actions(3040);
	v->a[76105] = 1;
	v->a[76106] = anon_sym_POUND;
	v->a[76107] = actions(3042);
	v->a[76108] = 1;
	v->a[76109] = aux_sym__simple_variable_name_token1;
	v->a[76110] = actions(3044);
	v->a[76111] = 1;
	v->a[76112] = anon_sym_0;
	v->a[76113] = actions(3046);
	v->a[76114] = 1;
	v->a[76115] = sym_variable_name;
	v->a[76116] = actions(3224);
	v->a[76117] = 1;
	v->a[76118] = anon_sym_RBRACE;
	v->a[76119] = state(2040);
	small_parse_table_3806(v);
}

void	small_parse_table_3806(t_small_parse_table_array *v)
{
	v->a[76120] = 1;
	v->a[76121] = sym__expansion_body;
	v->a[76122] = actions(3038);
	v->a[76123] = 6;
	v->a[76124] = anon_sym_BANG;
	v->a[76125] = anon_sym_DASH;
	v->a[76126] = anon_sym_STAR;
	v->a[76127] = anon_sym_QMARK;
	v->a[76128] = anon_sym_DOLLAR;
	v->a[76129] = anon_sym_AT;
	v->a[76130] = 10;
	v->a[76131] = actions(3);
	v->a[76132] = 1;
	v->a[76133] = sym_comment;
	v->a[76134] = actions(3058);
	v->a[76135] = 1;
	v->a[76136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76137] = actions(3064);
	v->a[76138] = 1;
	v->a[76139] = sym_string_content;
	small_parse_table_3807(v);
}

void	small_parse_table_3807(t_small_parse_table_array *v)
{
	v->a[76140] = actions(3066);
	v->a[76141] = 1;
	v->a[76142] = anon_sym_DOLLAR_LBRACE;
	v->a[76143] = actions(3068);
	v->a[76144] = 1;
	v->a[76145] = anon_sym_DOLLAR_LPAREN;
	v->a[76146] = actions(3070);
	v->a[76147] = 1;
	v->a[76148] = anon_sym_BQUOTE;
	v->a[76149] = actions(3226);
	v->a[76150] = 1;
	v->a[76151] = anon_sym_DOLLAR;
	v->a[76152] = actions(3228);
	v->a[76153] = 1;
	v->a[76154] = anon_sym_DQUOTE;
	v->a[76155] = state(1633);
	v->a[76156] = 1;
	v->a[76157] = aux_sym_string_repeat1;
	v->a[76158] = state(1748);
	v->a[76159] = 4;
	small_parse_table_3808(v);
}

void	small_parse_table_3808(t_small_parse_table_array *v)
{
	v->a[76160] = sym_arithmetic_expansion;
	v->a[76161] = sym_simple_expansion;
	v->a[76162] = sym_expansion;
	v->a[76163] = sym_command_substitution;
	v->a[76164] = 10;
	v->a[76165] = actions(3);
	v->a[76166] = 1;
	v->a[76167] = sym_comment;
	v->a[76168] = actions(3058);
	v->a[76169] = 1;
	v->a[76170] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76171] = actions(3064);
	v->a[76172] = 1;
	v->a[76173] = sym_string_content;
	v->a[76174] = actions(3066);
	v->a[76175] = 1;
	v->a[76176] = anon_sym_DOLLAR_LBRACE;
	v->a[76177] = actions(3068);
	v->a[76178] = 1;
	v->a[76179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3809(v);
}

void	small_parse_table_3809(t_small_parse_table_array *v)
{
	v->a[76180] = actions(3070);
	v->a[76181] = 1;
	v->a[76182] = anon_sym_BQUOTE;
	v->a[76183] = actions(3230);
	v->a[76184] = 1;
	v->a[76185] = anon_sym_DOLLAR;
	v->a[76186] = actions(3232);
	v->a[76187] = 1;
	v->a[76188] = anon_sym_DQUOTE;
	v->a[76189] = state(1610);
	v->a[76190] = 1;
	v->a[76191] = aux_sym_string_repeat1;
	v->a[76192] = state(1748);
	v->a[76193] = 4;
	v->a[76194] = sym_arithmetic_expansion;
	v->a[76195] = sym_simple_expansion;
	v->a[76196] = sym_expansion;
	v->a[76197] = sym_command_substitution;
	v->a[76198] = 8;
	v->a[76199] = actions(3);
	small_parse_table_3810(v);
}

/* EOF small_parse_table_761.c */
