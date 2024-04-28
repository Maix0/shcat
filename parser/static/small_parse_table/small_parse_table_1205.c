/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1205.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6025(t_small_parse_table_array *v)
{
	v->a[120500] = anon_sym_BQUOTE;
	v->a[120501] = anon_sym_DOLLAR_BQUOTE;
	v->a[120502] = anon_sym_LT_LPAREN;
	v->a[120503] = anon_sym_GT_LPAREN;
	v->a[120504] = sym_word;
	v->a[120505] = 5;
	v->a[120506] = actions(71);
	v->a[120507] = 1;
	v->a[120508] = sym_comment;
	v->a[120509] = state(2293);
	v->a[120510] = 1;
	v->a[120511] = aux_sym_concatenation_repeat1;
	v->a[120512] = actions(6441);
	v->a[120513] = 2;
	v->a[120514] = sym__concat;
	v->a[120515] = aux_sym_concatenation_token1;
	v->a[120516] = actions(2094);
	v->a[120517] = 14;
	v->a[120518] = anon_sym_PIPE;
	v->a[120519] = anon_sym_LT;
	small_parse_table_6026(v);
}

void	small_parse_table_6026(t_small_parse_table_array *v)
{
	v->a[120520] = anon_sym_GT;
	v->a[120521] = anon_sym_LT_LT;
	v->a[120522] = anon_sym_AMP_GT;
	v->a[120523] = anon_sym_LT_AMP;
	v->a[120524] = anon_sym_GT_AMP;
	v->a[120525] = anon_sym_DOLLAR;
	v->a[120526] = sym__special_character;
	v->a[120527] = aux_sym_number_token1;
	v->a[120528] = aux_sym_number_token2;
	v->a[120529] = anon_sym_DOLLAR_LPAREN;
	v->a[120530] = anon_sym_BQUOTE;
	v->a[120531] = sym_word;
	v->a[120532] = actions(2096);
	v->a[120533] = 25;
	v->a[120534] = sym_file_descriptor;
	v->a[120535] = sym_variable_name;
	v->a[120536] = sym_test_operator;
	v->a[120537] = sym__brace_start;
	v->a[120538] = anon_sym_LPAREN_LPAREN;
	v->a[120539] = anon_sym_PIPE_PIPE;
	small_parse_table_6027(v);
}

void	small_parse_table_6027(t_small_parse_table_array *v)
{
	v->a[120540] = anon_sym_AMP_AMP;
	v->a[120541] = anon_sym_GT_GT;
	v->a[120542] = anon_sym_PIPE_AMP;
	v->a[120543] = anon_sym_RBRACK;
	v->a[120544] = anon_sym_AMP_GT_GT;
	v->a[120545] = anon_sym_GT_PIPE;
	v->a[120546] = anon_sym_LT_AMP_DASH;
	v->a[120547] = anon_sym_GT_AMP_DASH;
	v->a[120548] = anon_sym_LT_LT_DASH;
	v->a[120549] = anon_sym_LT_LT_LT;
	v->a[120550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120551] = anon_sym_DOLLAR_LBRACK;
	v->a[120552] = anon_sym_DQUOTE;
	v->a[120553] = sym_raw_string;
	v->a[120554] = sym_ansi_c_string;
	v->a[120555] = anon_sym_DOLLAR_LBRACE;
	v->a[120556] = anon_sym_DOLLAR_BQUOTE;
	v->a[120557] = anon_sym_LT_LPAREN;
	v->a[120558] = anon_sym_GT_LPAREN;
	v->a[120559] = 3;
	small_parse_table_6028(v);
}

void	small_parse_table_6028(t_small_parse_table_array *v)
{
	v->a[120560] = actions(71);
	v->a[120561] = 1;
	v->a[120562] = sym_comment;
	v->a[120563] = actions(1344);
	v->a[120564] = 14;
	v->a[120565] = anon_sym_EQ;
	v->a[120566] = anon_sym_PIPE;
	v->a[120567] = anon_sym_CARET;
	v->a[120568] = anon_sym_AMP;
	v->a[120569] = anon_sym_LT;
	v->a[120570] = anon_sym_GT;
	v->a[120571] = anon_sym_LT_LT;
	v->a[120572] = anon_sym_GT_GT;
	v->a[120573] = anon_sym_PLUS;
	v->a[120574] = anon_sym_DASH;
	v->a[120575] = anon_sym_STAR;
	v->a[120576] = anon_sym_SLASH;
	v->a[120577] = anon_sym_PERCENT;
	v->a[120578] = anon_sym_STAR_STAR;
	v->a[120579] = actions(1346);
	small_parse_table_6029(v);
}

void	small_parse_table_6029(t_small_parse_table_array *v)
{
	v->a[120580] = 28;
	v->a[120581] = sym__concat;
	v->a[120582] = sym_test_operator;
	v->a[120583] = anon_sym_RPAREN_RPAREN;
	v->a[120584] = anon_sym_COMMA;
	v->a[120585] = anon_sym_PLUS_PLUS;
	v->a[120586] = anon_sym_DASH_DASH;
	v->a[120587] = anon_sym_PLUS_EQ;
	v->a[120588] = anon_sym_DASH_EQ;
	v->a[120589] = anon_sym_STAR_EQ;
	v->a[120590] = anon_sym_SLASH_EQ;
	v->a[120591] = anon_sym_PERCENT_EQ;
	v->a[120592] = anon_sym_STAR_STAR_EQ;
	v->a[120593] = anon_sym_LT_LT_EQ;
	v->a[120594] = anon_sym_GT_GT_EQ;
	v->a[120595] = anon_sym_AMP_EQ;
	v->a[120596] = anon_sym_CARET_EQ;
	v->a[120597] = anon_sym_PIPE_EQ;
	v->a[120598] = anon_sym_PIPE_PIPE;
	v->a[120599] = anon_sym_AMP_AMP;
	small_parse_table_6030(v);
}

/* EOF small_parse_table_1205.c */
