/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1285.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6425(t_small_parse_table_array *v)
{
	v->a[128500] = anon_sym_CARET;
	v->a[128501] = anon_sym_AMP;
	v->a[128502] = anon_sym_LT;
	v->a[128503] = anon_sym_GT;
	v->a[128504] = anon_sym_LT_LT;
	v->a[128505] = anon_sym_GT_GT;
	v->a[128506] = anon_sym_PLUS;
	v->a[128507] = anon_sym_DASH;
	v->a[128508] = anon_sym_STAR;
	v->a[128509] = anon_sym_SLASH;
	v->a[128510] = anon_sym_PERCENT;
	v->a[128511] = anon_sym_STAR_STAR;
	v->a[128512] = actions(1314);
	v->a[128513] = 26;
	v->a[128514] = sym_test_operator;
	v->a[128515] = sym_extglob_pattern;
	v->a[128516] = anon_sym_RPAREN_RPAREN;
	v->a[128517] = anon_sym_PLUS_PLUS;
	v->a[128518] = anon_sym_DASH_DASH;
	v->a[128519] = anon_sym_PLUS_EQ;
	small_parse_table_6426(v);
}

void	small_parse_table_6426(t_small_parse_table_array *v)
{
	v->a[128520] = anon_sym_DASH_EQ;
	v->a[128521] = anon_sym_STAR_EQ;
	v->a[128522] = anon_sym_SLASH_EQ;
	v->a[128523] = anon_sym_PERCENT_EQ;
	v->a[128524] = anon_sym_STAR_STAR_EQ;
	v->a[128525] = anon_sym_LT_LT_EQ;
	v->a[128526] = anon_sym_GT_GT_EQ;
	v->a[128527] = anon_sym_AMP_EQ;
	v->a[128528] = anon_sym_CARET_EQ;
	v->a[128529] = anon_sym_PIPE_EQ;
	v->a[128530] = anon_sym_PIPE_PIPE;
	v->a[128531] = anon_sym_AMP_AMP;
	v->a[128532] = anon_sym_EQ_EQ;
	v->a[128533] = anon_sym_BANG_EQ;
	v->a[128534] = anon_sym_LT_EQ;
	v->a[128535] = anon_sym_GT_EQ;
	v->a[128536] = anon_sym_RBRACK_RBRACK;
	v->a[128537] = anon_sym_EQ_TILDE;
	v->a[128538] = anon_sym_QMARK;
	v->a[128539] = anon_sym_COLON;
	small_parse_table_6427(v);
}

void	small_parse_table_6427(t_small_parse_table_array *v)
{
	v->a[128540] = 3;
	v->a[128541] = actions(71);
	v->a[128542] = 1;
	v->a[128543] = sym_comment;
	v->a[128544] = actions(1328);
	v->a[128545] = 14;
	v->a[128546] = anon_sym_PIPE;
	v->a[128547] = anon_sym_LT;
	v->a[128548] = anon_sym_GT;
	v->a[128549] = anon_sym_LT_LT;
	v->a[128550] = anon_sym_AMP_GT;
	v->a[128551] = anon_sym_LT_AMP;
	v->a[128552] = anon_sym_GT_AMP;
	v->a[128553] = anon_sym_DOLLAR;
	v->a[128554] = aux_sym_number_token1;
	v->a[128555] = aux_sym_number_token2;
	v->a[128556] = anon_sym_DOLLAR_LPAREN;
	v->a[128557] = anon_sym_BQUOTE;
	v->a[128558] = aux_sym__simple_variable_name_token1;
	v->a[128559] = sym_word;
	small_parse_table_6428(v);
}

void	small_parse_table_6428(t_small_parse_table_array *v)
{
	v->a[128560] = actions(1330);
	v->a[128561] = 26;
	v->a[128562] = sym_file_descriptor;
	v->a[128563] = sym__concat;
	v->a[128564] = sym_variable_name;
	v->a[128565] = sym_test_operator;
	v->a[128566] = sym__brace_start;
	v->a[128567] = anon_sym_LPAREN_LPAREN;
	v->a[128568] = anon_sym_PIPE_PIPE;
	v->a[128569] = anon_sym_AMP_AMP;
	v->a[128570] = anon_sym_GT_GT;
	v->a[128571] = anon_sym_PIPE_AMP;
	v->a[128572] = anon_sym_AMP_GT_GT;
	v->a[128573] = anon_sym_GT_PIPE;
	v->a[128574] = anon_sym_LT_AMP_DASH;
	v->a[128575] = anon_sym_GT_AMP_DASH;
	v->a[128576] = anon_sym_LT_LT_DASH;
	v->a[128577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128578] = anon_sym_DOLLAR_LBRACK;
	v->a[128579] = aux_sym_concatenation_token1;
	small_parse_table_6429(v);
}

void	small_parse_table_6429(t_small_parse_table_array *v)
{
	v->a[128580] = sym__special_character;
	v->a[128581] = anon_sym_DQUOTE;
	v->a[128582] = sym_raw_string;
	v->a[128583] = sym_ansi_c_string;
	v->a[128584] = anon_sym_DOLLAR_LBRACE;
	v->a[128585] = anon_sym_DOLLAR_BQUOTE;
	v->a[128586] = anon_sym_LT_LPAREN;
	v->a[128587] = anon_sym_GT_LPAREN;
	v->a[128588] = 7;
	v->a[128589] = actions(71);
	v->a[128590] = 1;
	v->a[128591] = sym_comment;
	v->a[128592] = actions(1115);
	v->a[128593] = 1;
	v->a[128594] = anon_sym_RBRACK;
	v->a[128595] = actions(6652);
	v->a[128596] = 1;
	v->a[128597] = sym__special_character;
	v->a[128598] = actions(6654);
	v->a[128599] = 1;
	small_parse_table_6430(v);
}

/* EOF small_parse_table_1285.c */
