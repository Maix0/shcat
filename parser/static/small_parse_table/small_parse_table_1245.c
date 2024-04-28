/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1245.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6225(t_small_parse_table_array *v)
{
	v->a[124500] = anon_sym_AMP_GT_GT;
	v->a[124501] = anon_sym_GT_PIPE;
	v->a[124502] = anon_sym_LT_AMP_DASH;
	v->a[124503] = anon_sym_GT_AMP_DASH;
	v->a[124504] = anon_sym_LT_LT_DASH;
	v->a[124505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124506] = anon_sym_DOLLAR_LBRACK;
	v->a[124507] = sym__special_character;
	v->a[124508] = anon_sym_DQUOTE;
	v->a[124509] = sym_raw_string;
	v->a[124510] = sym_ansi_c_string;
	v->a[124511] = anon_sym_DOLLAR_LBRACE;
	v->a[124512] = anon_sym_DOLLAR_BQUOTE;
	v->a[124513] = anon_sym_LT_LPAREN;
	v->a[124514] = anon_sym_GT_LPAREN;
	v->a[124515] = 5;
	v->a[124516] = actions(71);
	v->a[124517] = 1;
	v->a[124518] = sym_comment;
	v->a[124519] = actions(1105);
	small_parse_table_6226(v);
}

void	small_parse_table_6226(t_small_parse_table_array *v)
{
	v->a[124520] = 1;
	v->a[124521] = aux_sym_concatenation_token1;
	v->a[124522] = state(2540);
	v->a[124523] = 1;
	v->a[124524] = aux_sym_concatenation_repeat1;
	v->a[124525] = actions(1261);
	v->a[124526] = 15;
	v->a[124527] = anon_sym_EQ;
	v->a[124528] = anon_sym_PIPE;
	v->a[124529] = anon_sym_CARET;
	v->a[124530] = anon_sym_AMP;
	v->a[124531] = anon_sym_LT;
	v->a[124532] = anon_sym_GT;
	v->a[124533] = anon_sym_LT_LT;
	v->a[124534] = anon_sym_GT_GT;
	v->a[124535] = anon_sym_PLUS;
	v->a[124536] = anon_sym_DASH;
	v->a[124537] = anon_sym_STAR;
	v->a[124538] = anon_sym_SLASH;
	v->a[124539] = anon_sym_PERCENT;
	small_parse_table_6227(v);
}

void	small_parse_table_6227(t_small_parse_table_array *v)
{
	v->a[124540] = anon_sym_STAR_STAR;
	v->a[124541] = sym__special_character;
	v->a[124542] = actions(1263);
	v->a[124543] = 24;
	v->a[124544] = sym__concat;
	v->a[124545] = sym_test_operator;
	v->a[124546] = anon_sym_PLUS_PLUS;
	v->a[124547] = anon_sym_DASH_DASH;
	v->a[124548] = anon_sym_PLUS_EQ;
	v->a[124549] = anon_sym_DASH_EQ;
	v->a[124550] = anon_sym_STAR_EQ;
	v->a[124551] = anon_sym_SLASH_EQ;
	v->a[124552] = anon_sym_PERCENT_EQ;
	v->a[124553] = anon_sym_STAR_STAR_EQ;
	v->a[124554] = anon_sym_LT_LT_EQ;
	v->a[124555] = anon_sym_GT_GT_EQ;
	v->a[124556] = anon_sym_AMP_EQ;
	v->a[124557] = anon_sym_CARET_EQ;
	v->a[124558] = anon_sym_PIPE_EQ;
	v->a[124559] = anon_sym_PIPE_PIPE;
	small_parse_table_6228(v);
}

void	small_parse_table_6228(t_small_parse_table_array *v)
{
	v->a[124560] = anon_sym_AMP_AMP;
	v->a[124561] = anon_sym_EQ_EQ;
	v->a[124562] = anon_sym_BANG_EQ;
	v->a[124563] = anon_sym_LT_EQ;
	v->a[124564] = anon_sym_GT_EQ;
	v->a[124565] = anon_sym_RBRACK;
	v->a[124566] = anon_sym_EQ_TILDE;
	v->a[124567] = anon_sym_QMARK;
	v->a[124568] = 3;
	v->a[124569] = actions(71);
	v->a[124570] = 1;
	v->a[124571] = sym_comment;
	v->a[124572] = actions(1332);
	v->a[124573] = 14;
	v->a[124574] = anon_sym_PIPE;
	v->a[124575] = anon_sym_LT;
	v->a[124576] = anon_sym_GT;
	v->a[124577] = anon_sym_LT_LT;
	v->a[124578] = anon_sym_AMP_GT;
	v->a[124579] = anon_sym_LT_AMP;
	small_parse_table_6229(v);
}

void	small_parse_table_6229(t_small_parse_table_array *v)
{
	v->a[124580] = anon_sym_GT_AMP;
	v->a[124581] = anon_sym_DOLLAR;
	v->a[124582] = sym__special_character;
	v->a[124583] = aux_sym_number_token1;
	v->a[124584] = aux_sym_number_token2;
	v->a[124585] = anon_sym_DOLLAR_LPAREN;
	v->a[124586] = anon_sym_BQUOTE;
	v->a[124587] = sym_word;
	v->a[124588] = actions(1334);
	v->a[124589] = 27;
	v->a[124590] = sym_file_descriptor;
	v->a[124591] = sym__concat;
	v->a[124592] = sym_variable_name;
	v->a[124593] = sym_test_operator;
	v->a[124594] = sym__brace_start;
	v->a[124595] = anon_sym_LPAREN_LPAREN;
	v->a[124596] = anon_sym_PIPE_PIPE;
	v->a[124597] = anon_sym_AMP_AMP;
	v->a[124598] = anon_sym_GT_GT;
	v->a[124599] = anon_sym_PIPE_AMP;
	small_parse_table_6230(v);
}

/* EOF small_parse_table_1245.c */
