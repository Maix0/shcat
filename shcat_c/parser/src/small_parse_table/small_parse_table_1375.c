/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1375.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6875(t_small_parse_table_array *v)
{
	v->a[137500] = sym_ansi_c_string;
	v->a[137501] = anon_sym_DOLLAR_LBRACE;
	v->a[137502] = anon_sym_BQUOTE;
	v->a[137503] = anon_sym_DOLLAR_BQUOTE;
	v->a[137504] = anon_sym_LT_LPAREN;
	v->a[137505] = anon_sym_GT_LPAREN;
	v->a[137506] = 3;
	v->a[137507] = actions(71);
	v->a[137508] = 1;
	v->a[137509] = sym_comment;
	v->a[137510] = actions(4552);
	v->a[137511] = 13;
	v->a[137512] = anon_sym_PIPE;
	v->a[137513] = anon_sym_LT;
	v->a[137514] = anon_sym_GT;
	v->a[137515] = anon_sym_LT_LT;
	v->a[137516] = anon_sym_AMP_GT;
	v->a[137517] = anon_sym_LT_AMP;
	v->a[137518] = anon_sym_GT_AMP;
	v->a[137519] = anon_sym_DOLLAR;
	small_parse_table_6876(v);
}

void	small_parse_table_6876(t_small_parse_table_array *v)
{
	v->a[137520] = sym__special_character;
	v->a[137521] = aux_sym_number_token1;
	v->a[137522] = aux_sym_number_token2;
	v->a[137523] = anon_sym_DOLLAR_LPAREN;
	v->a[137524] = sym_word;
	v->a[137525] = actions(4554);
	v->a[137526] = 26;
	v->a[137527] = sym_file_descriptor;
	v->a[137528] = sym_variable_name;
	v->a[137529] = sym_test_operator;
	v->a[137530] = sym__brace_start;
	v->a[137531] = anon_sym_LPAREN_LPAREN;
	v->a[137532] = anon_sym_PIPE_PIPE;
	v->a[137533] = anon_sym_AMP_AMP;
	v->a[137534] = anon_sym_GT_GT;
	v->a[137535] = anon_sym_PIPE_AMP;
	v->a[137536] = anon_sym_RBRACK;
	v->a[137537] = anon_sym_AMP_GT_GT;
	v->a[137538] = anon_sym_GT_PIPE;
	v->a[137539] = anon_sym_LT_AMP_DASH;
	small_parse_table_6877(v);
}

void	small_parse_table_6877(t_small_parse_table_array *v)
{
	v->a[137540] = anon_sym_GT_AMP_DASH;
	v->a[137541] = anon_sym_LT_LT_DASH;
	v->a[137542] = anon_sym_LT_LT_LT;
	v->a[137543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137544] = anon_sym_DOLLAR_LBRACK;
	v->a[137545] = anon_sym_DQUOTE;
	v->a[137546] = sym_raw_string;
	v->a[137547] = sym_ansi_c_string;
	v->a[137548] = anon_sym_DOLLAR_LBRACE;
	v->a[137549] = anon_sym_BQUOTE;
	v->a[137550] = anon_sym_DOLLAR_BQUOTE;
	v->a[137551] = anon_sym_LT_LPAREN;
	v->a[137552] = anon_sym_GT_LPAREN;
	v->a[137553] = 3;
	v->a[137554] = actions(71);
	v->a[137555] = 1;
	v->a[137556] = sym_comment;
	v->a[137557] = actions(1356);
	v->a[137558] = 14;
	v->a[137559] = anon_sym_EQ;
	small_parse_table_6878(v);
}

void	small_parse_table_6878(t_small_parse_table_array *v)
{
	v->a[137560] = anon_sym_PIPE;
	v->a[137561] = anon_sym_CARET;
	v->a[137562] = anon_sym_AMP;
	v->a[137563] = anon_sym_LT;
	v->a[137564] = anon_sym_GT;
	v->a[137565] = anon_sym_LT_LT;
	v->a[137566] = anon_sym_GT_GT;
	v->a[137567] = anon_sym_PLUS;
	v->a[137568] = anon_sym_DASH;
	v->a[137569] = anon_sym_STAR;
	v->a[137570] = anon_sym_SLASH;
	v->a[137571] = anon_sym_PERCENT;
	v->a[137572] = anon_sym_STAR_STAR;
	v->a[137573] = actions(1358);
	v->a[137574] = 25;
	v->a[137575] = sym__concat;
	v->a[137576] = sym_test_operator;
	v->a[137577] = anon_sym_PLUS_PLUS;
	v->a[137578] = anon_sym_DASH_DASH;
	v->a[137579] = anon_sym_PLUS_EQ;
	small_parse_table_6879(v);
}

void	small_parse_table_6879(t_small_parse_table_array *v)
{
	v->a[137580] = anon_sym_DASH_EQ;
	v->a[137581] = anon_sym_STAR_EQ;
	v->a[137582] = anon_sym_SLASH_EQ;
	v->a[137583] = anon_sym_PERCENT_EQ;
	v->a[137584] = anon_sym_STAR_STAR_EQ;
	v->a[137585] = anon_sym_LT_LT_EQ;
	v->a[137586] = anon_sym_GT_GT_EQ;
	v->a[137587] = anon_sym_AMP_EQ;
	v->a[137588] = anon_sym_CARET_EQ;
	v->a[137589] = anon_sym_PIPE_EQ;
	v->a[137590] = anon_sym_PIPE_PIPE;
	v->a[137591] = anon_sym_AMP_AMP;
	v->a[137592] = anon_sym_EQ_EQ;
	v->a[137593] = anon_sym_BANG_EQ;
	v->a[137594] = anon_sym_LT_EQ;
	v->a[137595] = anon_sym_GT_EQ;
	v->a[137596] = anon_sym_RPAREN;
	v->a[137597] = anon_sym_EQ_TILDE;
	v->a[137598] = anon_sym_QMARK;
	v->a[137599] = aux_sym_concatenation_token1;
	small_parse_table_6880(v);
}

/* EOF small_parse_table_1375.c */
