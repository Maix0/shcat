/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1387.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6935(t_small_parse_table_array *v)
{
	v->a[138700] = anon_sym_GT;
	v->a[138701] = anon_sym_LT_LT;
	v->a[138702] = anon_sym_GT_GT;
	v->a[138703] = anon_sym_PLUS;
	v->a[138704] = anon_sym_DASH;
	v->a[138705] = anon_sym_STAR;
	v->a[138706] = anon_sym_SLASH;
	v->a[138707] = anon_sym_PERCENT;
	v->a[138708] = anon_sym_STAR_STAR;
	v->a[138709] = actions(6805);
	v->a[138710] = 25;
	v->a[138711] = sym_test_operator;
	v->a[138712] = anon_sym_RPAREN_RPAREN;
	v->a[138713] = anon_sym_PLUS_PLUS;
	v->a[138714] = anon_sym_DASH_DASH;
	v->a[138715] = anon_sym_PLUS_EQ;
	v->a[138716] = anon_sym_DASH_EQ;
	v->a[138717] = anon_sym_STAR_EQ;
	v->a[138718] = anon_sym_SLASH_EQ;
	v->a[138719] = anon_sym_PERCENT_EQ;
	small_parse_table_6936(v);
}

void	small_parse_table_6936(t_small_parse_table_array *v)
{
	v->a[138720] = anon_sym_STAR_STAR_EQ;
	v->a[138721] = anon_sym_LT_LT_EQ;
	v->a[138722] = anon_sym_GT_GT_EQ;
	v->a[138723] = anon_sym_AMP_EQ;
	v->a[138724] = anon_sym_CARET_EQ;
	v->a[138725] = anon_sym_PIPE_EQ;
	v->a[138726] = anon_sym_PIPE_PIPE;
	v->a[138727] = anon_sym_AMP_AMP;
	v->a[138728] = anon_sym_EQ_EQ;
	v->a[138729] = anon_sym_BANG_EQ;
	v->a[138730] = anon_sym_LT_EQ;
	v->a[138731] = anon_sym_GT_EQ;
	v->a[138732] = anon_sym_RBRACK_RBRACK;
	v->a[138733] = anon_sym_EQ_TILDE;
	v->a[138734] = anon_sym_QMARK;
	v->a[138735] = anon_sym_COLON;
	v->a[138736] = 3;
	v->a[138737] = actions(71);
	v->a[138738] = 1;
	v->a[138739] = sym_comment;
	small_parse_table_6937(v);
}

void	small_parse_table_6937(t_small_parse_table_array *v)
{
	v->a[138740] = actions(1356);
	v->a[138741] = 14;
	v->a[138742] = anon_sym_PIPE;
	v->a[138743] = anon_sym_LT;
	v->a[138744] = anon_sym_GT;
	v->a[138745] = anon_sym_LT_LT;
	v->a[138746] = anon_sym_AMP_GT;
	v->a[138747] = anon_sym_LT_AMP;
	v->a[138748] = anon_sym_GT_AMP;
	v->a[138749] = anon_sym_DOLLAR;
	v->a[138750] = aux_sym_number_token1;
	v->a[138751] = aux_sym_number_token2;
	v->a[138752] = anon_sym_DOLLAR_LPAREN;
	v->a[138753] = anon_sym_BQUOTE;
	v->a[138754] = aux_sym__simple_variable_name_token1;
	v->a[138755] = sym_word;
	v->a[138756] = actions(1358);
	v->a[138757] = 25;
	v->a[138758] = sym_file_descriptor;
	v->a[138759] = sym__concat;
	small_parse_table_6938(v);
}

void	small_parse_table_6938(t_small_parse_table_array *v)
{
	v->a[138760] = sym_test_operator;
	v->a[138761] = sym__brace_start;
	v->a[138762] = anon_sym_LPAREN_LPAREN;
	v->a[138763] = anon_sym_PIPE_PIPE;
	v->a[138764] = anon_sym_AMP_AMP;
	v->a[138765] = anon_sym_GT_GT;
	v->a[138766] = anon_sym_PIPE_AMP;
	v->a[138767] = anon_sym_AMP_GT_GT;
	v->a[138768] = anon_sym_GT_PIPE;
	v->a[138769] = anon_sym_LT_AMP_DASH;
	v->a[138770] = anon_sym_GT_AMP_DASH;
	v->a[138771] = anon_sym_LT_LT_DASH;
	v->a[138772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138773] = anon_sym_DOLLAR_LBRACK;
	v->a[138774] = aux_sym_concatenation_token1;
	v->a[138775] = sym__special_character;
	v->a[138776] = anon_sym_DQUOTE;
	v->a[138777] = sym_raw_string;
	v->a[138778] = sym_ansi_c_string;
	v->a[138779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6939(v);
}

void	small_parse_table_6939(t_small_parse_table_array *v)
{
	v->a[138780] = anon_sym_DOLLAR_BQUOTE;
	v->a[138781] = anon_sym_LT_LPAREN;
	v->a[138782] = anon_sym_GT_LPAREN;
	v->a[138783] = 3;
	v->a[138784] = actions(71);
	v->a[138785] = 1;
	v->a[138786] = sym_comment;
	v->a[138787] = actions(1352);
	v->a[138788] = 14;
	v->a[138789] = anon_sym_PIPE;
	v->a[138790] = anon_sym_LT;
	v->a[138791] = anon_sym_GT;
	v->a[138792] = anon_sym_LT_LT;
	v->a[138793] = anon_sym_AMP_GT;
	v->a[138794] = anon_sym_LT_AMP;
	v->a[138795] = anon_sym_GT_AMP;
	v->a[138796] = anon_sym_DOLLAR;
	v->a[138797] = aux_sym_number_token1;
	v->a[138798] = aux_sym_number_token2;
	v->a[138799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6940(v);
}

/* EOF small_parse_table_1387.c */
